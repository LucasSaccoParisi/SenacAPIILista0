#include <stdio.h>
#include <stdbool.h>

bool temTres(int numero, int resto){
  while (numero > 0){
    resto = numero % 10;
    if (resto == 3){
      return temTres;
      break;
    }
    numero /= 10;
  }
}

int main(){
  int input, digito;

  temTres(input, digito);

  printf("Digite um número: ");
  scanf("%d", &input);
  
  if (temTres){
    printf("Têm o número 3 indeed\n");
  } else {
    printf("Não tem.\n");
  }

  return 0;
}
