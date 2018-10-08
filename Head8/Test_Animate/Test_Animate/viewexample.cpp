#include "viewexample.h"

ViewExample::ViewExample() {
    setRenderHint(QPainter::Antialiasing); // �����������
    setCacheMode(QGraphicsView::CacheNone); // ����������� ����
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // ��������� ��
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    setWindowTitle("ViewExample");
    setFrameStyle(0);
    setSceneRect(0, 0, 600, 600);
    setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    setFixedSize(600, 600);

    mScene.setItemIndexMethod(QGraphicsScene::NoIndex);

    setScene(&mScene);
    _init_view_elements();
}

void ViewExample::_init_view_elements() {
    mBtnA.setPos(50, 50);
    mBtnA.setGeometry(100, 100);
    mScene.addItem(&mBtnA);
}
