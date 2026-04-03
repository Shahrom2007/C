#include "geometry.h"
#include <math.h>
#include <stdbool.h>

 bool is_triangle_vaid(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) {
      
        return false;
    }
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return true;
    }
}

double get_perimeter(double a, double b, double c) {
    return a + b + c;
}


double get_area(double a, double b, double c) {
    double p = get_perimeter(a, b, c) / 2.0;  
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
