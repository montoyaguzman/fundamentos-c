#include <stdio.h>

int main()
{
    int a;

    // & - Operador de direccion: Operador unario que retorna la direccion de su operando
    // * - Operador de indireccion: Retorna el valor del objeto al que se esta apuntando
    int numero = 5, *ptrNumero;
    // *ptrNumero = 0;
    // *ptrNumero = null;
    ptrNumero = &numero;
    printf("\nApuntador: %p", ptrNumero);
    printf("\nValor: %d", *ptrNumero);

    printf("\n\nNote la relación entre * y &");
    printf("\n&*ptrNumero = : %p", &*ptrNumero);
    printf("\n*&ptrNumero = : %p", *&ptrNumero);

    return 0;
}