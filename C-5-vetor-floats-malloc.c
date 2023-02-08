
/* Exercicio 5
*
* Implementar um algoritmo que armazene um vetor de floats. 
* Este vetor deve ser criado dinamicamente através da função malloc ou calloc. 
* O programador deve questionar o usuário sobre quantos valores floats ele deseja armazenar. 
* De posse do número de valores, o espaço de memória adequado
* deve ser alocado e posteriormente a leitura dos valores deve ser realizada.
* Após a leitura de todos os valores, deve ser chamada uma função lista_floats 
* para mostrar na tela todos os valores.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void lista_valores(int qtValores, float *ptr);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int qtValores = 0;
    float *p;

    printf("\nQuantos valores float deseja adicionar ?");
    scanf("%d", &qtValores);

    p = (float *)malloc(qtValores * sizeof(float));
    printf("\nTamanho da memoria:\n\n -----%p-----\n",p);

    for(int i = 0; i < qtValores; i++){
        printf("Digite o valor [%d]\n", i);
        scanf("%f", &p[i]);
    }
    free(p);
    lista_valores(qtValores, p);

    return 0;
}

void lista_valores(int qtValores, float *ptr){
    float valor = 0.00;

    for(int i = 0; i < qtValores; i++){
        valor = *(ptr + i);
        printf("\n%.2f", valor);
    }
    
}
