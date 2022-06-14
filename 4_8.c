//
//  4_8.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

/* task 4.8 */

#include <stdio.h>

void task8(){
    int i,n,k;
    scanf("%d", &n);
    k=1;     //k = 4^i
    i=0;
    
    while(k<n){
        k = k*4; //4^i
        i++;
    }
    i--;
    k/=4;
    printf("4^%d < %d", i, n);
}

int main(){
    task8();
}
