//
//  10_6.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARRAY 100
#define MAX_NAME 30


typedef struct Mount{
    char name[MAX_NAME];
    int height;
}Mount;


void outMount (const Mount* x){
    printf("%s: %d", (char*)(x->name), x->height);
}


int inputMount (Mount* x){
    printf("name:");
    scanf(" ");
    fgets(x->name, MAX_NAME, stdin);
    printf("height:");
    scanf("%d",&x->height);
    return 0;
}


void printHeight (const Mount* arr, int n, const char* mname){
    bool isFound = false;
    for (int i=0;i<n;i++){
        if(strcmp(arr[i].name, mname) == 0){
            printf ("Height of %s is %d", mname, arr[i].height);
            isFound = true;
            break;
        }
    }
    if (!isFound) {
        printf("No mountain with name %s", mname);
    }
}
       
 
int maxMount(const Mount* arr, int n, char* maxMnt){
    if (n<=0) return -1;
    
    int maxHeight = arr[0].height;
    int index = 0;
    for (int i=1; i<n; i++) {
        if (arr[i].height > maxHeight) {
            maxHeight = arr[i].height;
            index = i;
        }
    }
    strcpy(maxMnt, arr[index].name);
    return index;
}

int main(){
    Mount mnts[MAX_ARRAY] = { {"Everest", 8848}, {"K2", 8660}, {"Hoverla", 2700}};
//    int n;
//    printf("n=");
//    scanf("%d", &n);
//    int i;
//    for (i=0; i<n; i++){
//        inputMount(&mnts[i]);
//    }
//
//    for (i=0;i<n; i++){
//        outMount(&mnts[i]);
//    }
//
//    char soughtMount[MAX_NAME];
//    printf("input name:");
//    scanf(" ");
//    fgets(soughtMount, MAX_NAME, stdin);
//    printHeight(mnts, n, soughtMount);
    
    char mnt[MAX_NAME];
    maxMount(mnts, 3, mnt);
    puts(mnt);
}


