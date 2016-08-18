#include "mainwindow.h"
#include "ui_mainwindow.h"


QGraphicsScene *scene;
int image_flag=0;
int count=0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->Workfield->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addRects(){

QGraphicsRectItem *new_rect;
    new_rect= new QGraphicsRectItem;
    new_rect->setRect(0,0,scene->width()/3,scene->height()/3);
    new_rect->setPen(Qt::DashLine);
    scene->addItem(new_rect);
   // new_rect->setFlag(QGraphicsItem::ItemIsMovable);
    new_rect->setFlag(QGraphicsItem::ItemIsMovable);

}

void MainWindow::on_pushButton_AddRect_clicked()
{
    if(image_flag==1&&count<3){
        addRects();
        ui->Workfield->show();
        count++;
    }
}

void MainWindow::on_pushButton_addImage_clicked()
{
    scene->clear();
    QString filename = "lena1";
    QImage image(filename);
    QGraphicsPixmapItem* item= new QGraphicsPixmapItem(QPixmap::fromImage(image));
    scene->setSceneRect(0,0,image.width(),image.height());
    scene->addItem(item);
    ui->Workfield->show();
    image_flag=1;
    count=0;
}


void MainWindow::on_pushButton_reset_clicked()
{
    scene->clear();
    ui->Workfield->show();
    image_flag=0;
}



