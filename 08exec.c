#include <stdio.h>
#include <windows.h>

int main() {
    system("cls");
    int valor = 0;
    int total = 0;
    int numeros = 0;
    printf("Digite seus valores (-1) para parar: ");
    scanf("%d", &valor);

    while (valor != -1) {
        total += valor;
        numeros++;
        printf("Digite seus valores (digite -1 para parar): ");
        scanf("%d", &valor);
    }
    printf("Voce digitou %d numeros \n", numeros);
    printf("E o total foi %d \n", total);

    return 0;
}
