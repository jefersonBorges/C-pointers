/*Exercício 3
* Varrendo um vetor de caracteres com ponteiro.
* Criar dois vetores de caracteres na função main(): origem e destino.
* Colocar um conteúdo em origem.
* Usar uma função chamada copiapalavra() que copiará, utilizando o conceito de ponteiros,
* o conteúdo de origem no vetor destino.
* Imprimir os dois vetores de caracteres na função main().
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strCopy(char *destino, char *origem);

int main(){
    char destino[10];
    char origem[10] = "Ana";
    char *o = origem;
    char *d = destino;

    //strcpy(destino, origem);

    printf("\nDestino: %s, Origem: %s",destino, origem);

    strCopy(d, o);
    printf("\nDestino: %s, Origem: %s",destino, origem);

    return 0;
}

void strCopy(char *destino, char *origem){
    while(*origem != '\0'){ // \0 é terminador de string
        *destino = *origem;
        destino++;
        origem++;
    }
    *destino = '\0';
}