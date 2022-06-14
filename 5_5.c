//
//  5_5.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

/* task 5.5 */

#include <stdio.h>

int Pos(int n){

    int x1, x2, x3, x;
    x1 = x2 = x3 = -99;
    for (int i=3; i<=n; i++) {
        x = x1 + x3 + 100;
        x1 = x2;
        x2 = x3;
        x3 = x;
    } return x;
}


int main(){

    int n;
    scanf("%d", &n);
    printf("Pos(%d) = %d", n, Pos(n));

}





//size_t min_rec(){
//
//    size_t n=3;
//    int x1, x2, x3, x;
//    x1 = x2 = x3 = -99;
//    while (x3<0) {
//        x = x1 + x3 + 100;
//        printf("%d = %d + %d + 100/n", x, x1, x3);
//        x1 = x2;
//        x2 = x3;
//        x3 = x;
//        n++;
//    } return n;
//
//}
//
//int main(){
//    printf("%zu", min_rec());
//}
