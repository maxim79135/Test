#include "button.h"

Button::Button() {
    setAcceptHoverEvents(true);
}

QRectF Button::boundingRect() const {
    return QRectF(0, 0, mWidth, mHeight);
}

void Button::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    painter->drawRoundedRect(0, 0, mWidth, mHeight, 5, 5);
}

void Button::setGeometry(int aWidth, int aHeight) {
    mWidth = aWidth;
    mHeight = aHeight;
}

void Button::hoverEnterEvent(QGraphicsSceneHoverEvent *event) {
    qWarning() << "Enter";
}

void Button::hoverLeaveEvent(QGraphicsSceneHoverEvent *event) {
    qWarning() << "Leave";
}
