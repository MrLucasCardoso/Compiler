#include <stdio.h>

int fat(int value);// Função responsavel pelo fatorial

// Função principal
int main(){
    printf("Oi boquinha");
}

int fat(int value) {
    if (value < 1) return 0; // Caso value for menor que 1 retornará 0
    int aux = value - 1;

    while(aux > 1) {
        value *= aux--;
    }
    return value;
}


