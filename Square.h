#ifndef INC_6JULY_NASLEDOVANIE_SQUARE_H
#define INC_6JULY_NASLEDOVANIE_SQUARE_H

class Square {
protected:
    int a; // Приватная переменная для хранения стороны квадрата

public:
    Square(int x);  // Конструктор, который инициализирует сторону квадрата
    int getSide() const;  // Метод для получения размера стороны
};

#endif //INC_6JULY_NASLEDOVANIE_SQUARE_H
