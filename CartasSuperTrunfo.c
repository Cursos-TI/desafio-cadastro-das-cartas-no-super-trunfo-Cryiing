#include <stdio.h>

int main()
{
    // variáveis da primeira e segunda carta
    char estado[4], estado2[4], codigo[4], codigo2[4], cidade[40], cidade2[40];
    unsigned long int populacao, populacao2;
    int turistico, turistico2;
    float area, area2;
    double pib, pib2;
    float densidade, densidade2, capita, capita2;
    float super1, super2;

    printf("SuperTrunfo \n");

    // Entrada de dados para a primeira carta
    printf("Digite as siglas do Estado: ");
    scanf(" %3s", estado);

    printf("Digite a letra do estado seguida de um número: ");
    scanf(" %3s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%lu", &populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%lf", &pib);

    printf("Digite o numero de pontos turísticos na cidade: ");
    scanf("%d", &turistico);

    densidade = (float)populacao / area;
    capita = (pib * 1e6) / populacao; 
    super1 = (float)populacao + area + (float)pib + (float)turistico + capita + (1.0f / densidade);

    printf("\n\nSalvo com sucesso...\n");
    printf("Agora é a vez do outro jogador\n\n");

    // Entrada de dados para a segunda carta
    printf("Digite as siglas do Estado: ");
    scanf(" %3s", estado2);

    printf("Digite a letra do estado seguida de um número: ");
    scanf(" %3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%lf", &pib2);

    printf("Digite o numero de pontos turísticos na cidade: ");
    scanf("%d", &turistico2);

    densidade2 = (float)populacao2 / area2;
    capita2 = (pib2 * 1e6) / populacao2;
    super2 = (float)populacao2 + area2 + (float)pib2 + (float)turistico2 + capita2 + (1.0f / densidade2);

    // dados da primeira carta
    printf("\n\n--- Carta 1 ---"
           "\n Estado: %s"
           "\n Codigo: %s"
           "\n Nome da Cidade: %s"
           "\n População: %lu Pessoas"
           "\n Área: %.2f km²"
           "\n PIB: %.2f Bilhões de reais"
           "\n Pontos Turísticos: %d"
           "\n Densidade Populacional: %.2f hab/km²"
           "\n PIB per Capita: %.2f mil reais"
           "\n Super Poder: %.2f",
           estado, codigo, cidade, populacao, area, pib, turistico, densidade, capita, super1);

    //dados da segunda carta
    printf("\n\n--- Carta 2 ---"
           "\n Estado: %s"
           "\n Codigo: %s"
           "\n Nome da Cidade: %s"
           "\n População: %lu Pessoas"
           "\n Área: %.2f km²"
           "\n PIB: %.2f Bilhões de reais"
           "\n Pontos Turísticos: %d"
           "\n Densidade Populacional: %.2f hab/km²"
           "\n PIB per Capita: %.2f mil reais"
           "\n Super Poder: %.2f",
           estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2, densidade2, capita2, super2);

    // Comparação das cartas
    printf("\n\n--- Resultado ---\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turistico > turistico2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", capita > capita2);
    printf("Super Trunfo: Carta 1 venceu (%d)\n", super1 > super2);

    //final do jogo 
    printf("\nPressione Enter para sair...");
    getchar();
    getchar(); 
    

    return 0;
}
