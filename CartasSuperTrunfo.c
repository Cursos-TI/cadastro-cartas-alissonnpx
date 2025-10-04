#include <stdio.h>
#include <string.h>

	int main(){ //declaraçao de variaveis
		char estado1, estado2;
		int pontos1, pontos2, populacao1, populacao2;
		char codigo1[3], codigo2[3];
		char cidade1[30], cidade2[30];
		float area1, area2, pib1, pib2;
		
		
	printf("Informe os dados da cara numero 1.\n"); 
	printf("Digite o estado:\n"); //comando de saida, solicitando os dados das cartas
	scanf("%c", &estado1); //comando de entrada, recebendo os dados das cartas
	
	printf("Digite o codigo da cidade:\n");
	scanf("%s", &codigo1);
	
	getchar();
	printf("Insira o nome da cidade:\n");
	fgets(cidade1, 30, stdin);
	cidade1[strcspn(cidade1, "\n")] = '\0'; //comando para remover o \n do string
	
	printf("Digite o numero de habitantes da cidade:\n");
	scanf("%d", &populacao1);
	
	printf("Digite a area da cidade em quilometros quadrados:\n");
	scanf("%f", &area1);
	
	printf("Digite o PIB da cidade em bilhoes de reais:\n");
	scanf("%f", &pib1);
	
	
	printf("Digite o numero de pontos turisticos:\n");
	scanf("%d", &pontos1);
	
	printf("Insira os dados da carta 2.\n"); //repetir o processo com a carta numero 2
	printf("Digite o estado:\n");
	scanf(" %c", &estado2);
	
	printf("Digite o codigo da cidade:\n");
	scanf("%s", &codigo2);
	
	getchar();
	printf("Insira o nome da cidade:\n");
	fgets(cidade2, 30, stdin);
	cidade2[strcspn(cidade2, "\n")] = '\0';
	
	printf("Digite o numero da habitantes da cidade:\n");
	scanf("%d", &populacao2);
	
	printf("Digite a area da cidade em quilometros quadrados:\n");
	scanf("%f", &area2);
	
	printf("Digite o PIB da cidade em bilhoes de reais:\n");
	scanf("%f", &pib2);
	
	printf("digite o numero de pontos turisticos:\n");
	scanf("%d", &pontos2);
	printf("\n");
	
	printf("Carta 1.\n"); //comando de saida, exibindo os dados das duas cartas
	
	printf("Estado: %c \n", estado1);
	
	printf("Codigo: %s \n", codigo1);
	
	printf("Nome da cidade: %s \n", cidade1);
	
	printf("Populacao: %d habitantes \n", populacao1);
	
	printf("Area: %.2f quilometros quadrados \n", area1),
	
	printf("PIB: %.2f bilhoes de reais \n", pib1);
	
	printf("Pontos turisticos: %d \n", pontos1);
	
	printf("\n"); // "\n" para separar os dados das duas cartas por uma linha
	
	
	printf("Carta 2.\n");
	
	printf("Estado: %c \n", estado2);
	
	printf("Codigo: %s \n", codigo2);
	
	printf("Nome da cidade: %s \n", cidade2);
	
	printf("Populacao: %d habitantes \n", populacao2);
	
	printf("Area: %.2f quilometros quadrados \n", area2),
	
	printf("PIB: %.2f bilhoes de reais \n", pib2);
	
	printf("Pontos turisticos: %d \n", pontos2);
	
	return 0; // finalizando o codigo com return 0
	}