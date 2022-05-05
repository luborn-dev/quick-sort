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

    printf("NA FUNÇÃO---------\n");
    printf("Pessoa 4 altura -> %.2f\n", pessoas[3].altura);
    printf("Pessoa 4 peso -> %.2f\n",   pessoas[3].peso);
    printf("Pessoa 4 idade -> %d\n",   pessoas[3].idade);

}

int main()
{
    setlocale(LC_ALL,"PORTUGUESE");
    srand((unsigned)time(NULL));
    Dados pessoas[500];
    preencherDados(pessoas);
    printf("NA MAIN---------");
    printf("Pessoa 4 altura -> %.2f\n", pessoas[3].altura);
    printf("Pessoa 4 peso -> %.2f\n",   pessoas[3].peso);
    printf("Pessoa 4 idade -> %d\n",   pessoas[3].idade);

    return 0;
}
