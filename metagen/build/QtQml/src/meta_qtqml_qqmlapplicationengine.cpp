// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQml/qqmlapplicationengine.h>

#include "meta_qtqml_qqmlapplicationengine.h"

using namespace cpgf;

namespace meta_qtqml { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QQmlApplicationEngine()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QQmlApplicationEngine, QQmlEngine> _nd = GDefineMetaClass<QQmlApplicationEngine, QQmlEngine>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QQmlApplicationEngine");
        buildMetaClass_QQmlApplicationEngine(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QQmlApplicationEngineWrapper, QQmlApplicationEngine> _nd = GDefineMetaClass<QQmlApplicationEngineWrapper, QQmlApplicationEngine>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QQmlApplicationEngineWrapper");
        buildMetaClass_QQmlApplicationEngineWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtqml

