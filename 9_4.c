//
//  9_4.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <stdlib.h>

double* input_matrix(int n);

int mult_matrix(const double* vect1, const double* vect2, double* vect4, int n);

double* mult_matrix2(const double* vect1, const double* vect2, int n);

void matrix_out(const double* v, int n);

void free_matrix(double* v);


double** input_matrix1(int n);

int mult_matrix1(const double** vect1, const double** vect2, double** vect4, int n);

double** mult_matrix12(const double** vect1, const double** vect2, int n);

void matrix_out1(const double** v, int n);

void free_matrix1(double** v, int n);


int main(){
    int n;
    printf("n=");
    scanf("%d", &n);

    double* vect1 = input_matrix(n);
    double* vect2 = input_matrix(n);

    double* vect3 = mult_matrix2(vect1, vect2, n);
    double vect4[10];
    mult_matrix(vect1, vect2, vect4, n);

    matrix_out(vect3, n);
    matrix_out(vect4, n);

    free_matrix(vect1);
    free_matrix(vect2);
    free_matrix(vect3);
//    free_matrix(vect4);


    double** m1 = input_matrix1(n);
    double** m2 = input_matrix1(n);

    double** m3 = mult_matrix12(vect1, vect2, n);

    matrix_out1(m3, n);

    free_matrix1(m1, n);
    free_matrix1(m2, n);
    free_matrix1(m3, n);
}

double* input_matrix(int n){
    double* v = (double*) calloc(n*n, sizeof(*v));
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("a[%d, %d]=", i, j);
            scanf("%lf", &v[n*i + j]);
        }
    }
    return v;
}

int mult_matrix(const double* v1, const double* v2, double* v4, int n){
    for (int i=0; i<n; i++) {
        for (int k=0; k<n; k++) {
            v4[n*k + i] = 0;
            for (int j=0; j<n; j++) {
                v4[n*k + i] += v1[k*n + j] * v2[j*n + k];
            }
        }
    }
    return 0;
}

double* mult_matrix2(const double* v1, const double* v2, int n){
    double* v4 = (double*) calloc(n*n, sizeof(*v4));

    for (int i=0; i<n; i++) {

        for (int k=0; k<n; k++) {

            for (int j=0; j<n; j++) {
                v4[n*k + i] += v1[k*n + j] * v2[j*n + k];
            }

    }
    return v4;
}

void matrix_out(const double* v, int n){
    for (int i=0; i<n; i++) {
        printf("%lf", v[i*n + j]);
    }
    printf("\n");
}

void free_matrix(double* v){
    free(v);
}


/////////////////////////////


//double* input_matrix1(int n){
//    double** v = (double**) calloc(n, sizeof(*v));
//    for (int i=0; i<n; i++) {
//        v[i] = (double*) calloc(n, sizeof(*v[0]));
//        for (int j=0; j<n; j++) {
//            printf("a[%d, %d]=", i, j);
//            scanf("%lf", v[i][j]);
//        }
//    }
//    return v;
//}
//
//int mult_matrix1(const double** v1, const double** v2, double** v4, int n){
//    for (int i=0; i<n; i++) {
//        for (int k=0; k<n; k++) {
//            v4[k][i] = 0;
//            for (int j=0; j<n; j++) {
//                v4[k][i] += v1[k][j] * v2[j][i];
//            }
//        }
//    }
//    return 0;
//}
//
//double* mult_matrix12(const double** v1, const double** v2, int n){
//
//    double** v4 = (double**) calloc(n, sizeof(*v4));
//    for (int i=0; i<n; i++) {
//        double* v4[i] = (double*) calloc(n, sizeof(*v4[0]));
//        for (int k=0; k<n; k++) {
//            for (int j=0; j<n; j++) {
//                v4[k][i] += v1[k][j] * v2[j][i];
//            }
//        }
//
//    }
//    return v4;
//}
//
//void matrix_out1(const double** v, int n){
//    for (int i=0; i<n; i++) {
//        for (int j=0; j<n; j++){
//            printf("%lf", v[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//void free_matrix1(double** v, int n){
//    for (int i=0; i<n; i++) {
//        free(v[i]);
//    }
//    free(v)
//}
//
