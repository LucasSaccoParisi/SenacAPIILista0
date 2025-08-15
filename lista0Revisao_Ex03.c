#include <stdio.h>
#include <stdlib.h>

int main(){
  int kmBad; // quanto passou
  int kmLimite = 50; // limite de velocidade
  printf("Passou do limite? Quanto? "); 
  scanf("%d", &kmBad); // input
  int multa = 5 * (kmBad - 50); // calculo para multa

  if (kmBad > kmLimite){ // condição para fazer a multa
    printf("Total da Multa: %d \n", multa);
  } else {
    printf("Passou não oh meu! \n");
  }
  return 0;
}
