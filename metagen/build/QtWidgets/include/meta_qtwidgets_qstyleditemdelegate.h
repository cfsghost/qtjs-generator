// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QSTYLEDITEMDELEGATE_H
#define CPGF_META_QTWIDGETS_QSTYLEDITEMDELEGATE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QStyledItemDelegate(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint);
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("createEditor", &D::ClassType::createEditor);
    _d.CPGF_MD_TEMPLATE _method("setEditorData", &D::ClassType::setEditorData);
    _d.CPGF_MD_TEMPLATE _method("setModelData", &D::ClassType::setModelData);
    _d.CPGF_MD_TEMPLATE _method("updateEditorGeometry", &D::ClassType::updateEditorGeometry);
    _d.CPGF_MD_TEMPLATE _method("itemEditorFactory", &D::ClassType::itemEditorFactory);
    _d.CPGF_MD_TEMPLATE _method("setItemEditorFactory", &D::ClassType::setItemEditorFactory);
    _d.CPGF_MD_TEMPLATE _method("displayText", &D::ClassType::displayText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QStyledItemDelegateWrapper : public QStyledItemDelegate, public cpgf::GScriptWrapper {
public:
    
    QStyledItemDelegateWrapper(QObject * parent = 0)
        : QStyledItemDelegate(parent) {}
    
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
    
    bool editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("editorEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, event, model, option, index));
        }
        return QStyledItemDelegate::editorEvent(event, model, option, index);
    }
    bool super_editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index)
    {
        return QStyledItemDelegate::editorEvent(event, model, option, index);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QStyledItemDelegate::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QStyledItemDelegate::qt_metacast(__arg0);
    }
    
    void destroyEditor(QWidget * editor, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("destroyEditor"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, editor, index);
            return;
        }
        QAbstractItemDelegate::destroyEditor(editor, index);
    }
    void super_destroyEditor(QWidget * editor, const QModelIndex & index) const
    {
        QAbstractItemDelegate::destroyEditor(editor, index);
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
    
    void setEditorData(QWidget * editor, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setEditorData"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, editor, index);
            return;
        }
        QStyledItemDelegate::setEditorData(editor, index);
    }
    void super_setEditorData(QWidget * editor, const QModelIndex & index) const
    {
        QStyledItemDelegate::setEditorData(editor, index);
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
    
    void initStyleOption(QStyleOptionViewItem * option, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("initStyleOption"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, option, index);
            return;
        }
        QStyledItemDelegate::initStyleOption(option, index);
    }
    void super_initStyleOption(QStyleOptionViewItem * option, const QModelIndex & index) const
    {
        QStyledItemDelegate::initStyleOption(option, index);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    bool helpEvent(QHelpEvent * event, QAbstractItemView * view, const QStyleOptionViewItem & option, const QModelIndex & index)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("helpEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, event, view, option, index));
        }
        return QAbstractItemDelegate::helpEvent(event, view, option, index);
    }
    bool super_helpEvent(QHelpEvent * event, QAbstractItemView * view, const QStyleOptionViewItem & option, const QModelIndex & index)
    {
        return QAbstractItemDelegate::helpEvent(event, view, option, index);
    }
    
    QString displayText(const QVariant & value, const QLocale & locale) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("displayText"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunction(func.get(), this, value, locale));
        }
        return QStyledItemDelegate::displayText(value, locale);
    }
    QString super_displayText(const QVariant & value, const QLocale & locale) const
    {
        return QStyledItemDelegate::displayText(value, locale);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    QVector< int > paintingRoles() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintingRoles"));
        if(func)
        {
            return cpgf::fromVariant<QVector< int > >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QAbstractItemDelegate::paintingRoles();
    }
    QVector< int > super_paintingRoles() const
    {
        return QAbstractItemDelegate::paintingRoles();
    }
    
    void paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, painter, option, index);
            return;
        }
        QStyledItemDelegate::paint(painter, option, index);
    }
    void super_paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        QStyledItemDelegate::paint(painter, option, index);
    }
    
    QSize sizeHint(const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this, option, index));
        }
        return QStyledItemDelegate::sizeHint(option, index);
    }
    QSize super_sizeHint(const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        return QStyledItemDelegate::sizeHint(option, index);
    }
    
    void setModelData(QWidget * editor, QAbstractItemModel * model, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setModelData"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, editor, model, index);
            return;
        }
        QStyledItemDelegate::setModelData(editor, model, index);
    }
    void super_setModelData(QWidget * editor, QAbstractItemModel * model, const QModelIndex & index) const
    {
        QStyledItemDelegate::setModelData(editor, model, index);
    }
    
    bool eventFilter(QObject * object, QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, object, event));
        }
        return QStyledItemDelegate::eventFilter(object, event);
    }
    bool super_eventFilter(QObject * object, QEvent * event)
    {
        return QStyledItemDelegate::eventFilter(object, event);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QStyledItemDelegate::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QStyledItemDelegate::metaObject();
    }
    
    QWidget * createEditor(QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createEditor"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunction(func.get(), this, parent, option, index));
        }
        return QStyledItemDelegate::createEditor(parent, option, index);
    }
    QWidget * super_createEditor(QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        return QStyledItemDelegate::createEditor(parent, option, index);
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
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QStyledItemDelegate::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QStyledItemDelegate::qt_metacall(__arg0, __arg1, __arg2);
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
    
    void updateEditorGeometry(QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateEditorGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, editor, option, index);
            return;
        }
        QStyledItemDelegate::updateEditorGeometry(editor, option, index);
    }
    void super_updateEditorGeometry(QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        QStyledItemDelegate::updateEditorGeometry(editor, option, index);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("editorEvent", (bool (D::ClassType::*) (QEvent *, QAbstractItemModel *, const QStyleOptionViewItem &, const QModelIndex &))&D::ClassType::editorEvent);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("initStyleOption", (void (D::ClassType::*) (QStyleOptionViewItem *, const QModelIndex &) const)&D::ClassType::initStyleOption);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::eventFilter);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_editorEvent", (bool (D::ClassType::*) (QEvent *, QAbstractItemModel *, const QStyleOptionViewItem &, const QModelIndex &))&D::ClassType::super_editorEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_destroyEditor", (void (D::ClassType::*) (QWidget *, const QModelIndex &) const)&D::ClassType::super_destroyEditor);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_setEditorData", (void (D::ClassType::*) (QWidget *, const QModelIndex &) const)&D::ClassType::super_setEditorData);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_initStyleOption", (void (D::ClassType::*) (QStyleOptionViewItem *, const QModelIndex &) const)&D::ClassType::super_initStyleOption);
        _d.CPGF_MD_TEMPLATE _method("super_helpEvent", (bool (D::ClassType::*) (QHelpEvent *, QAbstractItemView *, const QStyleOptionViewItem &, const QModelIndex &))&D::ClassType::super_helpEvent);
        _d.CPGF_MD_TEMPLATE _method("super_displayText", (QString (D::ClassType::*) (const QVariant &, const QLocale &) const)&D::ClassType::super_displayText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_paintingRoles", (QVector< int > (D::ClassType::*) () const)&D::ClassType::super_paintingRoles);
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionViewItem &, const QModelIndex &) const)&D::ClassType::super_paint);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) (const QStyleOptionViewItem &, const QModelIndex &) const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_setModelData", (void (D::ClassType::*) (QWidget *, QAbstractItemModel *, const QModelIndex &) const)&D::ClassType::super_setModelData);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_createEditor", (QWidget * (D::ClassType::*) (QWidget *, const QStyleOptionViewItem &, const QModelIndex &) const)&D::ClassType::super_createEditor);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_updateEditorGeometry", (void (D::ClassType::*) (QWidget *, const QStyleOptionViewItem &, const QModelIndex &) const)&D::ClassType::super_updateEditorGeometry);
    }
};


template <typename D>
void buildMetaClass_QStyledItemDelegateWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QStyledItemDelegateWrapper::cpgf__register(_d);
    
    buildMetaClass_QStyledItemDelegate<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
