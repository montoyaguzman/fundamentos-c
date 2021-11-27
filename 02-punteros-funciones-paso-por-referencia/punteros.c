#include <stdio.h>

int main()
{
    int a;

    printf("Ingresa un valor: ");
    scanf("%i", &a);
    printf("\nValor: %i", a);
    printf("\nApuntador: %p", &a);

    int *punteroDeA = &a;
    printf("\nValor: %i", *punteroDeA);
    printf("\nApuntador: %p", punteroDeA);

    return 0;
}