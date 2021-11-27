#include <stdio.h>
#define TAM_MAXIMO 80

int main(void)
{
    char cadena[TAM_MAXIMO];
    int entero1, entero2;
    float decimal;

    printf("\n Introduce dos enteros separados por un espacio: ");
    scanf("%d %d", &entero1, &entero2);
    printf("\n Introduce un número decimal: ");
    scanf("%f", &decimal);
    printf("\n Introduce una cadena: ");
    scanf("%s", cadena);
    printf("\n Esto es todo lo que has escrito: ");
    printf("%d %d %f %s\n", entero1, entero2, decimal, cadena);
    return 0;
}