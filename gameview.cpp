#include "gameview.h"

gameView::gameView()
{
    this->scene = NULL;
}

void gameView::addScene(gameScene *scene)
{

    this->scene = scene;
    this->setScene(scene);
}

void gameView::drawLine(int x, int y, int x1, int y1)
{
    this->scene->drawLine(x, y, x1, y1);
}
