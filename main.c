/*
 * ============================================================================
 *
 *       Filename:  AtividadeAvaliativa03.cpp
 *
<<<<<<< HEAD
 *    Description:  Trabalho realizado na matéria de ESTRUTURA E RECUPERAÇÃO DE DADOS II
=======
 *    Description:  Trabalho realizado na matï¿½ria de ESTRUTURA E RECUPERAï¿½ï¿½O DE DADOS II
>>>>>>> origin/main
 *                  orientado pela professora Lucia Filomena de Almeida Guimaraes
 *
 *        Version:  1.0
 *        Created:  05/05/2022 14:00:00
 *       Compiler:  gcc
 *
 *        Authors:  Lucas Borges Nascimento       (luborn.dev@gmail.com)
<<<<<<< HEAD
 *                  Ruan Tineu Custódio           (ruantineu@gmail.com)
 *                  Maria Luiza Iuras Pressler    (malupressler@gmail.com)
 *                  Verônica Oliveira Brito       (veronicabrito63863836@gmail.com)
 *
 *   Organization:  Sistemas de Informação - PUC Campinas
=======
 *                  Ruan Tineu Custï¿½dio           (ruantineu@gmail.com)
 *                  Maria Luiza Iuras Pressler    (malupressler@gmail.com)
 *                  Verï¿½nica Oliveira Brito       (veronicabrito63863836@gmail.com)
 *
 *   Organization:  Sistemas de Informaï¿½ï¿½o - PUC Campinas
>>>>>>> origin/main
 *
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
<<<<<<< HEAD
#define TAM 5 // <--- Alterar conforme necessidade de execução do programa.
=======
#define TAM 5 // <--- Alterar conforme necessidade de execuï¿½ï¿½o do programa.
>>>>>>> origin/main

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

<<<<<<< HEAD
int particao (Dados pessoa[], int inferior, int superior)
{
    float pivo = pessoa[superior].altura;
    int i = (inferior - 1);

    while (inferior <= superior)
    {
        if (pessoa[inferior].altura > pivo)
        {
            i++;
            float aux = pessoa[i].altura;
            pessoa[i].altura = pessoa[inferior].altura;
            pessoa[inferior].altura = aux;
        }
        inferior++;
    }
    // Troca de elementos
    float aux = pessoa[i+1].altura;
    pessoa[i+1].altura = pessoa[superior].altura;
    pessoa[superior].altura = aux;
    return (i + 1);
}


void quickSort(Dados pessoas[], int LI, int LS) // Seguindo o modelo do pseudocodigo com nomes parecidos.
{
    if (LI < LS)
    {
        int p = particao(pessoas, LI, LS);
        quickSort(pessoas, LI, p - 1);
        quickSort(pessoas, p + 1, LS);
    }
}
=======
/*void quickSort(Dados pessoas[]){
    /// @todo (Malu/Veronica#9#): Desenvolver essa funï¿½ï¿½o atï¿½ domingo
}*/

int particao (Dados pessoa[], int inferior, int superior)  
{  
    float pivo = pessoa[superior].altura; 
    int i = (inferior - 1);  

    while (inferior <= superior)  
    {  
        if (pessoa[inferior].altura < pivo)  
        {  
            i++;  
            float aux = pessoa[i].altura;  
            pessoa[i].altura = pessoa[inferior].altura;  
            pessoa[inferior].altura = aux;  
        }  
        inferior++;
    }  
    //troca de elementos
    float aux = pessoa[i+1].altura;  
    pessoa[i+1].altura = pessoa[superior].altura;  
    pessoa[superior].altura = aux;  
    return (i + 1);  
}  
  

void quickSort(Dados pessoas[], int LI, int LS) // seguindo o modelo do pseudocodigo com nomes parecidos
{  
    if (LI < LS)  
    {  
        int p = particao(pessoas, LI, LS); 
        quickSort(pessoas, LI, p - 1);  
        quickSort(pessoas, p + 1, LS);  
    }  
}  
  


>>>>>>> origin/main

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    int count;

    srand((unsigned)time(NULL));
    Dados pessoas[TAM];

    preencherDados(&pessoas);
<<<<<<< HEAD
    printf("-------SEM ORDENAÇÃO-------\n\nLembrando que o indice da ordenação é a ALTURA em ordem DESCRESCENTE\n\n");
=======
    printf("-------SEM ORDENAï¿½ï¿½O-------\n\nLembrando que o indice da ordenaï¿½ï¿½o ï¿½ a ALTURA em ordem DESCRESCENTE\n\n");
>>>>>>> origin/main
    for (count = 0; count < TAM; count++){
        printf("pos %d - idade: %d\n", count, pessoas[count].idade );
        printf("pos %d - altura: %.2fmts\n",count, pessoas[count].altura);
        printf("pos %d - peso: %.2fmts\n\n",count, pessoas[count].peso);
    }

    /*bubbleSort(&pessoas);

<<<<<<< HEAD
    printf("-------COM BUBBLE SORT-------\n\nLembrando que o indice da ordenação é a ALTURA em ordem DESCRESCENTE\n\n");
=======
    printf("-------COM BUBBLE SORT-------\n\nLembrando que o indice da ordenaï¿½ï¿½o ï¿½ a ALTURA em ordem DESCRESCENTE\n\n");
>>>>>>> origin/main

    for (count = 0; count < TAM; count++){
        printf("pos %d - idade: %d\n", count, pessoas[count].idade );
        printf("pos %d - altura: %.2fmts\n",count, pessoas[count].altura);
        printf("pos %d - peso: %.2fmts\n\n",count, pessoas[count].peso);
    }*/

<<<<<<< HEAD
    printf("-------COM QUICK SORT-------\n\nLembrando que o indice da ordenação é a ALTURA em ordem DECRESCENTE\n\n");

    quickSort(&pessoas, 0, TAM-1);
    for (count = 0; count < TAM; count++){
        printf("pos %d - idade: %d\n", count, pessoas[count].idade );
        printf("pos %d - altura: %.2fmts\n",count, pessoas[count].altura);
        printf("pos %d - peso: %.2fmts\n\n",count, pessoas[count].peso);
=======
    printf("-------COM QUICK SORT-------\n\nLembrando que o indice da ordenaï¿½ï¿½o ï¿½ a ALTURA em ordem CRESCENTE\n\n");

    quickSort(&pessoas, 0, TAM-1);  
    printf("\n The sorted array is: \n");  

    for (count = 0; count < TAM; count++){
       // printf("pos %d - idade: %d\n", count, pessoas[count].idade );
        printf("pos %d - altura: %.2fmts\n",count, pessoas[count].altura);
        //printf("pos %d - peso: %.2fmts\n\n",count, pessoas[count].peso);
>>>>>>> origin/main
    }

    return 0;
}