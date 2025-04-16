#include <stdio.h>
#include <windows.h>

int main() {
    system("cls");
    int i, valor, soma = 0;
    int cont = 300;

    for (i = 0; i < cont; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        soma+=valor;
    }
    printf("A soma total dos numeros foi %d \n", soma);
}