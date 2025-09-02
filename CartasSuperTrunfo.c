#include <stdio.h>

//Desafio Super Trunfo - Cidades
//Tema 1 - Cadastro das Cartas
//Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
//O programa lê e exibe informações de duas cartas do Super Trunfo de Cidades.


int main() {
    
    //Variáveis para a carta 1.
    char estado1[50];
    char codigoCarta1[20];
    char nomeCidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1;
    float pib1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    //Variáveis para a carta 2.
    char estado2[50];
    char codigoCarta2[20];
    char nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2;
    float pib2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;


    //Instruções para o usuário.
    printf("Super Trunfo de Cidades - Cadastro de Cartas\n\n");


    //Cadastro da carta 1.
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04, Ex: A01, B03): ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Digite a área de cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto da cidade: ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);


    //Cálculos da Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; //PIB convertido de bilhões para reais.

    //Super Poder (soma atributos + inverso da densidade). 
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (area1 / populacao1);


    printf("\n");


    //Cadastro da carta 2.
    printf("Cadastro da Carta 2:\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04, Ex: A01, B03): ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Digite a área de cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto da cidade: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);


    //Cálculos da Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2= (pib2 * 1000000000.0) / populacao2; //PIB convertido de bilhões para reais.

    //Super Poder (soma atributos + inverso da densidade).
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (area2 / populacao2);


    printf("\n");


    //Exibição dos dados - Carta 1.
    printf("Carta 1:\n");
    printf("Estado: %s.\n", estado1);
    printf("Código da carta: %s.\n", codigoCarta1);
    printf("Nome da cidade: %s.\n", nomeCidade1);
    printf("Número da população: %lu.\n", populacao1);
    printf("Tamanho da área: %.2f Km².\n", area1);
    printf("Número do PIB: %.2f bilhões de reais.\n", pib1);
    printf("Quantidade de pontos turísticos: %d.\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km².\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais.\n", pibPerCapita1);
    printf("\n");


    //Exibição dos dados - Carta 2.
    printf("Carta 2:\n");
    printf("Estado: %s.\n", estado2);
    printf("Código da carta: %s.\n", codigoCarta2);
    printf("Nome da cidade: %s.\n", nomeCidade2);
    printf("Número da população: %lu.\n", populacao2);
    printf("Tamanho da área: %.2f Km².\n", area2);
    printf("Número do PIB: %.2f bilhões de reais.\n", pib2);
    printf("Quantidade de pontos turísticos: %d.\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km².\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais.\n", pibPerCapita2);
    printf("\n");


    printf("Cadastro concluído!\n");
    printf("\n");


    //Lógica de comparação usando if-else, conforme o atributo.
    if (populacao1 > populacao2) {
        printf("Carta 1 - %s (%s): %lu Habitantes.\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu Habitantes.\n", nomeCidade2, estado2, populacao2);
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else {
        printf("Carta 2 - %s (%s): %lu Habitantes.\n", nomeCidade2, estado2, populacao2);
        printf("Carta 1 - %s (%s): %lu Habitantes.\n", nomeCidade1, estado1, populacao1);
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }
    
    

    return 0;
}
