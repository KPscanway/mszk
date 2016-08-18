#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void addRects();


private slots:

    void on_pushButton_AddRect_clicked();
    void on_pushButton_addImage_clicked();
    void on_pushButton_reset_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
