#include <stdio.h>

int main()
{
    // valores por defecto de variables
    // Es buena practica iniciarlizar todas las variables de un programas
    /*
    int num = 0;
    char myChar = "";
    double num2 = 0.0;
    */

    int a;
    // & - Operador de direccion: Operador unario que retorna la direccion de su operando
    // * - Operador de indireccion: Retorna el valor del objeto al que se esta apuntando
    int numero = 5, numero2;
    int *ptrNumero, *puntero = NULL;
    ptrNumero = 0;
    ptrNumero = &numero;
    printf("\nApuntador: %p", ptrNumero);
    printf("\nValor: %i", *ptrNumero);

    printf("\n\nNote la relación entre * y &");
    printf("\n&*ptrNumero = : %p", &*ptrNumero);
    printf("\n*&ptrNumero = : %p", *&ptrNumero);

    return 0;
}