#include <stdio.h>
int main() {
   // variaveis das cartas
   char estado1, estado2;
   char codigo1[4], codigo2[4];
   char nome1[50], nome2[50];
   unsigned long int populacao1, populacao2;
   float area1, area2;
   float pib1, pib2;
   int turismo1, turismo2;

   float densidade1, densidade2;
   float pibpercapita1, pibpercapita2;

   float supertrunfo1, supertrunfo2;


   // entrada de dados primeira carta

   printf("===== CARTA 1 ===== \n");

   printf("Informe a letra do primeiro estado (De 'A' a 'H'): \n");
   scanf(" %c", &estado1);

   printf("Informe o codigo do estado(ex: A01, B03): \n");
   scanf(" %s", &codigo1);

   printf("Informe o nome da cidade: \n");
   scanf(" %[^\n]", &nome1);

   printf("Informe a populacao da cidade: \n");
   scanf(" %d", &populacao1);

   printf("Informe a area da cidade(em Km²): \n");
   scanf(" %f", &area1);

   printf("Informe o PIB da cidade(em bilhões de reais): \n");
   scanf(" %f", &pib1);

   printf("Quantidade de pontos turisticos da cidade: \n");
   scanf(" %d", &turismo1);

   // entrada de dados segunda carta

   printf("===== CARTA 2 ===== \n"); 
   printf("Informe a letra do segundo estado (De 'A' a 'H'): \n");
   scanf(" %c", &estado2);  

   printf("Informe o codigo do estado(ex: A01, B03): \n");
   scanf(" %s", &codigo2);

   printf("Informe o nome da cidade: \n");
   scanf(" %[^\n]", &nome2);

   printf("Informe a populacao da cidade: \n");
   scanf(" %d", &populacao2);

   printf("Informe a area da cidade(em Km²): \n");
   scanf(" %f", &area2);

   printf("Informe o PIB da cidade(em bilhões de reais): \n");
   scanf(" %f", &pib2);

   printf("Quantidade de pontos turisticos da cidade: \n");
   scanf(" %d", &turismo2);

   //Calcular a Densidade Populacional
   densidade1 = populacao1 / area1; 
   densidade2 = populacao2 / area2;

   //Calcular o PIB per Capita
   pibpercapita1 = pib1 * 1000000000/ populacao1;
   pibpercapita2 = pib2 * 1000000000/ populacao2;

   // calculo carta super trunfo
   supertrunfo1 = (float)populacao1 + area1 + (pib1 * 1000000000) + turismo1 + pibpercapita1 + (1 / densidade1);
   supertrunfo2 = (float)populacao2 + area2 + (pib2 * 1000000000) + turismo2 + pibpercapita2 + (1 / densidade2);

   

   // saida de dados primeira carta
   printf("\n\n===== CARTA 1 ===== \n");
   printf("Estado: %c\n", estado1);
   printf("codigo: %s\n", codigo1);
   printf("Nome da cidade: %s\n", nome1);
   printf("Populacao: %d\n", populacao1);
   printf("Area: %.2f Km²\n", area1);
   printf("PIB: %.2f bilhões de reais\n", pib1);
   printf("Pontos turisticos: %d\n", turismo1);
   printf("Densidade populacional da cidade 1: %.2f habitantes por Km²\n", densidade1);
   printf("PIB per capita da cidade 1: %.2f reais\n", pibpercapita1);

   // saida de dados segunda carta
   printf("\n\n===== CARTA 2 ===== \n");
   printf("Estado: %c\n", estado2);
   printf("codigo: %s\n", codigo2);
   printf("Nome da cidade: %s\n", nome2);
   printf("Populacao: %d\n", populacao2);
   printf("Area: %.2f Km²\n", area2);
   printf("PIB: %.2f bilhões de reais\n", pib2);
   printf("Pontos turisticos: %d\n", turismo2);
   printf("Densidade populacional da cidade 2: %.2f habitantes por Km²\n", densidade2);
   printf("PIB per capita da cidade 2: %.2f reais\n", pibpercapita2);

   // comparacao das cartas
   printf("\n\n===== COMPARACAO DAS CARTAS POR PIB ===== \n");
   
   printf("A carta 1(%s) tem o Pib de %.2f bilhões de reais.\n",nome1, pib1);
   printf("A carta 2(%s) tem o Pib de %.2f bilhões de reais.\n\n",nome2, pib2);
   
   if(pib1 > pib2){
      printf("Carta 1(%s)tem um PIb maior que a Carta 2(%s).\n",nome1, nome2);
   }
      else if(pib1 < pib2) {
      printf("Carta 2 (%s) tem um PIB maior que a Carta 1(%s).\n",nome2, nome1);
   }  
   else{
      printf("As duas cartas tem o mesmo PIB.\n");
   }
 

   return 0;
}