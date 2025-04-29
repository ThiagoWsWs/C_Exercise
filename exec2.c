#include <stdio.h>

int main() {
  setbuf(stdin, NULL);
  
  char string[100];
  int i;

  printf("Digite uma palavra: ");
  fgets(string, sizeof(string), stdin);

  for (i = 0; string[i] != '\0' && string[i] != '\n'; i++);
  printf("Comprimento da string: %d \n", i);

  return 0;
}