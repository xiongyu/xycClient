#ifndef GAMEVIEW_H
#define GAMEVIEW_H

#include <QWidget>
#include <QGraphicsView>
#include "gamescene.h"

class gameView : public QGraphicsView
{

public:
    gameView();
    void addScene(gameScene * );
    void drawLine(int x, int y, int x1, int y1);

private:
    gameScene *scene;

};

#endif // GAMEVIEW_H
