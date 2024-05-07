#include <stdio.h>

int main() {
    int num1, num2, num3, num4, max;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);
    printf("Ingrese el cuarto numero: ");
    scanf("%d", &num4);

    
    
    if ((num1 > num2)&& (num1 > num3)&&(num1 > num4)) {
        printf("El mayor de los cuatro numeros es: %d", num1);
    }else if ((num2 > num1)&& (num2 > num3)&&(num2 > num4)) {
        printf("El mayor de los cuatro numeros es: %d", num2);
    }else if ((num3 > num1)&& (num3 > num2)&&(num3 > num4)) {
        printf("El mayor de los cuatro numeros es: %d", num3);
    }else {
    	printf("El mayor de los cuatro numeros es: %d", num4);
	}


    return 0;
}
