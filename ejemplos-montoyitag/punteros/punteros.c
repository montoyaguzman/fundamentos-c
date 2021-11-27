#include <stdio.h>

int main()
{
    int a;

    printf("Ingrese un valor:");
    scanf("%i", &a);

    printf("\nValor: %i", a);
    printf("\nApuntador: %p", &a);

    int *apt = &a;

    printf("\nValor: %i", *apt);
    printf("\nApuntador: %p", apt);

    return 0;
}