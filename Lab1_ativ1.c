/*Primeira atividade do laboratório de ORI
Autor: Beatriz
Data: 04/04

Descrição do problema:
    )Faça um programa que leia o arquivo compra.txt e calcule o total da compra. Esse 
arquivo contém o nome, a quantidade e o preço de diversos produtos (separados por 
linha). Um exemplo do arquivo é mostrado a seguir:

    manteiga 1 4.5
    pao 1 7.99
    arroz 2 10.95
    feijao 3 5.4
    carne 2 21.90
    detergente 3 1.65
    sabao 2 3.45

*/
#include <stdio.h>

int main() {

  FILE *arquivo = fopen("compra.txt", "r");

  if (arquivo == NULL) {
    printf("Erro para abrir o arquivo\n");
  }

  char produto[20];
  int quant = 0;
  float preco = 0;
  float total = 0;

  while (1) {
    fscanf(arquivo, "%s %d %f", produto, &quant, &preco);
    if (feof(arquivo))
      break;
    total += quant * preco;
  }

  fclose(arquivo);

  printf("O total foi de %.2f", total);

  return 0;
}