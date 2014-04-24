#include "sprite.h"

sprite::sprite()
{
}

QRectF sprite::boundingRect() const
{
    return QRectF(0,0,100,100);
}

void sprite::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawArc(0,0,100,100,200,100);
    QPixmap pixmap = QPixmap("resource/man.png");
    painter->drawPixmap(0,0,100,100,pixmap);
}
