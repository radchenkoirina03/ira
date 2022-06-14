//
//  5_4.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

/* task 5.4 */

#include <stdio.h>
#include <math.h>

int main(){

    int n;
    scanf("%d", &n);

    double p = 1.0, P = 1.0;

    for (int i=1; i<=n; i++) {
        P *= (1+p);
        p /= i;   //p
    }
    printf("%lf", P);
}







//float p(int n){
//                         // recursion variant
//    if (n==1) {
//        return 2;
//    } else {
//        return (1 + 1.0/(float)n) * p(n-1);
//    }
//}
//int main(){
//
//    int n;
//    scanf("%d", &n);
//    printf("%f", p(n));
//
//}
