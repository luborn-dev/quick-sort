#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

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
    for(int cont =0 ; cont<50; cont++){
        peso = 1+(rand() % 100);
        pessoas[cont].peso = peso;

    }

//  ----------------------------------------------------------
                                           // PREENCHER ALTURA
    for(int cont =0 ; cont<50; cont++){
        altura = (rand() % 101);
        altura = 1 + (altura / 100);
        pessoas[cont].altura = altura;
    }

//  ----------------------------------------------------------
                                            // PREENCHER IDADE
    for(int cont =0 ; cont<50; cont++){
        idade = 1+(rand() % 70);
        pessoas[cont].idade = idade;
    }
}

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    srand((unsigned)time(NULL));
    Dados pessoas[500];
    preencherDados(pessoas);

    return 0;
}
