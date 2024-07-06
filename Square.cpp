#include "Square.h"

// Конструктор класса Square
Square::Square(int x) : a(x) {}  // Инициализация переменной a значением x

// Метод для получения стороны квадрата
int Square::getSide() const
{
    return a;
}