#include <stdio.h>

int main(){ 
    char estado1, estado2; // Variáveis para armazenas os dados das cartas (A-H)
    char codigoCidade1, codigoCidade2; // Armazena o código da cidade (ex: A01, B02)
    int populacao1, populacao2; // Armazena a população das cidades correspondentes
    float areaKm1, areaKm2; // Armazena a area em Km² das cidades correspondentes
    float pib1, pib2; // Armazena o PIB das cidades correspondentes
    int pontosTuristicos1, pontosTuristicos2; // Armazena a quantidade de pontos turísticos de cada cidade

    // Coleta e armazena as informaçoes da Carta 1
    printf("\nCarta 1\n");
    printf("Digite uma letra de A-H:\n");
    scanf(" %c", &estado1);


    // Coleta e armazena as informaçoes da Carta 2
    printf("\nCarta 2\n");
    printf("Digite uma letra de A-H:\n");
    scanf(" %c", &estado2);


    // Informaçoes que serao impressas da Carta 1
    printf("\nCarta 1");
    printf("\nEstado: %c\n", estado1);


    // Informaçoes que serao impressas da Carta 2
    printf("\nCarta 2");
    printf("\nEstado: %c\n", estado2);

    return 0;
}