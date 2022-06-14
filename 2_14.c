#include <stdio.h>
#include <math.h>

int main(){
    float a=3.0, b=100.0, c=2.0;
    // printf("vvedite a, b, c: ");
    // scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("x bud yake");
            } else {
                printf("koreniv nemae");
            }
        } else {
            printf ("x = %lf", -c/b);
        }
    } else {
        float d;
        d = b * b - 4 * a * c;
        if (d < 0) {
            printf("koreniv nemae");
        } else {
            if (d == 0) {
                printf("x = %lf", -b/(2*a));
            } else {
                printf("x1 = %lf, x2 = %lf",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
            }
        }
    }
    return 0;
}
