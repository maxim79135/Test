#ifndef VIEWEXAMPLE_H
#define VIEWEXAMPLE_H

#include <QtWidgets>
#include <button.h>

class ViewExample : public QGraphicsView
{
public:
    ViewExample();

private:
    void _init_view_elements();

private:
    Button mBtnA;
    QGraphicsScene mScene;
};

#endif // VEIWEXAMPLE_H
