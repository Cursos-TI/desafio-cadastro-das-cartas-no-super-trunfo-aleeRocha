#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// O programa lê e exibe informações de duas cartas do Super Trunfo de Cidades.


int main() {
    
    // Variáveis para a carta 1.
    char estado1;
    char codigoCarta1[20];
    char nomeCidade1[50];
    int populacao1;
    int pontosTuristicos1;
    float area1;
    float pib1;

    // Variáveis para a carta 2.
    char estado2;
    char codigoCarta2[20];
    char nomeCidade2[50];
    int populacao2;
    int pontosTuristicos2;
    float area2;
    float pib2;

    // Instruções para o usuário.
    printf("Super Trunfo de Cidades - Cadastro de Cartas\n\n");

    // Cadastro da carta 1.
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (Uma letra de 'A' a 'H', representando os oito estados): ");
    scanf(" %c", &estado1); //Espaço antes do %c para ignorar enter anterior.

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04, Ex: A01, B03): ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área de cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto da cidade: ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Cadastro da carta 2.
    printf("Cadastro da Carta 2:\n");
    printf("Digite o estado (Uma letra de 'A' a 'H', representando os oito estados): ");
    scanf(" %c", &estado2); //Espaço antes do %c para ignorar enter anterior.

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04, Ex: A01, B03): ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área de cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto da cidade: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    //Exibição das cartas.
    printf("Letra do estado: %c.\n", estado1);
    printf("Código da carta: %s.\n", codigoCarta1);
    printf("Nome da cidade: %s.\n", nomeCidade1);
    printf("Número da população: %d.\n", populacao1);
    printf("Tamanho da área: %f.\n", area1);
    printf("Número do PIB: %f.\n", pib1);
    printf("Quantidade de pontos turísticos: %d.\n", pontosTuristicos1);
    printf("\n");

    printf("Letra do estado: %c.\n", estado2);
    printf("Código da carta: %s.\n", codigoCarta2);
    printf("Nome da cidade: %s.\n", nomeCidade2);
    printf("Número da população: %d.\n", populacao2);
    printf("Tamanho da área: %f.\n", area2);
    printf("Número do PIB: %f.\n", pib2);
    printf("Quantidade de pontos turísticos: %d.\n", pontosTuristicos2);
    printf("\n");

    printf("Cadastro concluído!\n");

    return 0;
}
