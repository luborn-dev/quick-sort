/*
 * ============================================================================
 *
 *       Filename:  AtividadeAvaliativa03.cpp
 *
 *    Description:  Trabalho realizado na matéria de ESTRUTURA E RECUPERAÇÃO DE DADOS II
 *                  orientado pela professora Lucia Filomena de Almeida Guimaraes
 *
 *        Version:  1.0
 *        Created:  05/05/2022 14:00:00
 *       Compiler:  gcc
 *
 *        Authors:  Lucas Borges Nascimento       (luborn.dev@gmail.com)
 *                  Ruan Tineu Custódio           (ruantineu@gmail.com)
 *                  Maria Luiza Iuras Pressler    (malupressler@gmail.com)
 *                  Verônica Oliveira Brito       (veronicabrito63863836@gmail.com)
 *
 *   Organization:  Sistemas de Informação - PUC Campinas
 *
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define TAM 5 // <--- Alterar conforme necessidade de execução do programa.

typedef struct Dados{
    float peso;
    float altura;
    int idade;
} Dados;

void preencherDados(Dados pessoas[]){

    float peso, altura;
    int idade;
//  ----------------------------------------------------------
                                             // PREENCHER PESO
    for(int cont =0 ; cont<TAM; cont++){
        peso = 1+(rand() % 100);
        pessoas[cont].peso = peso;
    }

//  ----------------------------------------------------------
                                           // PREENCHER ALTURA
    for(int cont =0 ; cont<TAM; cont++){
        altura = (rand() % 101);
        altura = 1 + (altura / 100);
        pessoas[cont].altura = altura;
    }

//  ----------------------------------------------------------
                                            // PREENCHER IDADE
    for(int cont =0 ; cont<TAM; cont++){
        idade = 1+(rand() % 70);
        pessoas[cont].idade = idade;
    }
}

void bubbleSort(Dados pessoas[]){

    int contador, i;
    Dados aux;

    for (contador = 1; contador < TAM; contador++) {
        for (i = 0; i < TAM - 1; i++) {
            if (pessoas[i].altura < pessoas[i+1].altura) {
                aux = pessoas[i];
                pessoas[i] = pessoas[i+1];
                pessoas[i+1] = aux;
            }
        }
    }
}

void quickSort(Dados pessoas[]){
    /// @todo (Malu/Veronica#9#): Desenvolver essa função até domingo
}

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    int count;

    srand((unsigned)time(NULL));
    Dados pessoas[TAM];

    preencherDados(&pessoas);
    printf("-------SEM ORDENAÇÃO-------\n\nLembrando que o indice da ordenação é a ALTURA em ordem DESCRESCENTE\n\n");
    for (count = 0; count < TAM; count++){
        printf("pos %d - idade: %d\n", count, pessoas[count].idade );
        printf("pos %d - altura: %.2fmts\n",count, pessoas[count].altura);
        printf("pos %d - peso: %.2fmts\n\n",count, pessoas[count].peso);
    }

    bubbleSort(&pessoas);

    printf("-------COM BUBBLE SORT-------\n\nLembrando que o indice da ordenação é a ALTURA em ordem DESCRESCENTE\n\n");

    for (count = 0; count < TAM; count++){
        printf("pos %d - idade: %d\n", count, pessoas[count].idade );
        printf("pos %d - altura: %.2fmts\n",count, pessoas[count].altura);
        printf("pos %d - peso: %.2fmts\n\n",count, pessoas[count].peso);
    }

    return 0;
}
