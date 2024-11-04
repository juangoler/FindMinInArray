#include <stdio.h>

int main() {
    int numeros[10], menor, posicao;

    printf("Digite 10 números:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    menor = numeros[0];
    posicao = 0;

    for(int i = 1; i < 10; i++) {
        if(numeros[i] < menor) {
            menor = numeros[i];
            posicao = i;
        }
    }

    printf("O menor número é %d na posição %d.\n", menor, posicao);
    return 0;
}
