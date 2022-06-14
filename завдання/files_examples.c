//
//  files_examples.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>

int main(){
    FILE * file = fopen("text1.txt", "w");
//    fprintf(file, "hello world\n");
    int n = 4;
    fputc(n, file);
    fprintf(file, "%d", n);
    fclose(file);
    return 0;
}
