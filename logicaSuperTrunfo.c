#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países

// **** Não ficou claro se devemos continuar a usar as cartas de cidades ou implementar novo
// **** cadastro para cartas de paises - Há orientações conflitantes quanto a isso
// **** usarei as cartas de cidades por serem mais complexas e ja ter o codigo implementado

// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

//Aluno: Edgar Nicolau Fardin - CPF: 222.405.658-37

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    //carta 1
  char estado1[30];
  char codigo1[5];
  char nome1[30];
  unsigned long int populacao1;
  int pontosturisticos1;
  float area1; 
  float pib1; 
  float densidade1; 
  float pibpercapita1; 
  float super1;

  //carta 2
  char estado2[30]; 
  char codigo2[5]; 
  char  nome2[30];
  unsigned long int populacao2;
  int pontosturisticos2;
  float area2; 
  float pib2; 
  float densidade2; 
  float pibpercapita2; 
  float super2;

   //variaveis do sistema
  int opcao1;
  int opcao2;
  int resultado1;
  int resultado2;

  // Área para entrada de dados da primeira carta

  printf("*** JOGO SUPER TRUNFO ***\n\n");
  printf("CADASTRAR PRIMEIRA CARTA\n");
  printf("Digite o estado da primeira carta: ");
  scanf("%s", estado1);
  printf("Digite o código da primeira carta: ");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade da primeira carta: ");
  scanf("%s", nome1);
  printf("Digite o população da primeira carta: ");
  scanf("%lu", &populacao1);
  printf("Digite a área da primeira carta: ");
  scanf("%f", &area1);
  printf("Digite o PIB da primeira carta: ");
  scanf("%f", &pib1);  
  printf("Digite o número de pontos turísticos da primeira carta: ");
  scanf("%d", &pontosturisticos1);

    //Removendo o \n das strings
  estado1[strcspn(estado1, "\n")] = '\0';
  codigo1[strcspn(codigo1, "\n")] = '\0';
  nome1[strcspn(nome1, "\n")] = '\0';

    // Calculo de Densidade e PIB per capita da carta 1
  densidade1 = (float)populacao1 / area1;
  pibpercapita1 =  pib1 / (float)populacao1;

    // Calculo do Super da carta 1
  super1 = populacao1 + area1 + pib1 + pibpercapita1 + pontosturisticos1 + (1 / densidade1);
  

  // Área para exibição dos dados da cidade da primeira carta
  
  printf("\nDados da primeira carta cadastrada:\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da cidade: %s\n", nome1);
  printf("População: %lu habitantes\n", populacao1);
  printf("Área: %.2f km quadrados\n", area1);
  printf("PIB: R$ %.2f\n", pib1);
  printf("Pontos turísticos: %d\n", pontosturisticos1);
  printf("Densidade Populacional: %.2f\n", densidade1);
  printf("PIB per Capita: R$ %.2f\n", pibpercapita1);
  printf("Super Poder: %.2f\n\n", super1);

  // Área para entrada de dados da segunda carta

  printf("CADASTRAR SEGUNDA CARTA\n");
  printf("Digite o estado da segunda carta: ");
  scanf("%s", estado2);
  printf("Digite o código da segunda carta: ");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade da segunda carta: ");
  scanf("%s", nome2);
  printf("Digite o população da segunda carta: ");
  scanf("%lu", &populacao2);
  printf("Digite a área da segunda carta: ");
  scanf("%f", &area2);
  printf("Digite o PIB da segunda carta: ");
  scanf("%f", &pib2);  
  printf("Digite o número de pontos turísticos da segunda carta: ");
  scanf("%d", &pontosturisticos2);  

    //Removendo o \n das strings
  estado2[strcspn(estado2, "\n")] = '\0';
  codigo2[strcspn(codigo2, "\n")] = '\0';
  nome2[strcspn(nome2, "\n")] = '\0';

    // Calculo de Densidade e PIB per capita da carta 2
  densidade2 = (float)populacao2 / area2;
  pibpercapita2 =  pib2 / (float)populacao2;

    // Calculo do Super da carta 2
  super2 = populacao2 + area2 + pib2 + pibpercapita2 + pontosturisticos2 + (1 / densidade2);

  // Área para exibição dos dados da cidade da segunda carta
  
  printf("\nDados da segunda carta cadastrada:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da cidade: %s\n", nome2);
  printf("População: %lu habitantes\n", populacao2);
  printf("Área: %.2f km quadrados\n", area2);
  printf("PIB: R$ %.2f\n", pib2);
  printf("Pontos turísticos: %d\n", pontosturisticos2);
  printf("Densidade Populacional: %.2f\n", densidade2);
  printf("PIB per Capita: R$ %.2f\n", pibpercapita2);
  printf("Super Poder: %.2f\n\n", super2);

  // Área para o menu da primeira comparacao
  printf("*** MENU ***\n\n");
  printf("Escolha a PRIMEIRA opção de comparação:\n");  
  printf("1. PIB\n");
  printf("2. Área\n");
  printf("3. População\n");
  printf("4. Super Poder\n");
  printf("5. PIB per Capita\n");
  printf("6. Pontos Turisticos\n");
  printf("7. Densidade Populacional\n");
  printf("->");

  scanf("%d", &opcao1); 
  printf("\n");

  // Área para a primeira comparação entre as cartas de acordo com a opção escolhida
  //resultado = 1 carta 1 venceu
  //resultado = -1 carta 2 venceu
  //resultado = 0 empate

  switch (opcao1)
  {
  case 1:
    printf("Opção escolhida: PIB\n");
    printf("Carta 1 - %s (%s): %.2f \n", nome1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f \n", nome2, estado2, pib2);
    resultado1 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? -1 : 0;
    break;  
  case 2:
    printf("Opção escolhida: Área\n");
    printf("Carta 1 - %s (%s): %.2f \n", nome1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f \n", nome2, estado2, area2);
    resultado1 = (area1 > area2) ? 1 : (area1 < area2) ? -1 : 0;   
    break;
  case 3:
    printf("Opção escolhida: População\n");
    printf("Carta 1 - %s (%s): %lu \n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu \n", nome2, estado2, populacao2);
    resultado1 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? -1 : 0; 
    break;
  case 4:
    printf("Opção escolhida: Super Poder\n");
    printf("Carta 1 - %s (%s): %.2f \n", nome1, estado1, super1);
    printf("Carta 2 - %s (%s): %.2f \n", nome2, estado2, super2);
    resultado1 = (super1 > super2) ? 1 : (super1 < super2) ? -1 : 0; 
    break;
  case 5:
    printf("Opção escolhida: PIB per Capita\n");
    printf("Carta 1 - %s (%s): %.2f \n", nome1, estado1, pibpercapita1);
    printf("Carta 2 - %s (%s): %.2f \n", nome2, estado2, pibpercapita2);
    resultado1 = (pibpercapita1 > pibpercapita2) ? 1 : (pibpercapita1 < pibpercapita2) ? -1 : 0; 
    break;
  case 6:
    printf("Opção escolhida: Pontos Turísticos\n");
    printf("Carta 1 - %s (%s): %d \n", nome1, estado1, pontosturisticos1);
    printf("Carta 2 - %s (%s): %d \n", nome2, estado2, pontosturisticos2);
    resultado1 = (pontosturisticos1 > pontosturisticos2) ? 1 : (pontosturisticos1 < pontosturisticos2) ? -1 : 0; 
    break;  
  case 7:
    printf("Opção escolhida: Densidade Demográfica\n");
    printf("Carta 1 - %s (%s): %.2f \n", nome1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f \n", nome2, estado2, densidade2);
    resultado1 = (densidade1 > densidade2) ? 1 : (densidade1 < densidade2) ? -1 : 0; 
    break;  
  default:
    printf("Opção inválida\n");
    resultado1 = 2; // controle para nao seguir com a escolha da proxima comparacao
    break;
  }

  // Área para o menu da primeira comparacao
  //resultado = 1 carta 1 venceu
  //resultado = -1 carta 2 venceu
  //resultado = 0 empate
  printf("\nEscolha a SEGUNDA opção de comparação:\n");  
  printf("1. PIB\n");
  printf("2. Área\n");
  printf("3. População\n");
  printf("4. Super Poder\n");
  printf("5. PIB per Capita\n");
  printf("6. Pontos Turisticos\n");
  printf("7. Densidade Populacional\n");
  printf("-->");

  scanf("%d", &opcao2); 
  printf("\n");

  // Área para a segunda comparação entre as cartas de acordo com a opção escolhida
  if((opcao1 != opcao2) && resultado1 != 2){
    switch (opcao2)
    {
    case 1:
      printf("Opção escolhida: PIB\n");
      printf("Carta 1 - %s (%s): %.2f \n", nome1, estado1, pib1);
      printf("Carta 2 - %s (%s): %.2f \n", nome2, estado2, pib2);
      resultado2 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? -1 : 0; 
      break;  
    case 2:
      printf("Opção escolhida: Área\n");
      printf("Carta 1 - %s (%s): %.2f \n", nome1, estado1, area1);
      printf("Carta 2 - %s (%s): %.2f \n", nome2, estado2, area2);
      resultado2 = (area1 > area2) ? 1 : (area1 < area2) ? -1 : 0;  
      break;
    case 3:
      printf("Opção escolhida: População\n");
      printf("Carta 1 - %s (%s): %lu \n", nome1, estado1, populacao1);
      printf("Carta 2 - %s (%s): %lu \n", nome2, estado2, populacao2);
      resultado2 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? -1 : 0;  
      break;
    case 4:
      printf("Opção escolhida: Super Poder\n");
      printf("Carta 1 - %s (%s): %.2f \n", nome1, estado1, super1);
      printf("Carta 2 - %s (%s): %.2f \n", nome2, estado2, super2);
      resultado2 = (super1 > super2) ? 1 : (super1 < super2) ? -1 : 0;  
      break;
    case 5:
      printf("Opção escolhida: PIB per Capita\n");
      printf("Carta 1 - %s (%s): %.2f \n", nome1, estado1, pibpercapita1);
      printf("Carta 2 - %s (%s): %.2f \n", nome2, estado2, pibpercapita2);
      resultado2 = (pibpercapita1 > pibpercapita2) ? 1 : (pibpercapita1 < pibpercapita2) ? -1 : 0;  
      break;
    case 6:
      printf("Opção escolhida: Pontos Turísticos\n");
      printf("Carta 1 - %s (%s): %d \n", nome1, estado1, pontosturisticos1);
      printf("Carta 2 - %s (%s): %d \n", nome2, estado2, pontosturisticos2);
      resultado2 = (pontosturisticos1 > pontosturisticos2) ? 1 : (pontosturisticos1 < pontosturisticos2) ? -1 : 0;  
      break;  
    case 7:
      printf("Opção escolhida: Densidade Demográfica\n");
      printf("Carta 1 - %s (%s): %.2f \n", nome1, estado1, densidade1);
      printf("Carta 2 - %s (%s): %.2f \n", nome2, estado2, densidade2);
      resultado2 = (densidade1 > densidade2) ? 1 : (densidade1 < densidade2) ? -1 : 0;  
      break;  
    default:
      printf("Opção inválida\n");
      break;
    }
    // verificação da carta ganhadora
    //resultado >= 0 houve empate em algumas das comparações
    //se uma carta venceu uma comparação e empatou em outra, então ela venceu o jogo. 1x0 placar final
    printf("%d -- %d", resultado1, resultado2);
    if((resultado1 == 1 && resultado2 >= 0) || (resultado2 == 1 && resultado1 >= 0)){
      printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    }else if((resultado1 == -1 && resultado2 <= 0) || (resultado2 == -1 && resultado1 <= 0)){      
      printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    }else{
      printf("Empatou!\n");
    }
  }else{
    printf("Uma ou mais opção inválida\n");
  }
  return 0;
}