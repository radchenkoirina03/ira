//
//  8_7.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <stdlib.h>

#define N 20

int input_matr(double matr[N][N], int n){

    for (int i=0;i<n;i++){
        for (int j=0; j<n;j++){
            printf("\na[%d][%d]=",i,j);
            scanf("%lf", &matr[i][j]);
        }
    }
    return EXIT_SUCCESS;
}


double det(double matr[N][N], int n, unsigned indexes_to_delete){

    if(n==1) return matr[n-1][n-1];
    if(indexes_to_delete == (1<<(n+1)-1)) return 1;

    double res = 0;
    int odd = 1;
    unsigned minor = indexes_to_delete;
    for(int i=0;i<n;i++){
        
        printf("%u", minor);
        if (minor & (1<<i)) continue;
        minor = minor | (1<<i);
        res += matr[0][i] * det(matr,n-1,minor) * odd;
        minor ^= (1<<i);
        odd = -odd;
    }
    return res;
}

int main(){
    double matr[N][N];
    int n;
    printf("n=");
    scanf("%d", &n);
    input_matr(matr, n); //matr= input(); with static memory

    printf("det = %lf", det(matr,n,0));
}
