#include "CircleSquare.h"

// Конструктор
CircleSquare::CircleSquare(int radius, int side) : Circle(radius), Square(side) {}

// Проверяет, поместится ли круг в квадрат
bool CircleSquare::fits()
{
    // Возвращает true, если диаметр круга меньше или равен стороне квадрата
    return 2 * getRadius() <= getSide();
}