#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char letra = 'a';
    char nombre[10] = {'i', 'r', 'o', 'n', 'm', 'a', 'n'};
    int numero = 22;
    int *puntero = &numero;
    float decimal = 9.9;
    char porcentaje = '1';
    bool flag = true;

    printf("\nletra: %c", letra);
    printf("\nnombre: %s", nombre);
    printf("\nnumero: %d", numero);
    printf("\nnumero2: %i", numero);
    printf("\npuntero: %p", puntero);
    printf("\ndecimal: %f", decimal);
    printf("\nporcentaje: %c%%", porcentaje);
    printf("\nflag como entero  %i", flag);
    return 0;
}
