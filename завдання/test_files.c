//
//  test_files.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <string.h>

#include "files_work.h"

int main(){

    char fname[] = "F.dat";
    char gname[] = "G.dat";
    FILE* F = fopen(fname,"wb");
    if (F==NULL){
        printf("error");
        return -1;
    }
    write_doubles_to_file(F);
    fclose(F);
    F = fopen(fname, "rb");

//    freopen(fname, "rb", F);
    if(F==NULL){
        printf("error2");
        return -2;
    }

    FILE* G = fopen(gname,"wb");
    if(G==NULL){
        printf("error3");
        return -3;
    }

    double a;
    printf("a=");
    scanf("%lf", &a);
    transfer_doubles_less(F,G,a);
    fclose(G);
    fclose(F);
    F = fopen(fname, "rb");
//    freopen(gname, "rb", G);
    printf("F=");
    read_doubles_from_file(F);

    printf("\n");
    printf("G=");
    G = fopen(gname, "rb");
    read_doubles_from_file(G);
    printf("\n");
    fclose(F);
    fclose(G);
    F = fopen(fname, "rb");
    exclude_less(F, a);
    fclose(F);
    rename("temp_file.dat", fname);
    F = fopen(fname, "rb");
    read_doubles_from_file(F);
    printf("\n");
    fclose(F);
//    fclose(G);

}
