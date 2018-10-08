#ifndef BUTTON_H
#define BUTTON_H

#include <QtWidgets>

class Button : public QGraphicsItem
{
public:
    Button();

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void setGeometry(int, int);

private:
    int mWidth {0};
    int mHeight {0};

protected:
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event) override;
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event) override;
};

#endif // BUTTON_H
