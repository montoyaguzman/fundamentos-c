#include <stdio.h>

int main(void)
{
    char letra = 'a';
    char nombre[10] = {'i', 'r', 'o', 'n', 'm', 'a', 'n'};
    int numero = 22;
    int *puntero = &numero;
    float decimal = 9.9;
    char porcentaje = '%';

    printf("\nletra: %c", letra);
    printf("\nletra: %s", nombre);

    printf("\nletra: %d", numero);
    printf("\nletra: %p", puntero);
    printf("\nletra: %f", decimal);
    printf("\nletra: %%", porcentaje);

    return 0;
}
