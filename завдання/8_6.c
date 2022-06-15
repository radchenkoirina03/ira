//
//  8_6.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 3

int input_matr(float mas[N][M]){
    for (size_t i=0;i<N;i++){
        
        for (size_t j=0;j<M;j++){
            printf("\na[%zu][%zu]=",i,j);
            scanf("%f",&mas[i][j]);
        }
    }
    return EXIT_SUCCESS;
}

float sub_diag(float inp_matr[N][M], int k){
    float res = 0.f;
    for (size_t i=0;i<N;i++){
        
        if ((1-k>=0) && (i-k<=M)){
            res += inp_matr[i][i-k];
        }
    }
    return res;
}


void output(float mas[N][M]){
    for (size_t i=0;i<N;i++){
        printf("\n");
        for (size_t j=0;j<N;j++){
            printf("\ta[%zu][%zu]=%f",i,j,mas[i][j]);
        }
    }
}

int main(){
    float mas[N][M];
    input_matr(mas);
    int k;
    scanf("%d",&k);
    
    output(mas);

    printf("\n sub=%f", sub_diag(mas,k));
}
