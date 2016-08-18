#ifndef SQUARE_H
#define SQUARE_H

#include "QPoint"
#include "QRect"
#include "QPainter"
#include "QColor"

class Square
{
private:

    QRect* figure;
    QColor square_color=QColor(Qt::red);
public:
    Square();
    void setColor(QColor color);
    void moveSquare(QPoint place);
    void resizeSquare(QSize value);
    void PaintSquare();
    ~Square();
};

#endif // SQUARE_H

