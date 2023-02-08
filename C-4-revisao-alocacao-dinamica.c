#include <stdio.h>
#include <stdlib.h>

//void *malloc(unsigned int num); prototipo malloc

main(void){
    int *p;
    int a;
    int i;
    /* Determina o valor de "a" em algum lugar*/

    /*
    * Aloca "a" numeros inteiros. 
    * "p" agora pode ser tratado como um vetor com "a" posicoes ↓
    */
    p = (int *)malloc(a*sizeof(int));

    if (!p){
        printf("**Memoria insufucuente**");
        exit;
    }

    //percorrendo o vetor p com a posicoes
    for(i = 0; i < a; i++){
        p[i] = i*i;
    }
    
    return 0;
}