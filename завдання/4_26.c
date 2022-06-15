#include <stdio.h>
#include <math.h>

int nsd(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void drib(int a, int b) {
    int aux = nsd(a,b);
    a /= aux;
    b /= aux;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

int main(){
    drib(6, 12);
}
