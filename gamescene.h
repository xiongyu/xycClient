#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QGraphicsScene>
#include <QPixmap>
#include "sprite.h"

class gameScene : public QGraphicsScene
{
public:
    gameScene();
    void drawLine(int x, int y , int x1, int y1);

private:
    sprite *test;

};

#endif // GAMESCENE_H
