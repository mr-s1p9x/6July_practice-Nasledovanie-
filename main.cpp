#include <iostream>
#include "CircleSquare.h"
using namespace std;

int main() {
    int side, radius;

    cout << "Введите сторону квадрата и радиус круга: ";
    cin >> side >> radius;

    CircleSquare cs(radius, side);  // Создание объекта

    if (cs.fits())
    {
        cout << "Круг поместится в квадрат" << endl;
    } else
    {
        cout << "Круг не поместится в квадрат" << endl;
    }

    return 0;
}
