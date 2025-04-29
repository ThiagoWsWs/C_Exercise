#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, " ");
  setbuf(stdin,NULL);

  char palavra[10];

  printf("Digite um palavra: ");
  gets(palavra);

  printf("Sua palavra é %s \n", palavra);

  return 0;
}