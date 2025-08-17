#include <stdio.h>

int main (){
      // Declaração das variáveis da primeira e segunda carta
    char estado[4], estado2[4], codigo[4], codigo2[4], cidade[40], cidade2[40];
    int populacao, populacao2, turistico, turistico2;
    float area, area2, pib, pib2, densidade, densidade2, capita, capita2;
    

    printf("SuperTrunfo \n"); // Mensagem inicial do jogo
 
    // Entrada de dados para a primeira carta 
    printf("Digite as siglas do Estado: ");
    scanf(" %s", estado); // Lê um caractere (com espaço antes para ignorar Enter)
    
    printf("Digite a letra do estado seguida de um número: ");
    scanf(" %s", codigo);
 
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

    densidade = (float) (populacao/area);
    capita = (pib * 1000000000.0) / populacao; 

     // Mensagem antes de cadastrar a segunda carta
    printf("\n\n\nSalvo com sucesso... \n\n\n");
    printf("Agora é a vez do outro jogador \n\n\n");


    // Entrada de dados para a segunda carta
    printf("Digite as siglas do Estado:  ");
    scanf(" %s", estado2);
    
    printf("Digite a letra do estado seguida de um número: ");
    scanf(" %s", codigo2);
 
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

   
    densidade2 = (float) (populacao2/area2);
    capita2 = (pib2 * 1000000000.0) / populacao2; // PIB convertido para reais

     // Exibe os dados da primeira carta
   
    printf("\n\n--- Carta 1 ---"
    "\n Estado: %s"
    "\n Codigo: %s"
    "\n Nome da Cidade: %s"
    "\n População: %d Pessoas"
    "\n Área: %.2f km²"
    "\n PIB: %.2f Bilhões de reais"
    "\n Pontos Turísticos: %d"
    "\n Densidade Populacional: %.2f hab/km²"
    "\n PIB per Capita: %.2f reais \n",
    estado, codigo, cidade, populacao, area, pib, turistico, densidade, capita);

    
     printf("\n\n--- Carta 2 ---"
     "\n Estado: %s"
     "\n Codigo: %s"
     "\n Nome da Cidade: %s"
     "\n População: %d Pessoas"
     "\n Área: %.2f km²"
     "\n PIB: %.2f Bilhões de reais"
     "\n Pontos Turísticos: %d"
     "\n Densidade Populacional: %.2f hab/km²"
     "\n PIB per Capita: %.2f reais \n",
     estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2, densidade2, capita2);


printf("\nPressione Enter para sair...");
getchar(); // lê o enter pendente
getchar(); // espera novo enter do usuário
       
 return 0;
}
