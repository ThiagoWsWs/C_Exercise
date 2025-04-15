#include <stdio.h>
#include <windows.h>

int main() {
    system("cls"); //Limpa a tela
    float nota1, nota2, media;

    printf("Informe a primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota do aluno: ");
    scanf("%f", &nota2);

    while (nota1 > 10.0 || nota1 < 0.0) 
    {
        printf("Primeira nota invalida, informe a nota novamente: \n");
        scanf("%f", &nota1);
    }
    while (nota2 > 10.0 || nota2 < 0.0)
    {
        printf("Segunda nota invalida, informe a nota novamente: \n");
        scanf("%f", &nota2);
    }

    media = (nota1 + nota2) / 2;
    printf("Nota final do aluno foi: %0.1f", media);
}