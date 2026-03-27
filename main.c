#include <stdio.h>
#include "geometry.h"


int is_triangle(double a, double b, double c) {

    if (a <= 0 || b <= 0 || c <= 0) {
        return 0;
    }

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return 1;
    }
    return 0;
}

int main() {
    double side1, side2, side3;
    int result;
    
    printf("A=? B=? C=? \n");
    

  
    result = scanf("%lf %lf %lf", &side1, &side2, &side3);
    

    if (result != 3) {
        printf("Error: you need to enter three numbers\n");
        return 1;
    }
    

    if (!is_triangle(side1, side2, side3)) {
        printf("Error: a triangle with such sides does not exist!\n");
        
        return 1;
    }
    
  
    printf("\nCalculation results:\n");
    printf("P: %.2f\n", get_perimeter(side1, side2, side3));
    printf("S:  %.2f\n", get_area(side1, side2, side3));
    
    return 0;
}
