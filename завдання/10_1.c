//
//  10_1.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <stdlib.h>

//a
struct Date{
    unsigned day;
    unsigned month;
    int year;
};


//b
struct ChessField{
    char v;
    unsigned char h;
};


//c

//struct Vertex{
//    float x, y;
//};

typedef struct {
    float x, y;     //координати
} Vertex;

//struct Rectangle{
//    struct Vertex A;
//    struct Vertex B;
//}

typedef struct {
    Vertex A;
    Vertex B;
} Rectangle;


//d
typedef struct {
    size_t n;
    double* a; //coefficients P(x) = a_0 + a_1* x + ...+ a_n*x^n
}Polynome;



int inputRectangle(Rectangle* r){
    printf("A(x,y):");
    scanf("%f %f", &(r->A.x), &(r->A.y));
    printf("B(x,y):");
    scanf("%f %f", &(r->B.x), &(r->B.y));
    return EXIT_SUCCESS;
}


void outputRectangle(Rectangle r){
    printf("A(%f, %f) - B(%f, %f)", r.A.x, r.A.y, r.B.x, r.B.y);
}


int main(){
    Rectangle r;
    inputRectangle(&r);
    outputRectangle(r);
}
