#include <stdio.h>
#include <stdbool.h>
#define PI 3.14

int main()
{
    /* SINTAXIS
        tipoDato nombrevariale = valor
    */

    // declaracion de variables
    int a, b;
    // asignacion
    a = 10;
    b = 7;
    // declaracion y asignacion
    char c = 'a';
    int d = 10;
    /* TIPOS DE DATOS
        * Los tres tipos de datos simple en C son int, float, char y boolean (requiere de ).
        * String no existe como tipo de variable en C.
        * Para lo datos numericos tambien existen double, short y long (ver longitudes de tipos en el readme.md).
        * unsigned reestringue uso de valores negativos, y amplia los bits en el rango positivo.
    */
    int numerico = 10;
    char letra = 'A';
    float numericoDecimal = 12.5;
    bool flag = true;
    const float ALFA = 2.50;

    printf("\n Variable para enteros: %d", numerico);
    printf("\n Variable para letras: %c", letra);
    printf("\n Variable para enteros: %f", numericoDecimal);
    printf("\n Variable boolean: %i", flag);
    printf("\n Variable MACRO: %f", PI);
    printf("\n Variable constante: %f", ALFA);

    // sizeof nos permite conocer la longitud en bytes de un tipo de dato
    long double positivo;
    printf("\n Variable positiva: %lu", sizeof(positivo));

    return 0;
}