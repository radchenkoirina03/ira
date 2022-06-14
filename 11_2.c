//
//  files_work.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//


#include <ctype.h>
#include "files_work.h"

int write_doubles_to_file(FILE* fp){
    double x;
    int cnt = 0;
    char c;
    while (1) {
        printf("input another real?y/n");
        c = (char) getchar();
        c = tolower(c);

        while (c!='y' && c!='n') {
            printf("Yes Or No?y/n");
            c = (char) getchar();
            c = tolower(c);
        }
        if(c=='n')break;
        printf("x=");
        scanf("%lf", &x);
        fwrite(&x, sizeof(x), 1, fp);
    }
    return cnt;
}

int read_doubles_from_file(FILE* fp){
    double x;
    int cnt = 0;
    do {
        int r = fread(&x, sizeof(x), 1, fp);
        if (r!=1) break;
        printf("%f", x);
        cnt++;
    } while (1);

    return cnt;
}

int transfer_doubles_less(FILE* F, FILE* G, double a){
    double x;

    do {
        int r = fread(&x, sizeof(x), 1, F);
        if (r!=1) break;
        if (x<a) {
            fwrite(&x, sizeof(x), 1, G);
        }
    } while (1);

    return 0;
}

int exclude_less(FILE* F, double a){
//    freopen(F, "rb");
    FILE* ftmp = fopen("temp_file.dat", "wb");
    double x;

    do {
        int r = fread(&x, sizeof(x), 1, F);
        if (r!=1) break;
        if (x>=a) {
            fwrite(&x, sizeof(x), 1, ftmp);
        }
    } while (1);

//    fclose(F);
    fclose(ftmp);

    return 0;
}


