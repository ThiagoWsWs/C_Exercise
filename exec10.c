#include <stdio.h>
#include <windows.h>

int main() {
  int valor;
  int i = 0;

  printf("Digite um valor: ");
  scanf("%d", &valor);

  while (valor > i)
  {
    i++;
    printf("%d", i);
  }
}