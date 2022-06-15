//
//  rects.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int num;
    double x1, y1;
    double x2, y2;
} Rect;


int inpRect(Rect* x){
    printf("n=");
    scanf("%d", &x->num);
    printf("A(x,y):");
    scanf("%lf %lf", &x->x1, &x->y1);
    printf("C(x,y):");
    scanf("%lf %lf", &x->x2, &x->y2);
    return EXIT_SUCCESS;
}


void outRect(Rect x){
    printf("N %d : (%g, %g) - (%g, %g)\n", x.num, x.x1, x.y1, x.x2, x.y2);
}


double areaRect(Rect x){
    return (x.x2 - x.x1)*(x.y2 - x.y1);
}


int writeRectsToFile(const char* fname){
    FILE* fp = fopen(fname, "wb");
    int n;
    printf("n=");
    scanf("%d", &n);
    Rect rect;
    for (int i=0; i<n; i++) {
        inpRect(&rect);
        fwrite(&rect, sizeof(rect), 1, fp);
    }
    fclose(fp);
    return n;
}


int findMaxRect(const char* fname){
    FILE* fp = fopen(fname, "rb");
    int n;

    Rect rect;
    Rect maxRect;
    double maxArea = 0;
    for (;!feof(fp);) {

        int r = fread(&rect, sizeof(rect), 1, fp);
        if (r!=1) {
            break;

        }

        double a = areaRect(rect);
        if (maxArea<a) {
            maxArea = a;
            maxRect = rect;
        }
    }
    outRect(maxRect);

    fclose(fp);
    return maxRect.num;
}


int deleteRect(const char* fname, int num){

    FILE* fp = fopen(fname, "rb");
    FILE* fg = fopen("temp.dat", "wb");
    int n = -1;

    Rect rect;
    int index = 0;
    for (;!feof(fp);){

        int r = fread(&rect, sizeof(rect), 1, fp);
        if (r!=1) {
            break;
        }
        if (rect.num == num) {
            n = index;
        }
        else{
            fwrite(&rect, sizeof(rect), 1, fg);
        }
        index++;
    }
    fclose(fp);
    fclose(fg);

    if (n==-1) {
        remove("temp.dat");
        return -1;
    }
    rename("temp.dat", fname);
    return 0;
}


int changeRect(const char* fname, int num, Rect r){

    FILE* fp = fopen(fname, "ab");
//    FILE* fg = fopen("temp.dat", "wb");
    int n = -1;

    Rect rect;
    int index = 0;
    for (;!feof(fp);){

        int r = fread(&rect, sizeof(rect), 1, fp);
        if (r!=1) {
            break;
        }
        if (rect.num == num) {
            n = index;
        }
        else{
            ;
        }
        index++;
    }

    if (n==-1) {
        remove("temp.dat");
        return -1;
    }
    fseek(fp, sizeof(rect)*n, SEEK_SET);
    fwrite(&r, sizeof(rect), 1, fp);
    fclose(fp);
    return 0;
}


int main(){
    writeRectsToFile("r1.dat");
    findMaxRect("r1.dat");

    deleteRect("r1.dat", 1);
    Rect x;
    inpRect(&x);
    changeRect("r1.dat", 2, x);
}
