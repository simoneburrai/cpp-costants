// Definire una costante di tipo double e utilizzarla in un'operazione matematica.

#include <iostream>
#include <cmath>

int main() {

    const double PI = 3.141592653589793;

    double radius = 4.33;

    double area = (pow(radius, 2))* PI;

    std::cout << "The area of the circle with radius " << radius << " is " << area;

    return 0;
}