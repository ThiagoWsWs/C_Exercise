#include <stdio.h>
#include <windows.h>

int main(){ 
    int i, valor, cont = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite um Valor: ");
        scanf("%d", &valor);

        if (valor >= 10 && valor <= 20){
            cont++;
        }
        
    }
    printf("O total de valores entre 10 e 20 foi: %d", cont);
}