#include<stdio.h>
int main() {
    float distancia, preciototal;
    int dias;

    printf("Ingrese la distancia a recorrer en kilometros: ");
    scanf("%f", &distancia);

    printf("Ingrese el numero de días de estancia: ");
    scanf("%d", &dias);
    

    if (dias > 7 && distancia > 800) {
        preciototal= distancia*2.5*0.30;
    }else{
    	preciototal= distancia*2.5;
    	
	}
	printf("el total a pagar es de:%.2f Bs",preciototal);

    return 0;

}
