//
//  5_3.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

/* task 5.3 */

#include <stdio.h>
#include <stdbool.h>

int printAllKollatz(unsigned n, bool toPrint){
    unsigned a=n;
    int i=0;
    while (a!=1) {
        
        if (a%2==0) {
            a = a/2;
        } else {
            a = 3*a + 1;
        }
        i++;
        if (toPrint) printf("a_%d = %u", i, a);

    }
//    printf("%d", i);
    return i;
}

int main(){
    
    unsigned n;
    printf("n=");
    scanf("%u", &n);
//    printAllKollatz(n);
    
    int m1=0, m;
    unsigned k;
    
    for (unsigned i=1; i<=1000; ++i) {
        m = printAllKollatz(i, false);
        if (m1<m) {
            m1=m;
            k=i;
        }
    }
    printf("k=%u", k);
    printAllKollatz(k, true);
}
