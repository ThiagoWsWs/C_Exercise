#include <stdio.h>
#include <windows.h>

int main() {
    system("cls");

    int soma = 0;

    for (int i = 1; i <= 500; i++)
    {
        if ((i % 2 != 0) && (i % 3 == 0))
        {
            soma+=i;
        }
    }
    printf("A soma dos valores foi: %d", soma);
    
    return 0;
}