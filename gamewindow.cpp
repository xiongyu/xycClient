#include "gamewindow.h"

gameWindow::gameWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->view = new gameView();
    this->view->setParent(this);
}

gameWindow::~gameWindow()
{

}

void gameWindow::test()
{

}

void gameWindow::setNewScene()
{
    static gameScene *scene = new gameScene();
    this->view->addScene(scene);
    scene = NULL;
}

void gameWindow::drawLine(int x, int y, int x1, int y1)
{
    this->view->drawLine(x, y, x1, y1);
}

//--------event--------
void gameWindow::resizeEvent(QResizeEvent *e)
{
    this->view->setGeometry(0,0,e->size().width(),e->size().height());
}
