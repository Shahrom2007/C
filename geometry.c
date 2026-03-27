#include "geometry.h"
#include <math.h>

// Вычисление периметра треугольника
double get_perimeter(double a, double b, double c) {
    return a + b + c;
}

// Вычисление площади треугольника по формуле Герона
double get_area(double a, double b, double c) {
    double p = get_perimeter(a, b, c) / 2.0;  // полупериметр
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
