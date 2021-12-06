#include <stdio.h>

int main()
{
    int a;

    printf("Ingresa un valor: ");
    scanf("%i", &a);
    printf("\nValor: %i", a);
    // El operador & obtiene la direccion de memoria de una variable
    printf("\nApuntador: %p", &a);

    // Un puntero es una variable que almacena una dirección de memoria.
    int *punteroDeA = &a;
    printf("\nValor: %i", a);
    printf("\nValor: %d", *punteroDeA);
    printf("\nApuntador: %p", punteroDeA);

    return 0;
}