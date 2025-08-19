#include <stdio.h>

unsigned int inverte(unsigned int num) {
  unsigned int reversed_num = 0;
  while (num > 0) {
    reversed_num = reversed_num * 10 + num % 10;
    num /= 10;
  }
  return reversed_num;
}

int main() {
  unsigned int numero = 12345;
  unsigned int numero_invertido = inverte(numero);
  printf("Número original: %u\n", numero);
  printf("Número invertido: %u\n", numero_invertido);
  return 0;
}
