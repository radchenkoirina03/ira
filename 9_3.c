//
//  9_3.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <stdlib.h>

double* input_vect(int n);

int sub_vect(double* vect1, double* vect2, double* vect4, int n);

double* sub_vect2(double* vect1, double* vect2, int n);

void vect_out(double* v, int n);

void free_vect(double* v);

int main(){
    int n;
    printf("n=");
    scanf("%d", &n);
    
    double* vect1 = input_vect(n);
    double* vect2 = input_vect(n);
    
    double* vect3 = sub_vect2(vect1, vect2, n);
    double vect4[10];
    sub_vect(vect1, vect2, vect4, n);
    
    vect_out(vect3, n);
    vect_out(vect4, n);
    
    free_vect(vect1);
    free_vect(vect2);
    free_vect(vect3);
//    free_vect(vect4);
}

double* input_vect(int n){
    double* v = (double*) calloc(n, sizeof(*v));
    for (int i=0; i<n; i++) {
        printf("a[%d]=", i);
        scanf("%lf", &v[i]);
    }
    return v;
}

int sub_vect(double* v1, double* v2, double* v4, int n){
//    v4 = (double*) calloc(n, sizeof(*v4));
    for (int i=0; i<n; i++) {
        v4[i] = v1[i]-v2[i];
    }
    return 0;
}

double* sub_vect2(double* v1, double* v2, int n){
    double* v4 = (double*) calloc(n, sizeof(*v4));
    for (int i=0; i<n; i++) {
        v4[i] = v1[i]-v2[i];
    }
    return v4;
}

void vect_out(double* v, int n){
    for (int i=0; i<n; i++) {
        printf("v[%d]=%lf\n", i, v[i]);
    }
}

void free_vect(double* v){;
    free(v);
}
