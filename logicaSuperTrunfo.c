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

   int atributo;

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
   printf("\n\n== COMPARANDO AS CARTAS == \n");
   printf("Qual atributo que deseja comparar? \n");
   printf("1 - Populacao\n");
   printf("2 - Area\n");
   printf("3 - PIB\n");
   printf("4 - Pontos Turisticos\n");
   printf("5 - Densidade Populacional\n");
   printf("6 - PIB per Capita\n");
   scanf(" %d", &atributo);

    switch(atributo){
      case 1:
         printf("Atributo: População\n");
         printf("A população de %s é de %d\n", nome1, populacao1);
         printf("A população de %s é de %d\n", nome2, populacao2);
      if (populacao1 > populacao2)
      {       
         printf("A população de %s é maior que a população de %s\n", nome1, nome2);
      }
      else if(populacao1 < populacao2) {
         printf("A população de %s é maior que a população de %s\n", nome2, nome1);
      }
      else {
         printf("As populações de %s e %s são iguais\n", nome1, nome2);
      }
      break;
      case 2:
         printf("Atributo: Area\n");
         printf("A Area de %s é de %.2f\n", nome1, area1);
         printf("A Area de %s é de %.2f\n", nome2, area2);
      if (area1 > area1)
      {
         printf("A Area de %s é maior que a area de %s\n", nome1, nome2);
      }
      else if(area1 < area2) {
         printf("A Area de %s é maior que a area de %s\n", nome2, nome1);
      }
      else {
         printf("As areas de %s e %s são iguais\n", nome1, nome2);
      }
      break;
      case 3:
         printf("Atributo: PIB\n");
         printf("O PIB de %s é de %.2f bilhões de reais\n", nome1, pib1);
         printf("O PIB de %s é de %.2f bilhoes de reaia\n", nome2, pib2);
         if (pib1 > pib2)
         {
            printf("O PIB de %s é maior que o PIB de %s\n", nome1, nome2);
            }
         else if (pib1 < pib2)
         {
           printf("O PIB de %s é maior que o PIB de %s\n", nome2, nome1);
         }
         else 
         {
            printf(" O PIB das duas cidadea sao iguais")
            }
         break;
         case 4:
         printf("Atributo: Ponto turistico\n");
         printf("%s possui %d pontos turisticos\n", nome1, turismo1);
         printf("%s possui %d pontos turísticos\n", nome2, turismo2);
         
         if (turismo1 > turiamo2)
         {
         printf("%s possui mais pontos turisticos que %s\n", nome1, nome2);
         }
         else if (turismo1 < turismo2)
         {
         printf("%s possui mais pontoa turisticos que %s\n",nome2, nome1);
         }
         else 
         {
         printf("As duas cidades possuem a mesma quantidade de pontos turisticos\n");
         }
         break;
      
         
       
         
         
      
   }

 

   return 0;
}