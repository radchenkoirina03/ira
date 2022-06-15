//
//  8_4.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>

#define N 25
#define M 25

int matr[N][M];

int input(int n, int m){
    for (int i=0;i<n;i++){
        printf("row %d:", i);
        for (int j=0;i<m;j++){
            scanf("%d" , &matr[i][j]);
        }
    }
    return 0;
}

void output(int n, int m){
    for (int i=0;i<n;i++){
        printf("\n");
        for (int j=0;j<m;j++){
            printf("\t %d", matr[i][j]);
        }
    }
}

int main(){
    int n,m;
    printf("n,m:");
    scanf("%d %d", &n, &m);

    input(n, m);
    output(n,m);
}
