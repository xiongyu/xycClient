#include "gamescene.h"

gameScene::gameScene()
{
    test = new sprite();
    this->addItem(test);
}

void gameScene::drawLine(int x, int y, int x1, int y1)
{
    this->addLine(x, y, x1, y1);
}
