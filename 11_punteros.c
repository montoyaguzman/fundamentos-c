#include <stdio.h>

int main()
{
    int valor = 90, *mipuntero;
    mipuntero = &valor;
    printf("Valor %d", valor);
    printf("\nValor en memoria: %p", mipuntero);
    return 0;
}