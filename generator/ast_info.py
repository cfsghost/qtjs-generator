
import re
from clang.cindex import Index
from clang.cindex import CursorKind
from clang.cindex import TypeKind
from pprint import pprint

def retrieve_semantic_parents_chain(node):
    ret = []
    node = node.semantic_parent
    while node and node.kind not in [CursorKind.TRANSLATION_UNIT]:
        ret.append(node)
        node = node.semantic_parent
    ret.reverse()
    return ret

def type_to_string(type):
    ret = ""
    if type.is_const_qualified():
        ret += 'const '
    if type.kind == TypeKind.POINTER:
        ret += type_to_string(type.get_pointee()) + ' *'
    elif type.kind == TypeKind.LVALUEREFERENCE:
        ret += type_to_string(type.get_pointee()) + ' &'
    elif type.kind == TypeKind.VOID:
        ret += 'void'
    elif type.kind == TypeKind.RECORD:
        decl = type.get_declaration()
        ret += '::'.join([p.displayname for p in retrieve_semantic_parents_chain(decl)]) + '::' + decl.displayname
    elif type.kind == TypeKind.CHAR_S:
        ret += 'char'
    elif type.kind == TypeKind.INT:
        ret += 'int'
    elif type.kind == TypeKind.UINT:
        ret += 'unsigned int'
    elif type.kind == TypeKind.BOOL:
        ret += 'bool'
    elif type.kind == TypeKind.LONGLONG:
        ret += 'long long'
    elif type.kind == TypeKind.ULONGLONG:
        ret += 'unsigned long long'
    elif type.kind == TypeKind.ENUM:
        decl = type.get_declaration()
        ret += '::'.join([p.displayname for p in retrieve_semantic_parents_chain(decl)]) + '::' + decl.displayname
    else:
        ret += "UNKNOWN: "+type.kind.spelling
        pprint(type.kind)
    #print ret
    return ret

def get_info(node, recursive=True, print_type=True):
    if recursive:
        children = [get_info(c, recursive) for c in node.get_children()]
    else:
        children = None
    if print_type:
        type = type_to_string(node.type.get_canonical())
    else:
        type = None
    return { 
             'kind' : node.kind,
             'displayname' : node.displayname,
             'type' : type,
             'usr' : node.get_usr(),
             'spelling' : node.spelling,
             'location' : node.location,
             'extent.start' : node.extent.start,
             'extent.end' : node.extent.end,
             'is_definition' : node.is_definition(),
             'resultType' : node.result_type,
             'access' : node.access,
             'children' : children }

def get_diag_info(diag):
    return { 'severity' : diag.severity,
             'location' : diag.location,
             'spelling' : diag.spelling,
             'ranges' : diag.ranges,
             'fixits' : diag.fixits }

def recursive_iterator(node):
    yield node
    for c in node.get_children():
        for c1 in recursive_iterator(c):
            yield c1

def retrieve_classes(node):
    for n in recursive_iterator(node):
        if n.kind == CursorKind.CLASS_DECL and n.is_definition():
            yield n

def retrieve_class_parents(node):
    for n in node.get_children():
        if n.kind == CursorKind.CXX_BASE_SPECIFIER and n.access == 'public':
            for br in n.get_children():
                if br.kind == CursorKind.TYPE_REF:
                    yield br.referenced

def retrieve_class_constructors(node):
    for n in node.get_children():
        if n.kind == CursorKind.CONSTRUCTOR:
            yield n

def retrieve_class_destructors(node):
    for n in node.get_children():
        if n.kind == CursorKind.DESTRUCTOR:
            yield n

def retrieve_class_methods(node):
    access = 'private'
    for n in node.get_children():
        if n.access != None:
            access = n.access
        if n.kind == CursorKind.CXX_METHOD and not n.is_static_method() and access == 'public':
            yield n

def retrieve_method_params(node):
    for n in node.get_children():
        if n.kind == CursorKind.PARM_DECL:
            yield n

def parse_method_usr(usrString): 
    m = re.search(r'#([0-9]+)$', usrString)
    if (m):
        i = int(m.group(1))
        return {'const':i&1 != 0, 'volatile': i&4 != 0, 'restrict': i&2 != 0}
    return {'const': False, 'volatile': False, 'restrict': False}

