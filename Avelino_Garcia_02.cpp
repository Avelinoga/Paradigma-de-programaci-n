#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    
    if (numero % 2 == 0) {
        printf("%d es un número par.", numero);
    } else {
        printf("%d es un número impar.", numero);
    }

    return 0;
}
