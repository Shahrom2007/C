#include <stdio.h>
#include <math.h>
#include "matrix.h"
#include <stdlib.h>


int k;
int i;
int j;

double** locate_matrix(int size) {
    double **result = (double**)malloc(size * sizeof(double*));
    for ( i = 0; i < size; i++) {
        result[i] = (double*)malloc(size * sizeof(double));
    }
    return result;
}

double** multiply(int size, double **matrix_1, double **matrix_2){
    double **result = locate_matrix(size);
    for ( i = 0; i < size; i++){
        for ( j = 0; j < size; j++){
            result[i][j] = 0;
            for ( k = 0; k < size; k++){
                result[i][j] += matrix_1[i][k] * matrix_2[k][j];
            }
        }
    }
    return result;
}

double** add(int size, double **matrix_1, double **matrix_2){
    double **result = locate_matrix(size);
    for ( i = 0; i < size; i++){
        for ( j = 0; j < size; j++){
            result[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }
    return result;
}

double** subtract(int size, double **matrix_1, double **matrix_2){
    double **result = locate_matrix(size);
    for ( i = 0; i < size; i++){
        for ( j = 0; j < size; j++){
            result[i][j] = matrix_1[i][j] - matrix_2[i][j];
        }
    }
    return result;
}
