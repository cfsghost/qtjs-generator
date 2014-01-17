// Auto generated file, don't modify.

#ifndef __META_QTQML_QQUICKPAINTEDITEM_H
#define __META_QTQML_QQUICKPAINTEDITEM_H


#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace meta_qtqml { 


template <typename D>
void buildMetaClass_QQuickPaintedItem(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update)
        ._default(copyVariantFromCopyable(QRect()))
    ;
    _d.CPGF_MD_TEMPLATE _method("opaquePainting", &D::ClassType::opaquePainting);
    _d.CPGF_MD_TEMPLATE _method("setOpaquePainting", &D::ClassType::setOpaquePainting);
    _d.CPGF_MD_TEMPLATE _method("antialiasing", &D::ClassType::antialiasing);
    _d.CPGF_MD_TEMPLATE _method("setAntialiasing", &D::ClassType::setAntialiasing);
    _d.CPGF_MD_TEMPLATE _method("mipmap", &D::ClassType::mipmap);
    _d.CPGF_MD_TEMPLATE _method("setMipmap", &D::ClassType::setMipmap);
    _d.CPGF_MD_TEMPLATE _method("performanceHints", &D::ClassType::performanceHints);
    _d.CPGF_MD_TEMPLATE _method("setPerformanceHint", &D::ClassType::setPerformanceHint)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("setPerformanceHints", &D::ClassType::setPerformanceHints);
    _d.CPGF_MD_TEMPLATE _method("contentsBoundingRect", &D::ClassType::contentsBoundingRect);
    _d.CPGF_MD_TEMPLATE _method("contentsSize", &D::ClassType::contentsSize);
    _d.CPGF_MD_TEMPLATE _method("setContentsSize", &D::ClassType::setContentsSize);
    _d.CPGF_MD_TEMPLATE _method("resetContentsSize", &D::ClassType::resetContentsSize);
    _d.CPGF_MD_TEMPLATE _method("contentsScale", &D::ClassType::contentsScale);
    _d.CPGF_MD_TEMPLATE _method("setContentsScale", &D::ClassType::setContentsScale);
    _d.CPGF_MD_TEMPLATE _method("fillColor", &D::ClassType::fillColor);
    _d.CPGF_MD_TEMPLATE _method("setFillColor", &D::ClassType::setFillColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("renderTarget", &D::ClassType::renderTarget);
    _d.CPGF_MD_TEMPLATE _method("setRenderTarget", &D::ClassType::setRenderTarget);
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint);
    _d.CPGF_MD_TEMPLATE _method("fillColorChanged", &D::ClassType::fillColorChanged);
    _d.CPGF_MD_TEMPLATE _method("contentsSizeChanged", &D::ClassType::contentsSizeChanged);
    _d.CPGF_MD_TEMPLATE _method("contentsScaleChanged", &D::ClassType::contentsScaleChanged);
    _d.CPGF_MD_TEMPLATE _method("renderTargetChanged", &D::ClassType::renderTargetChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::RenderTarget>("RenderTarget")
        ._element("Image", D::ClassType::Image)
        ._element("FramebufferObject", D::ClassType::FramebufferObject)
        ._element("InvertedYFramebufferObject", D::ClassType::InvertedYFramebufferObject)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PerformanceHint>("PerformanceHint")
        ._element("FastFBOResizing", D::ClassType::FastFBOResizing)
    ;
}


class QQuickPaintedItemWrapper : public QQuickPaintedItem, public cpgf::GScriptWrapper {
public:
    
    QQuickPaintedItemWrapper(QQuickItem * parent = 0)
        : QQuickPaintedItem(parent) {}
    
