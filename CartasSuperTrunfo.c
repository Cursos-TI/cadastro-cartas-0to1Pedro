#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  //dados da carta 1
    char estado; //Uma letra de 'A' a 'H' (representando um dos oito estados).
    char codigo [20]; // codigo da cidade
    char nome [20]; //nome da cidade
    int populacao; // numero de habitantes da cidade
    float area; // Area da cidade em km²
    float pib; //produto interno bruto da cidade
    float turismo; // numero de ponto turistico
    //dados da carta 2
        char estado2; //Uma letra de 'A' a 'H' (representando um dos oito estados).
    char codigo2 [20]; // codigo da cidade
    char nome2 [20]; //nome da cidade
    int populacao2; // numero de habitantes da cidade
    float area2; // Area da cidade em km²
    float pib2; //produto interno bruto da cidade
    float turismo2; // numero de ponto turistico

//prinf("Texto com formato", variavel1);
//scanf("formato", variavel1);

//obs: lembrar sempre de lê primeiro pra depois imprimir 

    printf("Preencha os dados da carta 1: \n");

    printf("Estado: ");
    scanf(" %c", &estado); //lê

    printf("Código: ");
    scanf("%s", codigo); //lê

    printf("Cidade: ");
    scanf("%s", nome); //lê

    printf("População: ");
    scanf("%d", &populacao); //lê

    printf("Área da cidade em km²: ");
    scanf("%f", &area); //lê

    printf("Pib da sua cidade: ");
    scanf("%f", &pib); //lê

    printf("Número de ponto turistico: ");
    scanf("%f", &turismo); //lê



    printf("\n");


       printf("Preencha os dados da carta 2: \n");

    printf("Estado: ");
    scanf(" %c", &estado2); //lê

    printf("Código: ");
    scanf(" %s", codigo2); //lê

    printf("Cidade: ");
    scanf(" %s", nome2); //lê

    printf("População: ");
    scanf(" %d", &populacao2); //lê

    printf("Área da cidade em km²: ");
    scanf("%f", &area2); //lê

    printf("Pib da sua cidade: ");
    scanf("%f", &pib2); //lê

    printf("Número de ponto turistico: ");
    scanf("%f", &turismo2); //lê



    //impressão carta 1:
      printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2fkm²\n", area);
    printf("Pib: %.1f\n", pib);
    printf("Número de ponto tursticos: %.1f\n", turismo); 

    printf("\n");
    //impressaõ carta 2:
     printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("Pib: %.1f\n", pib2);
    printf("Número de ponto tursticos: %.1f\n", turismo2); 
 

return 0;
} 
