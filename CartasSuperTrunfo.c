#include <stdio.h>

int main (){
      // Declaração das variáveis da primeira carta
    char estado;
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int turistico;

    // Declaração das variáveis da segunda carta

    char estado2;
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;

    printf("SuperTrunfo \n"); // Mensagem inicial do jogo
 
    // Entrada de dados para a primeira carta 
    printf("Uma letra de 'A' a 'H' representando um dos oito estado: ");
    scanf(" %c", &estado); // Lê um caractere (com espaço antes para ignorar Enter)
    
    printf("Digite a letra do estado seguida de um número: ");
    scanf("%s", codigo);
 
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

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
    printf("Uma letra de 'A' a 'H' representando um dos oito estados:  ");
    scanf(" %c", &estado2);
    
    printf("Digite a letra do estado seguida de um número: ");
    scanf("%s", codigo2);
 
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turísticos na cidade: ");
    scanf("%d", &turistico2);

     // Exibe os dados da primeira carta
   
    printf("\n\n Carta 1: \n Estado: %c \n Codigo: %s \n Nome da Cidade: %s \n População: %d Pessoas \n Área: %f km² \n PIB: %f Bilhões de reais \n Número de Pontos Turísticos: %d \n", estado, codigo, cidade, populacao, area, pib, turistico); 
     
    // Exibe os dados da primeira carta

    printf("\n\nCarta 2: \n Estado: %c \n Codigo: %s \n Nome da Cidade: %s \n População: %d pessoas \n Área: %f km² \n PIB: %f Bilhões de reais \n Número de Pontos Turísticos: %d \n", estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2);










       
    return 0;
}
