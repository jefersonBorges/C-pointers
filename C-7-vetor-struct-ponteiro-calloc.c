/* Exercicio 7

    Dada a estrutura abaixo para armazenar dados de um aluno:
    struct aluno {
    int matricula;
    char *nome;
    float media;
    };
    Implementar um algoritmo que armazene um vetor de struct aluno. 
    Este vetor deve ser criado dinamicamente através da função malloc ou calloc. 
    O programador deve questionar o usuário sobre quantos alunos ele deseja armazenar. 
    De posse do número de alunos, o espaço de memória adequado deve ser alocado e 
    posteriormente a leitura dos dados dos alunos deve ser realizada.
    Após a leitura de todos os alunos, deve ser chamada uma função lista_alunos para mostrar na 
    tela todos os valores relacionados aos alunos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    int matricula;
    char *nome;
    float media;
};

int setQtAlunos();
void setAluno(struct Aluno *ptr, int i);
void setAlunos(int qtAlunos, struct Aluno *ptr);

int main(){
    struct Aluno *p;
    int qtAlunos = 0;
    qtAlunos = setQtAlunos();

    p = (struct aluno *)calloc(qtAlunos, sizeof(struct Aluno));
    setAlunos(qtAlunos, p);
    getAlunos(qtAlunos, p);
    free(p);

    return 0;
}

int setQtAlunos(){
    int qt = 0;
    printf("\nDigite o numero de alunos a cadastrar: ");
    scanf("%d", &qt);
    return qt;
}

void setAluno(struct Aluno *ptr, int i){ 
    printf("\n Digite a matricula do aluno [%d] : ");
    scanf ("%d", &ptr->matricula);
    fflush(stdin);

    printf("\n Digite o nome do aluno [%d] : ");
    scanf ("%s", &ptr->nome);
    fflush(stdin);

    printf("\n Digite a media do aluno [%d] : ");
    scanf ("%f", &ptr->media);
    fflush(stdin);
}

void setAlunos(int qtAlunos, struct Aluno *ptr){
    for(int i = 0; i < qtAlunos; i++){
        ptr +=i;
        setAluno(ptr, i);
    }
}

void getAlunos(int qtAlunos, struct Aluno *ptr){
    for(int i = 0; i < qtAlunos; i++){
        ptr+=i;
        printf ("\n\n--- Informacoes aluno [%d] ---\n", i);
        printf("\n\tMatricula: %d", ptr->matricula);
        printf("\n\tNome: %s", &ptr->nome);
        printf("\n\tMedia: %.2f", ptr->media);
        printf ("\n\n--- Final info aluno [%d] ---\n", i);
    }
}
