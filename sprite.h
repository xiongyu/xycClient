#ifndef SPRITE_H
#define SPRITE_H

#include <QGraphicsItem>
#include <QRectF>
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QWidget>
#include <QPixmap>

class sprite : public QGraphicsItem
{
public:
    sprite();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};

#endif // SPRITE_H
