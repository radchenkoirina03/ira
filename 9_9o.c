//
//  9_9o.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <stdlib.h>

void putMat(int* p, unsigned int Rows, unsigned int Cols)
{
    for (unsigned int i = 0; i < Rows; i++) {
        for (unsigned int j = 0; j < Cols; j++) {
            printf("%8d ", p[i*Cols + j]);
        }
        puts("");
    }
}

int main()
{
    unsigned int Rows, Cols;;

    printf("Rows: ");
    scanf("%d", &Rows);

    printf("Columns: ");
    scanf("%d", &Cols);

    int * p;

    if ((p = (int*)malloc(Rows*Cols*sizeof(int))) == 0)
    {
        puts("Memory allocation error!!!");
        exit(1);
    }

    for (unsigned int i = 0; i < Rows; i++)
    {
        for (unsigned int j = 0; j < Cols; j++)
        {
            p[i*Cols + j] = rand()%(Rows*Cols);
        }
    }


    puts("Input array:\n");
    putMat(p,Rows,Cols);

    for(unsigned int row = 1; row < Rows; row += 2)
    {
        unsigned int newRow = (row-1)/2;
        for(unsigned int col = 0; col < Cols; ++col)
            p[newRow*Cols+col] = p[row*Cols+col];
    }

    puts("New array:\n");
    putMat(p,(Rows+1)/2,Cols);

    Rows = (Rows+1)/2;

    int * t = realloc(p, Rows*Cols*sizeof(int));
    if (t == 0)
    {
        puts("Memory allocation error!!!");
        exit(1);
    }
    p = t;

    puts("After realloc:\n");
    putMat(p,Rows,Cols);


    return 0;
}
