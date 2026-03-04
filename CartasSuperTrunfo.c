#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// A seguir, estão as dafinições dos estados e seus respectivos caracteres: A = Alagoas - B = Bahia - C = Ceará - D = Piauí - E = Sergipe - F = Paraíba - G = Maranhão - H = Pernambuco.
// A lógica usada na sintaxe das variáveis é a seguinte: o nome da variável inicia-se pelo nome de quem/oque pertence a informação armazenada (ex: cidade); o primeiro algarismo numérico representa o estado pertencente, e o segundo pertence à cidade referida.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1;
  char codigo11[3], codigo12[3];
  char cidade11[20], cidade12[20];
  int populaçao11, populaçao12;
  float area11, area12;
  float pib11, pib12;
  int turist11, turist12;

  // Área para entrada de dados
  printf("Digite o estado: ");
  scanf("%c", &estado1);

  printf("Digite o codigo da cidade: ");
  scanf(" %s", &codigo11);

  printf("Digite o nome da cidade: ");
  scanf(" %s", &cidade11);
  
  printf("Digite a população da cidade: ");
  scanf("%d", &populaçao11);

  printf("Digite a área da cidade: ");
  scanf("%f", &area11);






  // Área para exibição dos dados da cidade

return 0;
} 
