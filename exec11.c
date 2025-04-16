#include <stdio.h>
#include <windows.h>

int main() {

    int valor = 0;
    int cont = 0;
    int multi = 0;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    while (cont <= 10)
    {
        multi = (valor * cont);
        printf("%d X %d e: %d \n", valor, cont, multi);
        cont++;
    } 
    return 0;
}