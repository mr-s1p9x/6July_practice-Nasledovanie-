#include "Circle.h"

// Конструктор инициализирует радиус r значением x
Circle::Circle(int x): r(x) {}

int Circle::getRadius() const
{
    return r;
}