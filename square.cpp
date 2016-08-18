#include "square.h"


Square::Square()
{
    figure=new QRect(QPoint(50,50), QSize(50,50));
}
Square::~Square(){
    delete figure;
}
