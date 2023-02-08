/* Exercício 2
* Na função main() criar um vetor com os seguintes valores:
* vetor[5] = {5,50,100,150,200};
* Utilizar uma função chamada soma() para fazer a soma de todos os valores do vetor. 
* O vetor deve ser varrido, utilizando-se o conceito de ponteiros.
* O valor da soma deve ser mostrado na função main().
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int soma(int *p);

int main (){

    int vetor[5] = {5,50,100,150,200};
    int *p;
    int resultado;

    p = vetor;
    resultado = soma(p);

    printf("\nSoma do vetor: %d", resultado);

    return 0;
}

int soma(int *p){
    int resultado;
    while(*p){
        resultado += *p;
        p++;
    }
    return resultado;
}