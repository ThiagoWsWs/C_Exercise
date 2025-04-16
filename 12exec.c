#include <stdio.h>
#include <windows.h>

int main() {
    system("cls");
    int valor, i, div = 0;

    printf("Digite um valor?: ");
    scanf("%d", &valor);

    if (valor <= 1)
    {
        printf("Nao e primo, digite um novo numero: ");
        scanf("%d", &valor);
    }
    for (i = 2; i < valor; i++)
    {
        if (valor % i == 0)
        {
            div++;
        }
    }
    
    if (div == 0){
        printf("%d e primo. :) \n", valor);
    } else {
        printf("%d Nao e primo :( \n", valor);
    }
    
    return 0;
}
