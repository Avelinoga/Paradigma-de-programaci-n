#include <stdio.h>

int main() {
    float precioventa, precioneto, iva, descuento, total;
    int cantidad;

    printf("Ingrese el precio de venta del artículo: ");
    scanf("%f", &precioventa);

    printf("Ingrese la cantidad de unidades adquiridas: ");
    scanf("%d", &cantidad);

    precioneto = precioventa * cantidad;
    iva = precioneto * 0.12; 
    total = precioneto + iva; 

    if (total > 50000) {
        descuento = total * 0.05; 
        total -= descuento; 
    } else {
        descuento = 0;
    }

    printf("\n--- Factura ---\n");
    printf("Precio de venta por unidad: %.2f\n", precioventa);
    printf("Cantidad adquirida: %d\n", cantidad);
    printf("Precio neto: %.2f\n", precioneto);
    printf("IVA (12%%): %.2f\n", iva);
    
    if (descuento > 0) {
        printf("Descuento (5%%): %.2f\n", descuento);
    }

    printf("Total a pagar: %.2f\n", total);

    return 0;
}
