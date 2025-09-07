#include <stdio.h>

//Desafio Super Trunfo - Países
//Tema 1 - Cadastro das Cartas
//Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de países.
//O programa lê e exibe informações de duas cartas do Super Trunfo de Países.


int main() {
    
    //Variáveis para a carta 1.
    char pais1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1;
    float pib1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    //Variáveis para a carta 2.
    char pais2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2;
    float pib2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Variável para guardar a escolha do atributo.
    int opcao;


    //Instruções para o usuário.
    printf("Super Trunfo de Países - Cadastro de Cartas\n\n");


    //Cadastro da carta 1.
    printf("Cadastro da Carta 1:\n");
    printf("Digite o país: ");
    scanf("%s", pais1);

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
    printf("Digite o país: ");
    scanf("%s", pais2);

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
    printf("País: %s.\n", pais1);
    printf("Número da população: %lu.\n", populacao1);
    printf("Tamanho da área: %.2f Km².\n", area1);
    printf("Número do PIB: %.2f bilhões de reais.\n", pib1);
    printf("Quantidade de pontos turísticos: %d.\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km².\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais.\n", pibPerCapita1);
    printf("\n");


    //Exibição dos dados - Carta 2.
    printf("Carta 2:\n");
    printf("País: %s.\n", pais2);
    printf("Número da população: %lu.\n", populacao2);
    printf("Tamanho da área: %.2f Km².\n", area2);
    printf("Número do PIB: %.2f bilhões de reais.\n", pib2);
    printf("Quantidade de pontos turísticos: %d.\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km².\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais.\n", pibPerCapita2);
    printf("\n");


    printf("Cadastro concluído!\n");
    printf("\n");


    // Menu interativo, com lógica de comparação utilizando estrutura de decisão encadeada.
    printf("**** Menu principal ****\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de pontos turísticos.\n");
    printf("5. Densidade demográfica.\n");
    printf("Digite o número da opção: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s:\n", pais1, pais2);

    switch (opcao)
    {
    case 1:
        printf("Atributo: População!\n");
        printf("Carta 1 - %s: %lu Habitantes.\n", pais1, populacao1);
        printf("Carta 2 - %s: %lu Habitantes.\n", pais2, populacao2);

        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!", pais1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!", pais2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 2:
        printf("Atributo: Área!\n");
        printf("Carta 1 - %s: %.2f Km².\n", pais1, area1);
        printf("Carta 2 - %s: %.2f Km².\n", pais2, area2);

        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!", pais1);
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 (%s) venceu!", pais2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 3:
        printf("Atributo: PIB!\n");
        printf("Carta 1 - %s: %.2f bilhões de reais.\n", pais1, pib1);
        printf("Carta 2 - %s: %.2f bilhões de reais.\n", pais2, pib2);

        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!", pais1);
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 (%s) venceu!", pais2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 4:
        printf("Atributo: Pontos turísticos!\n");
        printf("Carta 1 - %s: %d quantidade de pontos turísticos.\n", pais1, pontosTuristicos1);
        printf("Carta 2 - %s: %d quantidade de pontos turísticos.\n", pais2, pontosTuristicos2);

        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("Resultado: Carta 1 (%s) venceu!", pais1);
        } else if (pontosTuristicos2 > pontosTuristicos1) {
            printf("Resultado: Carta 2 (%s) venceu!", pais2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 5:
        printf("Atributo: Densidade demográfica!\n");
        printf("Carta 1 - %s: %.2f hab/km².\n", pais1, densidadePopulacional1);
        printf("Carta 2 - %s: %.2f hab/km².\n", pais2, densidadePopulacional2);

        // Regra invertida: vence o menor valor.
        if (densidadePopulacional1 < densidadePopulacional2) {
            printf("Resultado: Carta 1 (%s) venceu!", pais1);
        } else if (densidadePopulacional2 < densidadePopulacional1) {
            printf("Resultado: Carta 2 (%s) venceu!", pais2);
        } else {
            printf("Empate!\n");
        }
        break;
    default:
        printf("Opção inválida! Por favor, escolha uma opção de 1 a 5.\n");
        break;
    }
        
    
    return 0;
}
