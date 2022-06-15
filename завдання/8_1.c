//
//  8_1.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>

#define N 3
#define M 3

int sub(int mas[N][M], int n, int m) {
    for (int i=0; i<N; i++){
        for (int j=0;j<M;j++){
            if(mas[i][j]==n){
                mas[i][j] = m;
                return 1;
            }
        }
    }
    return 0;
}

void output(int mas[N][M]){
    for (int i=0;i<N; i++){
        printf("\n");
        for (int j=0; j<M; j++){
            printf("\t %d", mas[i][j]);
            }
    }
}

int main(){
    int mas[N][M] = {{1,2,3}, {4,5,6}, {7,8,9,}};

    int n, m;
    printf("n,m");
    scanf("%d %d" , &n, &m);

    sub(mas,n,m);
    output(mas);
}