    void mouseUngrabEvent()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseUngrabEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QQuickItem::mouseUngrabEvent();
    }
    void super_mouseUngrabEvent()
    {
        QQuickItem::mouseUngrabEvent();
    }
    
    bool widthValid() const
    {
        return QQuickItem::widthValid();
    }
    
    void wheelEvent(QWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QQuickItem::wheelEvent(event);
    }
    void super_wheelEvent(QWheelEvent * event)
    {
        QQuickItem::wheelEvent(event);
    }
    
    void setImplicitSize(qreal __arg0, qreal __arg1)
    {
        QQuickItem::setImplicitSize(__arg0, __arg1);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QQuickPaintedItem::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QQuickPaintedItem::qt_metacast(__arg0);
    }
    
    QRectF clipRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("clipRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QQuickItem::clipRect();
    }
    QRectF super_clipRect() const
    {
        return QQuickItem::clipRect();
    }
    
    void focusInEvent(QFocusEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QQuickItem::focusInEvent(__arg0);
    }
    void super_focusInEvent(QFocusEvent * __arg0)
    {
        QQuickItem::focusInEvent(__arg0);
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QQuickItem::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QQuickItem::event(__arg0);
    }
    
    void dropEvent(QDropEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QQuickItem::dropEvent(__arg0);
    }
    void super_dropEvent(QDropEvent * __arg0)
    {
        QQuickItem::dropEvent(__arg0);
    }
    
    void componentComplete()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("componentComplete"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QQuickItem::componentComplete();
    }
    void super_componentComplete()
    {
        QQuickItem::componentComplete();
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
    
    void touchEvent(QTouchEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("touchEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QQuickItem::touchEvent(event);
    }
    void super_touchEvent(QTouchEvent * event)
    {
        QQuickItem::touchEvent(event);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void focusOutEvent(QFocusEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QQuickItem::focusOutEvent(__arg0);
    }
    void super_focusOutEvent(QFocusEvent * __arg0)
    {
        QQuickItem::focusOutEvent(__arg0);
    }
    
    void mouseDoubleClickEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QQuickItem::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QMouseEvent * event)
    {
        QQuickItem::mouseDoubleClickEvent(event);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
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
    
    void updateInputMethod(Qt::InputMethodQueries queries = Qt::ImQueryInput)
    {
        QQuickItem::updateInputMethod(queries);
    }
    
    void hoverEnterEvent(QHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QQuickItem::hoverEnterEvent(event);
    }
    void super_hoverEnterEvent(QHoverEvent * event)
    {
        QQuickItem::hoverEnterEvent(event);
    }
    
    bool isComponentComplete() const
    {
        return QQuickItem::isComponentComplete();
    }
    
    bool contains(const QPointF & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contains"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, point));
        }
        return QQuickItem::contains(point);
    }
    bool super_contains(const QPointF & point) const
    {
        return QQuickItem::contains(point);
    }
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QQuickItem::boundingRect();
    }
    QRectF super_boundingRect() const
    {
        return QQuickItem::boundingRect();
    }
    
    QSGTextureProvider * textureProvider() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textureProvider"));
        if(func)
        {
            return cpgf::fromVariant<QSGTextureProvider * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QQuickItem::textureProvider();
    }
    QSGTextureProvider * super_textureProvider() const
    {
        return QQuickItem::textureProvider();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QQuickPaintedItem::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QQuickPaintedItem::qt_metacall(__arg0, __arg1, __arg2);
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
    
    void dragMoveEvent(QDragMoveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QQuickItem::dragMoveEvent(__arg0);
    }
    void super_dragMoveEvent(QDragMoveEvent * __arg0)
    {
        QQuickItem::dragMoveEvent(__arg0);
    }
    
    void updatePolish()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updatePolish"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QQuickItem::updatePolish();
    }
    void super_updatePolish()
    {
        QQuickItem::updatePolish();
    }
    
    bool childMouseEventFilter(QQuickItem * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childMouseEventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1));
        }
        return QQuickItem::childMouseEventFilter(__arg0, __arg1);
    }
    bool super_childMouseEventFilter(QQuickItem * __arg0, QEvent * __arg1)
    {
        return QQuickItem::childMouseEventFilter(__arg0, __arg1);
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
    
    void windowDeactivateEvent()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("windowDeactivateEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QQuickItem::windowDeactivateEvent();
    }
    void super_windowDeactivateEvent()
    {
        QQuickItem::windowDeactivateEvent();
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
    
    void touchUngrabEvent()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("touchUngrabEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QQuickItem::touchUngrabEvent();
    }
    void super_touchUngrabEvent()
    {
        QQuickItem::touchUngrabEvent();
    }
    
    void classBegin()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("classBegin"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QQuickItem::classBegin();
    }
    void super_classBegin()
    {
        QQuickItem::classBegin();
    }
    
    QSGNode * updatePaintNode(QSGNode * __arg0, QQuickItem::UpdatePaintNodeData * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updatePaintNode"));
        if(func)
        {
            return cpgf::fromVariant<QSGNode * >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1));
        }
        return QQuickPaintedItem::updatePaintNode(__arg0, __arg1);
    }
    QSGNode * super_updatePaintNode(QSGNode * __arg0, QQuickItem::UpdatePaintNodeData * __arg1)
    {
        return QQuickPaintedItem::updatePaintNode(__arg0, __arg1);
    }
    
    void paint(QPainter * painter)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, painter);
            return;
        }
        throw "Abstract method";
    }
    void super_paint(QPainter * painter)
    {
        throw "Abstract method";
    }
    
    void mouseMoveEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QQuickItem::mouseMoveEvent(event);
    }
    void super_mouseMoveEvent(QMouseEvent * event)
    {
        QQuickItem::mouseMoveEvent(event);
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QQuickItem::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QQuickItem::keyPressEvent(event);
    }
    
    void hoverLeaveEvent(QHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QQuickItem::hoverLeaveEvent(event);
    }
    void super_hoverLeaveEvent(QHoverEvent * event)
    {
        QQuickItem::hoverLeaveEvent(event);
    }
    
    bool isTextureProvider() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isTextureProvider"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QQuickItem::isTextureProvider();
    }
    bool super_isTextureProvider() const
    {
        return QQuickItem::isTextureProvider();
    }
    
    void inputMethodEvent(QInputMethodEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QQuickItem::inputMethodEvent(__arg0);
    }
    void super_inputMethodEvent(QInputMethodEvent * __arg0)
    {
        QQuickItem::inputMethodEvent(__arg0);
    }
    
    void dragEnterEvent(QDragEnterEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QQuickItem::dragEnterEvent(__arg0);
    }
    void super_dragEnterEvent(QDragEnterEvent * __arg0)
    {
        QQuickItem::dragEnterEvent(__arg0);
    }
    
    void mousePressEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QQuickItem::mousePressEvent(event);
    }
    void super_mousePressEvent(QMouseEvent * event)
    {
        QQuickItem::mousePressEvent(event);
    }
    
    QVariant inputMethodQuery(Qt::InputMethodQuery query) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodQuery"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunction(func.get(), this, query));
        }
        return QQuickItem::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QQuickItem::inputMethodQuery(query);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void dragLeaveEvent(QDragLeaveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QQuickItem::dragLeaveEvent(__arg0);
    }
    void super_dragLeaveEvent(QDragLeaveEvent * __arg0)
    {
        QQuickItem::dragLeaveEvent(__arg0);
    }
    
    bool heightValid() const
    {
        return QQuickItem::heightValid();
    }
    
    void hoverMoveEvent(QHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QQuickItem::hoverMoveEvent(event);
    }
    void super_hoverMoveEvent(QHoverEvent * event)
    {
        QQuickItem::hoverMoveEvent(event);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void geometryChanged(const QRectF & newGeometry, const QRectF & oldGeometry)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("geometryChanged"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, newGeometry, oldGeometry);
            return;
        }
        QQuickItem::geometryChanged(newGeometry, oldGeometry);
    }
    void super_geometryChanged(const QRectF & newGeometry, const QRectF & oldGeometry)
    {
        QQuickItem::geometryChanged(newGeometry, oldGeometry);
    }
    
    void itemChange(QQuickItem::ItemChange __arg0, const QQuickItem::ItemChangeData& __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemChange"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1);
            return;
        }
        QQuickItem::itemChange(__arg0, __arg1);
    }
    void super_itemChange(QQuickItem::ItemChange __arg0, const QQuickItem::ItemChangeData& __arg1)
    {
        QQuickItem::itemChange(__arg0, __arg1);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QQuickPaintedItem::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QQuickPaintedItem::metaObject();
    }
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QQuickItem::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QQuickItem::keyReleaseEvent(event);
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
    
    void mouseReleaseEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QQuickItem::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QMouseEvent * event)
    {
        QQuickItem::mouseReleaseEvent(event);
    }
    
    void releaseResources()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("releaseResources"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QQuickItem::releaseResources();
    }
    void super_releaseResources()
    {
        QQuickItem::releaseResources();
    }
};


