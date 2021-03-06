// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QTEXTTABLE_H
#define CPGF_META_QTGUI_QTEXTTABLE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QTextTable(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QTextDocument *)>();
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("resize", &D::ClassType::resize);
    _d.CPGF_MD_TEMPLATE _method("insertRows", &D::ClassType::insertRows);
    _d.CPGF_MD_TEMPLATE _method("insertColumns", &D::ClassType::insertColumns);
    _d.CPGF_MD_TEMPLATE _method("appendRows", &D::ClassType::appendRows);
    _d.CPGF_MD_TEMPLATE _method("appendColumns", &D::ClassType::appendColumns);
    _d.CPGF_MD_TEMPLATE _method("removeRows", &D::ClassType::removeRows);
    _d.CPGF_MD_TEMPLATE _method("removeColumns", &D::ClassType::removeColumns);
    _d.CPGF_MD_TEMPLATE _method("mergeCells", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::mergeCells);
    _d.CPGF_MD_TEMPLATE _method("mergeCells", (void (D::ClassType::*) (const QTextCursor &))&D::ClassType::mergeCells, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("splitCell", &D::ClassType::splitCell);
    _d.CPGF_MD_TEMPLATE _method("rows", &D::ClassType::rows);
    _d.CPGF_MD_TEMPLATE _method("columns", &D::ClassType::columns);
    _d.CPGF_MD_TEMPLATE _method("cellAt", (QTextTableCell (D::ClassType::*) (int, int) const)&D::ClassType::cellAt);
    _d.CPGF_MD_TEMPLATE _method("cellAt", (QTextTableCell (D::ClassType::*) (int) const)&D::ClassType::cellAt);
    _d.CPGF_MD_TEMPLATE _method("cellAt", (QTextTableCell (D::ClassType::*) (const QTextCursor &) const)&D::ClassType::cellAt, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("rowStart", &D::ClassType::rowStart, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("rowEnd", &D::ClassType::rowEnd, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setFormat", &D::ClassType::setFormat);
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QTextTableWrapper : public QTextTable, public cpgf::GScriptWrapper {
public:
    
    QTextTableWrapper(QTextDocument * doc)
        : QTextTable(doc) {}
    
    void setFormat(const QTextFormat & format)
    {
        QTextObject::setFormat(format);
    }
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    void childEvent(QChildEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::childEvent(__arg0);
    }
    void super_childEvent(QChildEvent * __arg0)
    {
        QObject::childEvent(__arg0);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QTextTable::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QTextTable::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void timerEvent(QTimerEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::timerEvent(__arg0);
    }
    void super_timerEvent(QTimerEvent * __arg0)
    {
        QObject::timerEvent(__arg0);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1));
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QTextTable::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QTextTable::qt_metacast(__arg0);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QTextTable::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QTextTable::metaObject();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("setFormat", (void (D::ClassType::*) (const QTextFormat &))&D::ClassType::setFormat, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
    }
};


template <typename D>
void buildMetaClass_QTextTableWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QTextTableWrapper::cpgf__register(_d);
    
    buildMetaClass_QTextTable<D>(_d);
}


inline QTextTableCell & opErAToRWrapper_QTextTableCell__opAssign(QTextTableCell * self, const QTextTableCell & o) {
    return (*self) = o;
}
inline bool opErAToRWrapper_QTextTableCell__opEqual(const QTextTableCell * self, const QTextTableCell & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QTextTableCell__opNotEqual(const QTextTableCell * self, const QTextTableCell & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QTextTableCell(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QTextTableCell &)>();
    _d.CPGF_MD_TEMPLATE _method("setFormat", &D::ClassType::setFormat);
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("row", &D::ClassType::row);
    _d.CPGF_MD_TEMPLATE _method("column", &D::ClassType::column);
    _d.CPGF_MD_TEMPLATE _method("rowSpan", &D::ClassType::rowSpan);
    _d.CPGF_MD_TEMPLATE _method("columnSpan", &D::ClassType::columnSpan);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("firstCursorPosition", &D::ClassType::firstCursorPosition);
    _d.CPGF_MD_TEMPLATE _method("lastCursorPosition", &D::ClassType::lastCursorPosition);
    _d.CPGF_MD_TEMPLATE _method("firstPosition", &D::ClassType::firstPosition);
    _d.CPGF_MD_TEMPLATE _method("lastPosition", &D::ClassType::lastPosition);
    _d.CPGF_MD_TEMPLATE _method("begin", &D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("end", &D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("tableCellFormatIndex", &D::ClassType::tableCellFormatIndex);
    _d.CPGF_MD_TEMPLATE _operator<QTextTableCell & (*)(cpgf::GMetaSelf, const QTextTableCell &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QTextTableCell & (*) (QTextTableCell *, const QTextTableCell &))&opErAToRWrapper_QTextTableCell__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTextTableCell &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QTextTableCell *, const QTextTableCell &))&opErAToRWrapper_QTextTableCell__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTextTableCell &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QTextTableCell *, const QTextTableCell &))&opErAToRWrapper_QTextTableCell__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
