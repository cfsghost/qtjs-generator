// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qstandarditemmodel.h>

#include "meta_qtgui_qstandarditemmodel.h"

using namespace cpgf;

namespace qt_metadata { 


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_Global_qstandarditemmodel()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qstandarditemmodel(_d);
    return _d.getMetaInfo();
}


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_QStandardItem()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QStandardItem> _nd = GDefineMetaClass<QStandardItem>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QStandardItem", &buildMetaClass_QStandardItem);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_QStandardItemModel()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QStandardItemModel, QAbstractItemModel> _nd = GDefineMetaClass<QStandardItemModel, QAbstractItemModel>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QStandardItemModel", &buildMetaClass_QStandardItemModel);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QStandardItemModelWrapper, QStandardItemModel> _nd = GDefineMetaClass<QStandardItemModelWrapper, QStandardItemModel>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QStandardItemModelWrapper", &buildMetaClass_QStandardItemModelWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace qt_metadata


