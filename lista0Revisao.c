#include <stdio.h>

int main(){
  int ui; // variavel para o input do usuario
  printf("Digite um valor em metros: ");
  scanf("%d", &ui); // input
  
  int dm = ui * 10; // decimetros
  int cm = ui * 100; // Centímetros
  int ml = ui * 1000; // milimetros
  printf("\n");

  printf("Resultados: ");
  printf("\n");

  printf("Decímetros: %d \n Centímetros: %d \n Milímetros: %d \n", dm, cm, ml);
  
  return 0;
}
