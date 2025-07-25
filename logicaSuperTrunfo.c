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

   int atributo1, atributo2;

   // entrada de dados primeira carta

   printf("===== CARTA 1 ===== \n");

   printf("Informe a letra do primeiro estado (De 'A' a 'H'): \n");
   scanf(" %c", &estado1);

   printf("Informe o codigo do estado(ex: A01, B03): \n");
   scanf(" %s", &codigo1);

   printf("Informe o nome da cidade: \n");
   scanf(" %[^\n]", &nome1);

   printf("Informe a populacao da cidade: \n");
   scanf(" %lu", &populacao1);

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
   scanf(" %lu", &populacao2);

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
   printf("Populacao: %lu\n", populacao1);
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
   printf("Populacao: %lu\n", populacao2);
   printf("Area: %.2f Km²\n", area2);
   printf("PIB: %.2f bilhões de reais\n", pib2);
   printf("Pontos turisticos: %d\n", turismo2);
   printf("Densidade populacional da cidade 2: %.2f habitantes por Km²\n", densidade2);
   printf("PIB per capita da cidade 2: %.2f reais\n", pibpercapita2);

  // Escolha do primeiro atributo
   printf("\n\n== COMPARANDO AS CARTAS == \n");
   printf("Escolha o primeiro atributo:\n");
   printf("1 - Populacao\n");
   printf("2 - Area\n");
   printf("3 - PIB\n");
   printf("4 - Pontos Turisticos\n");
   printf("5 - Densidade Populacional\n");
   printf("6 - PIB per Capita\n");
   scanf(" %d", &atributo1);


   // Escolha do segundo atributo
   printf("Esolha o segundo atributo:\n");
   if(atributo1 !=1) printf("1 - Populacao\n");
   if(atributo1 !=2) printf("2 - Area\n");
   if(atributo1 !=3) printf("3 - PIB\n");
   if(atributo1 !=4) printf("4 - Pontos Turisticos\n");
   if(atributo1 !=5) printf("5 - Densidade Populacional\n");
   if(atributo1 !=6) printf("6 - PIB per Capita\n");
   scanf(" %d", &atributo2);

   float carta1_atributo1, carta1_atributo2;
   float carta2_atributo1, carta2_atributo2;


   switch (atributo1){
      case 1:
         carta1_atributo1 = populacao1;
         carta2_atributo1 = populacao2;
         printf("Atributo 1: População\n");
         break;
      case 2:
         carta1_atributo1 = area1;
         carta2_atributo1 = area2;
         printf("Atributo 1: Área\n");
         break;
      case 3:
         carta1_atributo1 = pib1;
         carta2_atributo1 = pib2;
         printf("Atributo 1: PIB\n");
         break;
      case 4:
         carta1_atributo1 = turismo1;
         carta2_atributo1 = turismo2;
         printf("Atributo 1: Pontos Turísticos\n");
         break;
      case 5:
         carta1_atributo1 = densidade1;
         carta2_atributo1 = densidade2;
         printf("Atributo 1: Densidade Populacional\n");
         break;
      case 6:
         carta1_atributo1 = pibpercapita1;
         carta2_atributo1 = pibpercapita2;
         printf("Atributo 1: PIB per Capita\n");
         break;
      default:
         printf("Atributo 1 inválido! Por favor, escolha um número de 1 a 6.\n");
                       
   }
   switch (atributo2){
      case 1:
         carta1_atributo2 = populacao1;
         carta2_atributo2 = populacao2;
         printf("Atributo 2: População\n"); 
         break;
      case 2:
         carta1_atributo2 = area1;
         carta2_atributo2 = area2;
         printf("Atributo 2: Área\n");
         break;
      case 3:
         carta1_atributo2 = pib1;
         carta2_atributo2 = pib2;
         printf("Atributo 2: PIB\n");
         break;
      case 4:
         carta1_atributo2 = turismo1;
         carta2_atributo2 = turismo2;
         printf("Atributo 2: Pontos Turísticos\n");
         break;
      case 5:
         carta1_atributo2 = densidade1;
         carta2_atributo2 = densidade2;
         printf("Atributo 2: Densidade Populacional\n");
         break;
      case 6:
         carta1_atributo2 = pibpercapita1;
         carta2_atributo2 = pibpercapita2;
         printf("Atributo 2: PIB per Capita\n");
         break;
      default:
         printf("Atributo 2 inválido! Por favor, escolha um número de 1 a 6.\n");

   }
   // SOMA DOS ATRIBUTOS invertendo a densidade populacional
   float soma1 = 0, soma2 = 0;

   if(atributo1 == 5){
      soma1 -= carta1_atributo1;
      soma2 -= carta2_atributo1;
   }
   else{
      soma1 += carta1_atributo1;
      soma2 += carta2_atributo1;
   }

   if(atributo2 == 5){
      soma1 -= carta1_atributo2;
      soma2 -= carta2_atributo2;
   }
   else{
      soma1 += carta1_atributo2;
      soma2 += carta2_atributo2;
   }

   // COMPARANDO AS CARTAS
printf("\n\n== COMPARAÇÃO == \n");
printf("\nAtributo 1 (valor de %s): %.2f\n", nome1, carta1_atributo1);
printf("Atributo 1 (valor de %s): %.2f\n", nome2, carta2_atributo1);
printf("Atributo 2 (valor de %s): %.2f\n", nome1, carta1_atributo2);
printf("Atributo 2 (valor de %s): %.2f\n", nome2, carta2_atributo2);
printf("\nSoma dos atributos de %s: %.2f\n", nome1, soma1);
printf("Soma dos atributos de %s: %.2f\n", nome2, soma2);


   if (soma1 > soma2) {
      printf("%s é a cidade vencedora!\n",nome1);
   } else if (soma1 < soma2) {
      printf("%s é a cidade vencedora!\n",nome2);
   } else {
      printf("As cartas são iguais!\n");
   }


   return 0;
}