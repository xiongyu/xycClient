#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QResizeEvent>

#include "Python.h"
#include "gameview.h"
#include "gamescene.h"

class gameWindow : public QMainWindow
{
    Q_OBJECT

public:
    gameWindow(QWidget *parent = 0);
    ~gameWindow();

    void test();
    void setNewScene();
    void drawLine(int x, int y, int x1, int y1);
    void resizeEvent(QResizeEvent *);

private:
    gameView *view;

};

#endif // GAMEWINDOW_H
