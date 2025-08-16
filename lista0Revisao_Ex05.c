#include <stdio.h>

int main(){
  int salario = 1518; // Salário
  int bonusCiquen = salario + 759; //bonus de 50%
  int bonusCem = salario * 2; // bonus de 100%
  int input; // input para o Salário
  
  printf("Quantas horas foram trabalhadas?? [na semana]: ");
  scanf("%d", &input);

  if(input <= 40){
    printf("Salário recibido: R$ %d\n", salario);
  } else{
    if (input > 40 || input <= 60)
      printf("Salário recibido com bonus de 50: R$ %d\n", bonusCiquen);
  } if (input > 60){
    printf("Salário recibido com bonus de 100: R$ %d\n", bonusCem);
  }
  
  return 0;
}
