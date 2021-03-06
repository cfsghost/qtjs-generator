// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QCOMPLETER_H
#define CPGF_META_QTWIDGETS_QCOMPLETER_H


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
void buildMetaClass_QCompleter(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QAbstractItemModel *, QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStringList &, QObject *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("setWidget", &D::ClassType::setWidget);
    _d.CPGF_MD_TEMPLATE _method("widget", &D::ClassType::widget);
    _d.CPGF_MD_TEMPLATE _method("setModel", &D::ClassType::setModel);
    _d.CPGF_MD_TEMPLATE _method("model", &D::ClassType::model);
    _d.CPGF_MD_TEMPLATE _method("setCompletionMode", &D::ClassType::setCompletionMode);
    _d.CPGF_MD_TEMPLATE _method("completionMode", &D::ClassType::completionMode);
    _d.CPGF_MD_TEMPLATE _method("setFilterMode", &D::ClassType::setFilterMode);
    _d.CPGF_MD_TEMPLATE _method("filterMode", &D::ClassType::filterMode);
    _d.CPGF_MD_TEMPLATE _method("popup", &D::ClassType::popup);
    _d.CPGF_MD_TEMPLATE _method("setPopup", &D::ClassType::setPopup);
    _d.CPGF_MD_TEMPLATE _method("setCaseSensitivity", &D::ClassType::setCaseSensitivity);
    _d.CPGF_MD_TEMPLATE _method("caseSensitivity", &D::ClassType::caseSensitivity);
    _d.CPGF_MD_TEMPLATE _method("setModelSorting", &D::ClassType::setModelSorting);
    _d.CPGF_MD_TEMPLATE _method("modelSorting", &D::ClassType::modelSorting);
    _d.CPGF_MD_TEMPLATE _method("setCompletionColumn", &D::ClassType::setCompletionColumn);
    _d.CPGF_MD_TEMPLATE _method("completionColumn", &D::ClassType::completionColumn);
    _d.CPGF_MD_TEMPLATE _method("setCompletionRole", &D::ClassType::setCompletionRole);
    _d.CPGF_MD_TEMPLATE _method("completionRole", &D::ClassType::completionRole);
    _d.CPGF_MD_TEMPLATE _method("wrapAround", &D::ClassType::wrapAround);
    _d.CPGF_MD_TEMPLATE _method("maxVisibleItems", &D::ClassType::maxVisibleItems);
    _d.CPGF_MD_TEMPLATE _method("setMaxVisibleItems", &D::ClassType::setMaxVisibleItems);
    _d.CPGF_MD_TEMPLATE _method("completionCount", &D::ClassType::completionCount);
    _d.CPGF_MD_TEMPLATE _method("setCurrentRow", &D::ClassType::setCurrentRow);
    _d.CPGF_MD_TEMPLATE _method("currentRow", &D::ClassType::currentRow);
    _d.CPGF_MD_TEMPLATE _method("currentIndex", &D::ClassType::currentIndex);
    _d.CPGF_MD_TEMPLATE _method("currentCompletion", &D::ClassType::currentCompletion);
    _d.CPGF_MD_TEMPLATE _method("completionModel", &D::ClassType::completionModel);
    _d.CPGF_MD_TEMPLATE _method("completionPrefix", &D::ClassType::completionPrefix);
    _d.CPGF_MD_TEMPLATE _method("setCompletionPrefix", &D::ClassType::setCompletionPrefix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("complete", &D::ClassType::complete)
        ._default(copyVariantFromCopyable(QRect()))
    ;
    _d.CPGF_MD_TEMPLATE _method("setWrapAround", &D::ClassType::setWrapAround);
    _d.CPGF_MD_TEMPLATE _method("pathFromIndex", &D::ClassType::pathFromIndex);
    _d.CPGF_MD_TEMPLATE _method("splitPath", &D::ClassType::splitPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CompletionMode>("CompletionMode")
        ._element("PopupCompletion", D::ClassType::PopupCompletion)
        ._element("UnfilteredPopupCompletion", D::ClassType::UnfilteredPopupCompletion)
        ._element("InlineCompletion", D::ClassType::InlineCompletion)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ModelSorting>("ModelSorting")
        ._element("UnsortedModel", D::ClassType::UnsortedModel)
        ._element("CaseSensitivelySortedModel", D::ClassType::CaseSensitivelySortedModel)
        ._element("CaseInsensitivelySortedModel", D::ClassType::CaseInsensitivelySortedModel)
    ;
}


class QCompleterWrapper : public QCompleter, public cpgf::GScriptWrapper {
public:
    
    QCompleterWrapper(QObject * parent = 0)
        : QCompleter(parent) {}
    
    QCompleterWrapper(QAbstractItemModel * model, QObject * parent = 0)
        : QCompleter(model, parent) {}
    
    QCompleterWrapper(const QStringList & completions, QObject * parent = 0)
        : QCompleter(completions, parent) {}
    
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
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
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
    
    QString pathFromIndex(const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("pathFromIndex"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunction(func.get(), this, index));
        }
        return QCompleter::pathFromIndex(index);
    }
    QString super_pathFromIndex(const QModelIndex & index) const
    {
        return QCompleter::pathFromIndex(index);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    QStringList splitPath(const QString & path) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("splitPath"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunction(func.get(), this, path));
        }
        return QCompleter::splitPath(path);
    }
    QStringList super_splitPath(const QString & path) const
    {
        return QCompleter::splitPath(path);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void activated(const QModelIndex & index)
    {
        QCompleter::activated(index);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QCompleter::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QCompleter::qt_metacast(__arg0);
    }
    
    bool eventFilter(QObject * o, QEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, o, e));
        }
        return QCompleter::eventFilter(o, e);
    }
    bool super_eventFilter(QObject * o, QEvent * e)
    {
        return QCompleter::eventFilter(o, e);
    }
    
    void highlighted(const QModelIndex & index)
    {
        QCompleter::highlighted(index);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QCompleter::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QCompleter::metaObject();
    }
    
    void highlighted(const QString & text)
    {
        QCompleter::highlighted(text);
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
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QCompleter::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QCompleter::event(__arg0);
    }
    
    void activated(const QString & text)
    {
        QCompleter::activated(text);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QCompleter::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QCompleter::qt_metacall(__arg0, __arg1, __arg2);
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
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("activated", (void (D::ClassType::*) (const QModelIndex &))&D::ClassType::activated);
        _d.CPGF_MD_TEMPLATE _method("eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::eventFilter);
        _d.CPGF_MD_TEMPLATE _method("highlighted", (void (D::ClassType::*) (const QModelIndex &))&D::ClassType::highlighted);
        _d.CPGF_MD_TEMPLATE _method("highlighted", (void (D::ClassType::*) (const QString &))&D::ClassType::highlighted, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("activated", (void (D::ClassType::*) (const QString &))&D::ClassType::activated, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_pathFromIndex", (QString (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_pathFromIndex);
        _d.CPGF_MD_TEMPLATE _method("super_splitPath", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_splitPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
    }
};


template <typename D>
void buildMetaClass_QCompleterWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QCompleterWrapper::cpgf__register(_d);
    
    buildMetaClass_QCompleter<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
