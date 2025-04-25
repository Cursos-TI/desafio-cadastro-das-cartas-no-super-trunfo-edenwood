#include <stdio.h>

    
int main(){ 
    // Variáveis para armazenar os dados do estado de cada cidade
    
    char estado1, estado2; // Variáveis para armazenas os dados das cartas (A-H)
    char codigo1[4], codigo2[4]; // Armazena o código da cidade (ex: A01, B02)
    char cidade1[20], cidade2[20]; // Armazena o nome da cidade correspondetes
    int populacao1, populacao2; // Armazena a população das cidades correspondentes
    float areaKm1, areaKm2; // Armazena a área em Km² das cidades correspondentes
    float pib1, pib2; // Armazena o PIB das cidades correspondentes
    int pontosTuristicos1, pontosTuristicos2; // Armazena a quantidade de pontos turísticos de cada cidade

    // Coleta e armazena as informaçoes da Carta 1
    printf("\nCarta 1\n"); // Título da carta do qual os dados serão soletados (Carta 1)
    printf("Digite uma letra de A até H:\n"); // Solicita ao usuário que digite uma letra de A até H
    scanf(" %c", &estado1); // Armazena a letra digitada ( A até H)
    printf("Digite o código da cidade ex: A01, B02:\n"); // Solicita ao usuário o código da cidade (ex: A01, B02)
    scanf("%s", codigo1); // Armazena a letra o código da cidade digitado
    printf("Digite o nome da cidade:\n"); // Solicita ao usuário o nome da cidade a escolha
    scanf("%s", cidade1); // Armazena o nome da cidade digitado pelo usuário
    printf("Digite a população:\n"); // Solicita ao usuário a população da cidade escolhida
    scanf("%d", &populacao1); // Armazena o valor da população digitado
    printf("Digite a área da cidade:\n"); // Solicita ao usuário a área da cidade 
    scanf("%f", &areaKm1); // Armazena o valor da área digitada
    printf("Digite o PIB:\n"); // Solitica ao usuário o PIB da cidade 
    scanf("%f", &pib1); // Armazena o valor do PIB digitado
    printf("Digite a quatidade de pontos turísticos:\n"); // Solicita ao usuário a quantidade de pontos turísticos da cidade
    scanf("%d", &pontosTuristicos1); // Armazena a quantidade de pontos turísticos que foi digitada pelo usuário

    // Coleta e armazenza as informaçoes da Carta 2
    printf("\nCarta 2\n"); 
    printf("Digite uma letra de A até H:\n"); 
    scanf(" %c", &estado2); 
    printf("Digite o código da cidade ex: A01, B02:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
    printf("Digite a população:\n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade:\n");
    scanf("%f", &areaKm2);
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Digite a quatidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Informaçoes que serao impressas referente a Carta 1
    printf("\nCarta 1\n"); // Título da carta do qual os dados serão impressos (Carta 1)
    printf("Estado: %c\n", estado1); // Imprime a letra que foi digitado pelo usuário
    printf("Código: %s\n", codigo1); // Imprime o código da cidade 
    printf("Cidade: %s\n", cidade1); // Imprime o nome da cidade digitado
    printf("População: %d\n", populacao1); // Imprime o número população digitada
    printf("Área: %.2f Km²\n", areaKm1); // Imprime a área da cidade em Km²
    printf("PIB: %.2f bilhões de reais\n", pib1); // Imprime o PIB em bilhões de reais
    printf("Pontos Turísticos: %d\n", pontosTuristicos1); // Imprime a quantidade de pontos turísticos


    // Informaçoes que serao impressas referente a Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", areaKm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0; // Indica que o programa foi executado com sucesso, sem erros
}