#include <stdio.h>
#include <windows.h>

int main() {
    system("cls");
    float MaiorAltura, MenorAltura, Altura;
    int i;
    int cont = 15;

    for (i = 0; i < cont; i++){
        printf("Digite sua altura: ");
        scanf("%f", &Altura);

        if (i == 0){
            //Precisa botar pq inicializa com a primeira altura informada, caso contrario a altura menor nao atualiza
            MaiorAltura = Altura;
            MenorAltura = Altura;
        }
        else {
            if (Altura > MaiorAltura)
            {
                MaiorAltura = Altura;
            }
            else if (Altura < MenorAltura)
            {
                MenorAltura = Altura;
            }
        }
        printf("Obrigado por informar!\n");
    }

    printf("A maior altura foi: %0.2f \n", MaiorAltura);
    printf("A menor altura foi: %0.2f \n", MenorAltura);

    return 0;
}