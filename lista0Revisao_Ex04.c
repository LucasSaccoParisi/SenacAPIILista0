#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int mes;
  int dias = 31;
  int anos;

  printf("Digite o mês (1-12) e ano (0-2025): ");
  scanf("%d", &mes);
  scanf("%d", &anos);

  if (mes>12 || mes<1)
    printf("Que?\n");
  else
    switch(mes){
      case 2:
        dias -= 2;
      case 4: case 6: case 9: case 11:
        dias--;
  }

  if (anos<0)
    printf("O que?\n");
  if (anos == 2024 && mes == 2)
    dias == 31;

  printf("O mês %d do ano %d possui %d dias...\n", mes, anos, dias);
  return 0;
}
