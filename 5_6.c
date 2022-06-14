//
//  5_6.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

/* task 5.6 */

#include <stdio.h>

void item_a(){
    
    double b, y;
    int n;
    printf("n=");
    scanf("%d", &n);
    
    printf("b=");
    scanf("%lf", &b);
    
    y = b;
    for (int i=1; i<n; i++) {
        y = b + 1/y;
    }
    printf("y=%lf", y);
}

int main(){
    item_a();
}
