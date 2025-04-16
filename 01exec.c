#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int i = 0;
    while (i < 10) {
        i++;
        printf("%d \n", i);
    }
}
