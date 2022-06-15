//
//  9_2.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <stdlib.h> //malloc


int input_array(int* mas){
    int tmp;
    int count = 0;
    
    do {
        printf("m[%d]=", count);
        scanf("%d", &tmp);
        if(tmp==0) break;
        mas[count++] = tmp;
    }
    while (1);
    return count;
}

int main(){
//    unsigned n;
//    printf("n=");
//    scanf("%u", &n);
//
//    double* mas = (double*) malloc(n*sizeof(*mas));
//    double sq_sum = 0;
//
//    for (unsigned i=0; i<n; i++) {
//        scanf("%lf", &mas[i]);
//        sq_sum += mas[i]*mas[i];
//    }
//
//    printf("s=%lf", sq_sum);
//
//    free(mas);
    
    int arr[100];
    
    int m = input_array(arr);
    
    for (int i=0; i<m; i++) {
        printf("m[%d]=%d,\t", i, arr[i]);
    }
}
