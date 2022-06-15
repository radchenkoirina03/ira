//
//  11_1.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>

#define MAX_AR 100


int write_to_file(float* arr, int n, const char* fname){
    FILE *fp = fopen(fname, "wb");
    if(fp==NULL){
        printf( "file %s cannot be open for write", fname);
        return -1;
    }
    int res = fwrite(arr, sizeof(*arr), n, fp);
    fclose(fp);
    return res;
}


void read_from_file(const char* fname){
    FILE *fp = fopen(fname, "rb");
    if(fp==NULL){
        printf("file %s cannot be open for reading", fname);
        return;
    }
    float x;

    do{
        int r = fread(&x, sizeof(float),1, fp);
        if(r!=1) break;
        printf("%f " ,x);
    }while(1);
}


int main(){
    int n;
    float mas[MAX_AR];

    printf("n=");
    scanf(" %d" , &n);
    for (int i=0;i<n;i++){
        printf("a[%d]",i);
        scanf("%f",&mas[i]);
    }

    char fname[20];
    printf("filenane:");
    scanf(" ");
    fgets(fname, 20, stdin);

    write_to_file(mas, n, fname);
    read_from_file(fname);
}
