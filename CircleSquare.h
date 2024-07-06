#ifndef INC_6JULY_NASLEDOVANIE_CIRCLESQUARE_H
#define INC_6JULY_NASLEDOVANIE_CIRCLESQUARE_H
#include "Square.h"
#include "Circle.h"

// Наследование от Square и Circle
class CircleSquare : public Square, public Circle
{
public:
    CircleSquare(int radius, int side); // Конструктор
    bool fits();                        // Метод для проверки, поместится ли круг в квадрат
};

#endif //INC_6JULY_NASLEDOVANIE_CIRCLESQUARE_H
