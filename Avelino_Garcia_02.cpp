#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    
    if (numero % 2 == 0) {
        printf("%d es un n�mero par.", numero);
    } else {
        printf("%d es un n�mero impar.", numero);
    }

    return 0;
}
