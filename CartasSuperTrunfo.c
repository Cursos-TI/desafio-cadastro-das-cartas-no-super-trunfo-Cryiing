#include <stdio.h>

int main (){
      // Declaração das variáveis da primeira carta
    char estado[3];
    char codigo[20];
    char cidade[40];
    int populacao;
    float area;
    float pib;
    int turistico;

    // Declaração das variáveis da segunda carta

    char estado2[3];
    char codigo2[20];
    char cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;

    printf("SuperTrunfo \n"); // Mensagem inicial do jogo
 
    // Entrada de dados para a primeira carta 
    printf("Digite as siglas do Estado: ");
    scanf(" %s", estado); // Lê um caractere (com espaço antes para ignorar Enter)
    
    printf("Digite a letra do estado seguida de um número: ");
    scanf("%s", codigo);
 
    printf("Digite o nome da cidade: "); //Corrigido para ler nomes com espaços
    scanf(" %[^\n]", cidade);

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turísticos na cidade: ");
    scanf("%d", &turistico);



     // Mensagem antes de cadastrar a segunda carta
    printf("\n\n\nSalvo com sucesso... \n\n\n");
    printf("Agora é a vez do outro jogador \n\n\n");


    // Entrada de dados para a segunda carta
    printf("Digite as siglas do Estado:  ");
    scanf(" %s", estado2);
    
    printf("Digite a letra do estado seguida de um número: ");
    scanf("%s", codigo2);
 
    printf("Digite o nome da cidade: "); //Corrigido para ler nomes com espaços
    scanf(" %[^\n]", cidade2);

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turísticos na cidade: ");
    scanf("%d", &turistico2);

     // Exibe os dados da primeira carta
   
    printf("\n\n Carta 1: \n Estado: %s \n Codigo: %s \n Nome da Cidade: %s \n População: %d Pessoas \n Área: %.2f km² \n PIB: %2.f Bilhões de reais \n Número de Pontos Turísticos: %d \n", estado, codigo, cidade, populacao, area, pib, turistico); 
     
    // Exibe os dados da primeira carta

    printf("\n\nCarta 2: \n Estado: %s \n Codigo: %s \n Nome da Cidade: %s \n População: %d pessoas \n Área: %.2f km² \n PIB: %2.f Bilhões de reais \n Número de Pontos Turísticos: %d \n", estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2);










       
    return 0;
}
