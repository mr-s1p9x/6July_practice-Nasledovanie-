#ifndef INC_6JULY_NASLEDOVANIE_CIRCLE_H
#define INC_6JULY_NASLEDOVANIE_CIRCLE_H

class Circle {
protected:
    int r;  // Радиус круга

public:
    Circle(int x);           // Конструктор для инициализации радиуса
    int getRadius() const;   // Метод для получения радиуса
};

#endif //INC_6JULY_NASLEDOVANIE_CIRCLE_H
