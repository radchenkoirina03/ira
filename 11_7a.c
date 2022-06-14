//
//  11_7a.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>

#define N 6


int sum(int *arr, int v){
    int sum = arr[0];
    for(int i=1;i<v;i++){
        sum += arr[i];
    }
    return sum;
}


int main(){

    FILE * F = fopen("123.txt", "w");

    int mas[N] = {2, 4, 12, 7, 9, 6};

    for (int i=0; i<N; i++) {
        fputc(mas[i], F);
        fprintf(F, "%d\n", mas[i]);
//        printf("%d\n", sum(mas,N));
    }
    printf("%d\n", sum(mas, N));
    fclose(F);

}


