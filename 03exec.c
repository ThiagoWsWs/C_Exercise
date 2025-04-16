#include <stdio.h>
#include <windows.h>

int main() {
    int valor;
    printf("Insira um valor entre 1 e 10: ");
    scanf("%d", &valor);

    while (valor > 10 || valor < 1)
    {
        printf("Valor invalido, digite um novo valor: ");
        scanf("%d", &valor);
    }
    printf("Seu valor e: %d", valor);
}
