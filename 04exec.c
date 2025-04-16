#include <stdio.h>
#include <windows.h>

int main(){ 
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    while (idade > 150 || idade < 0)
    {
        printf("Idade invalida, digite novamente: ");
        scanf("%d", &idade);
    }
    printf("Parabens, voce tem %d ano(s)", idade);
}
