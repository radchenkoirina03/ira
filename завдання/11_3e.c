//
//  11_3e.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define N 12


double Fib (double x) {

    int i, y, z, b;
    bool q;

    y = z = b = 1;
    q = 0;

    for (i = 1; i < x; i++) {
        z = y;
        y = b;
        b = z + y;
        if (b == x) q = 1;
    }
    if (q) {
//        printf("%lf - Fibonachi number", x);
        return x;
    }
    
    else {
//        printf("%lf - not Fibonachi number", x);
        return 0;
    }
    
}


int main(){

    FILE * F = fopen("123.txt", "w");
    FILE * G = fopen("Fib.txt", "a");

    int n=10000, u, mas[N], das[N];

    for (int i=0; i<n; i++) {
        printf("Numbers:\n");
        scanf("%d", &u);
        if (u!=0) {
            
            fputc(u, F);
            fprintf(F, "%d\n", u);
            
//            mas[i] = u;
//            printf("%d\n", mas[i]);
            
            if (Fib(u)!=0.0) {
                
//                das[i] = u;
//                printf("%d\n", das[i]);
                
                fputc(u, G);
                fprintf(G, "%d\n", u);

            }
        }
        else break;
    }

    fclose(F);

}