template <typename D>
void buildMetaClass_QQuickPaintedItemWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQuickItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    
    _d.CPGF_MD_TEMPLATE _method("mouseUngrabEvent", (void (D::ClassType::*) ())&D::ClassType::mouseUngrabEvent);
    _d.CPGF_MD_TEMPLATE _method("widthValid", (bool (D::ClassType::*) () const)&D::ClassType::widthValid);
    _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::wheelEvent);
    _d.CPGF_MD_TEMPLATE _method("setImplicitSize", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::setImplicitSize);
    _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
    _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
    _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::dropEvent);
    _d.CPGF_MD_TEMPLATE _method("componentComplete", (void (D::ClassType::*) ())&D::ClassType::componentComplete);
    _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
    _d.CPGF_MD_TEMPLATE _method("touchEvent", (void (D::ClassType::*) (QTouchEvent *))&D::ClassType::touchEvent);
    _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
    _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
    _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
    _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
    _d.CPGF_MD_TEMPLATE _method("updateInputMethod", (void (D::ClassType::*) (Qt::InputMethodQueries))&D::ClassType::updateInputMethod)
        ._default(copyVariantFromCopyable(Qt::ImQueryInput))
    ;
    _d.CPGF_MD_TEMPLATE _method("hoverEnterEvent", (void (D::ClassType::*) (QHoverEvent *))&D::ClassType::hoverEnterEvent);
    _d.CPGF_MD_TEMPLATE _method("isComponentComplete", (bool (D::ClassType::*) () const)&D::ClassType::isComponentComplete);
    _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
    _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::dragMoveEvent);
    _d.CPGF_MD_TEMPLATE _method("updatePolish", (void (D::ClassType::*) ())&D::ClassType::updatePolish);
    _d.CPGF_MD_TEMPLATE _method("childMouseEventFilter", (bool (D::ClassType::*) (QQuickItem *, QEvent *))&D::ClassType::childMouseEventFilter);
    _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
    _d.CPGF_MD_TEMPLATE _method("windowDeactivateEvent", (void (D::ClassType::*) ())&D::ClassType::windowDeactivateEvent);
    _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
    _d.CPGF_MD_TEMPLATE _method("touchUngrabEvent", (void (D::ClassType::*) ())&D::ClassType::touchUngrabEvent);
    _d.CPGF_MD_TEMPLATE _method("classBegin", (void (D::ClassType::*) ())&D::ClassType::classBegin);
    _d.CPGF_MD_TEMPLATE _method("updatePaintNode", (QSGNode * (D::ClassType::*) (QSGNode *, QQuickItem::UpdatePaintNodeData *))&D::ClassType::updatePaintNode);
    _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseMoveEvent);
    _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
    _d.CPGF_MD_TEMPLATE _method("hoverLeaveEvent", (void (D::ClassType::*) (QHoverEvent *))&D::ClassType::hoverLeaveEvent);
    _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
    _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::dragEnterEvent);
    _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mousePressEvent);
    _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
    _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::dragLeaveEvent);
    _d.CPGF_MD_TEMPLATE _method("heightValid", (bool (D::ClassType::*) () const)&D::ClassType::heightValid);
    _d.CPGF_MD_TEMPLATE _method("hoverMoveEvent", (void (D::ClassType::*) (QHoverEvent *))&D::ClassType::hoverMoveEvent);
    _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
    _d.CPGF_MD_TEMPLATE _method("geometryChanged", (void (D::ClassType::*) (const QRectF &, const QRectF &))&D::ClassType::geometryChanged);
    _d.CPGF_MD_TEMPLATE _method("itemChange", (void (D::ClassType::*) (QQuickItem::ItemChange, const QQuickItem::ItemChangeData&))&D::ClassType::itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
    _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
    _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseReleaseEvent);
    _d.CPGF_MD_TEMPLATE _method("releaseResources", (void (D::ClassType::*) ())&D::ClassType::releaseResources);
    _d.CPGF_MD_TEMPLATE _method("super_mouseUngrabEvent", (void (D::ClassType::*) ())&D::ClassType::super_mouseUngrabEvent);
    _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::super_wheelEvent);
    _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("super_clipRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_clipRect);
    _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
    _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
    _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::super_dropEvent);
    _d.CPGF_MD_TEMPLATE _method("super_componentComplete", (void (D::ClassType::*) ())&D::ClassType::super_componentComplete);
    _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
    _d.CPGF_MD_TEMPLATE _method("super_touchEvent", (void (D::ClassType::*) (QTouchEvent *))&D::ClassType::super_touchEvent);
    _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
    _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
    _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
    _d.CPGF_MD_TEMPLATE _method("super_hoverEnterEvent", (void (D::ClassType::*) (QHoverEvent *))&D::ClassType::super_hoverEnterEvent);
    _d.CPGF_MD_TEMPLATE _method("super_contains", (bool (D::ClassType::*) (const QPointF &) const)&D::ClassType::super_contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("super_boundingRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_boundingRect);
    _d.CPGF_MD_TEMPLATE _method("super_textureProvider", (QSGTextureProvider * (D::ClassType::*) () const)&D::ClassType::super_textureProvider);
    _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
    _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::super_dragMoveEvent);
    _d.CPGF_MD_TEMPLATE _method("super_updatePolish", (void (D::ClassType::*) ())&D::ClassType::super_updatePolish);
    _d.CPGF_MD_TEMPLATE _method("super_childMouseEventFilter", (bool (D::ClassType::*) (QQuickItem *, QEvent *))&D::ClassType::super_childMouseEventFilter);
    _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
    _d.CPGF_MD_TEMPLATE _method("super_windowDeactivateEvent", (void (D::ClassType::*) ())&D::ClassType::super_windowDeactivateEvent);
    _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    _d.CPGF_MD_TEMPLATE _method("super_touchUngrabEvent", (void (D::ClassType::*) ())&D::ClassType::super_touchUngrabEvent);
    _d.CPGF_MD_TEMPLATE _method("super_classBegin", (void (D::ClassType::*) ())&D::ClassType::super_classBegin);
    _d.CPGF_MD_TEMPLATE _method("super_updatePaintNode", (QSGNode * (D::ClassType::*) (QSGNode *, QQuickItem::UpdatePaintNodeData *))&D::ClassType::super_updatePaintNode);
    _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *))&D::ClassType::super_paint);
    _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseMoveEvent);
    _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
    _d.CPGF_MD_TEMPLATE _method("super_hoverLeaveEvent", (void (D::ClassType::*) (QHoverEvent *))&D::ClassType::super_hoverLeaveEvent);
    _d.CPGF_MD_TEMPLATE _method("super_isTextureProvider", (bool (D::ClassType::*) () const)&D::ClassType::super_isTextureProvider);
    _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
    _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::super_dragEnterEvent);
    _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mousePressEvent);
    _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
    _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::super_dragLeaveEvent);
    _d.CPGF_MD_TEMPLATE _method("super_hoverMoveEvent", (void (D::ClassType::*) (QHoverEvent *))&D::ClassType::super_hoverMoveEvent);
    _d.CPGF_MD_TEMPLATE _method("super_geometryChanged", (void (D::ClassType::*) (const QRectF &, const QRectF &))&D::ClassType::super_geometryChanged);
    _d.CPGF_MD_TEMPLATE _method("super_itemChange", (void (D::ClassType::*) (QQuickItem::ItemChange, const QQuickItem::ItemChangeData&))&D::ClassType::super_itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
    _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
    _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
    _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
    _d.CPGF_MD_TEMPLATE _method("super_releaseResources", (void (D::ClassType::*) ())&D::ClassType::super_releaseResources);
    
    buildMetaClass_QQuickPaintedItem<D>(config, _d);
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
