#include <stdio.h>
#include <windows.h>

int main() {
    system("cls");
    int senha;
    int cont = 0;

    printf("Digite sua senha: ");
    scanf("%d", &senha);

    while (senha != 12345)
    {
        cont++;
        printf("Senha incorreta, tente novamente: \n");
        scanf("%d", &senha);
    }
    
    printf("Senha correta, acesso liberado! \n");
    printf("O acesso foi liberado apos %d tentativa(s)", cont);
}
