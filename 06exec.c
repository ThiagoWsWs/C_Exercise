#include <stdio.h>
#include <windows.h>

int main() {
    system("cls");
    float nota1, nota2, nota3, media;
    char resp;

    printf("Insira a primeira nota do aluno: \n");
    scanf("%f", &nota1);

    while (nota1 < 0.0 || nota1 > 10.0)
    {
        printf("Insira uma nota valida: \n");
        scanf("%f", &nota1);
    }
    
    printf("Insira a segunda nota do aluno: \n");
    scanf("%f", &nota2);

    while (nota2 < 0.0 || nota2 > 10.0)
    {
        printf("Insira uma nota valida: \n");
        scanf("%f", &nota2);
    }
    
    printf("Insira a terceira nota do aluno: \n");
    scanf("%f", &nota3);

    while (nota3 < 0.0 || nota3 > 10.0)
    {
        printf("Insira uma nota valida: \n");
        scanf("%f", &nota3);
    }
    
    media = (nota1 + nota2 + nota3) / 3;
    printf("A media do aluno foi: %.2f", media);

    printf("Gostaria de calcular a media de mais um aluno? (S- sim)");
    setbuf(stdin,NULL);
    scanf("%c", &resp);

    if (resp == 'S')
    {
        printf("Insira a primeira nota do aluno: \n");
        scanf("%f", &nota1);
    
        while (nota1 < 0.0 || nota1 > 10.0)
        {
            printf("Insira uma nota valida: \n");
            scanf("%f", &nota1);
        }
        
        printf("Insira a segunda nota do aluno: \n");
        scanf("%f", &nota2);
    
        while (nota2 < 0.0 || nota2 > 10.0)
        {
            printf("Insira uma nota valida: \n");
            scanf("%f", &nota2);
        }
        
        printf("Insira a terceira nota do aluno: \n");
        scanf("%f", &nota3);
    
        while (nota3 < 0.0 || nota3 > 10.0)
        {
            printf("Insira uma nota valida: \n");
            scanf("%f", &nota3);
        }
        
        media = (nota1 + nota2 + nota3) / 3;
        printf("A media do aluno foi: %.2f", media);
    
        printf("Gostaria de calcular a media de mais um aluno? (S- sim)");
        scanf("%c", &resp);
    }


    else printf("Programa Finalizado!");
}
