/*Exercício 1
* Na função main() criar uma matriz com os seguintes valores:
* matriz[3][3] = {  {2,4,8}, {1,5,6}, {3,1,0} };
* Utilizar uma função chamada soma() para fazer a soma de todos os valores da matriz. 
* A matriz deve ser varrida, utilizando-se o conceito de ponteiros.
* O valor da soma deve ser mostrado na função main().
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3

int somaMatrizQuadrada(int *ptr, int tamanho);

int main(){
    
    int matriz[TAM][TAM] = {{2,4,8}, {1,5,6}, {3,1,0}};
    int *p = matriz[0];
    int resultado = somaMatrizQuadrada(p, TAM);

    printf("\nResultado da Soma : %d", resultado);

    return 0;
}

int somaMatrizQuadrada(int *ptr, int tamanho){
    int posicoes = (tamanho * tamanho);
    int soma = 0;
    int valor = 0;

    for(int i = 0; i < posicoes; i++){
        valor = *(ptr + i);
        soma += valor;
    }
    return soma;
}