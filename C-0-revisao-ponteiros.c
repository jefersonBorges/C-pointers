#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int count = 10;
    int *pt;


    pt = &count;

    printf ("\nCount: %d", count);
    printf ("\nCount pt: %p", pt);
    printf ("\nCount *pt: %d", *pt);

    *pt = 12;

    printf ("\nCount: %d", count);
    printf ("\nCount pt: %p", pt);
    printf ("\nCount *pt: %d", *pt);

    //Varrendo matrizes utilizando ponteiros
    //Matriz 50x50

    float mtrx[50][50];
    float *p;
    int cnt;
    p = mtrx;

    printf("\nmtrx *p %f", *p);
    printf("\nmtrx %f", mtrx);

    for(cnt = 0; cnt < 2500; cnt ++){
        *p = cnt;
        printf("\nmtrx *p %.0f",*p);
        printf("\nmtrx p %p", p);
        p++;
        printf("\n\n");
    }

    //ponteiros como vetores
    int matrx [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = matrx;

    printf("\nmatrx[3] : %d", ptr[2]);

    //Ponteiros para ponteiros
    int *p1;
    int **p2;
    int num = 32;
    p1 = &num;
    p2 = &p1;

    printf("\nnum: %d", num);
    printf("\n*p1 %d", *p1);
    printf("\n**p2 %d", **p2);

    printf("\nnum: %d", num);
    printf("\np1 %p", p1);
    printf("\np2 %p", p2);


    return 0;
}