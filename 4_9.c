//
//  4_9.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

/* task 4.9 */

#include <stdio.h>

void task9(){
    int i,n,k;
    scanf("%d", &n);
    k=1;     //k = 4^i
    i=0;
    
    do{
        k = k*2;   //4^i
        i++;
    }while(k<=n);

    printf("2^%d <= %d", i, n);
}

int main(){
    task9();
}
