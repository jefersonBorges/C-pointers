/* Exercicio 6
    Implementar um algoritmo que armazene um vetor de strings. 
    Este vetor deve ser criado dinamicamente através da função malloc ou calloc. 
    O programador deve questionar o usuário sobre quantas strings ele deseja armazenar. 
    De posse do número de valores, o espaço de memória adequado deve ser alocado e 
    posteriormente a leitura dos valores deve ser realizada.
    Após a leitura de todos os valores, deve ser chamada uma função lista_strings para mostrar na 
    tela todos os valores cadastrados
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_STR_AUX 50

int setQtStrings();
void setString( int i, char *ptrString);
void setStrings(int qtStrings, char *ptrString);
void printStrings(int qtStrings, char *strings);

int main (){
    int qtStrings = setQtStrings();
    char *ptrStrings = (char *)calloc(qtStrings, sizeof(char));
    setStrings(qtStrings, ptrStrings);
    printStrings(qtStrings, ptrStrings);
    free(ptrStrings);
    return 0;
}


int setQtStrings(){
    int qt = 0;
    printf("Quantas Strings deseja armazenar? ");
    scanf("%d", &qt);
    fflush(stdin);
    return qt;
}

void setString( int i, char *ptrString){
    printf("\nDigite a string [%d]: ", i);
    scanf("%s", ptrString[i]);
    fflush(stdin);
}

void setStrings(int qtStrings, char *ptrString){
    for(int i = 0; i < qtStrings; i++){
        setString(i, ptrString);
        ptrString++;
    }
}

void printStrings(int qtStrings, char *strings){
    for(int i = 0; i < qtStrings; i++){
        printf("\nString [%d]: %s", i, &strings[i]);
    }
}