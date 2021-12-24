#include <stdio.h>

int main()
{
    char miChar = 'a';
    printf("\nMi caracter: %c", miChar);
    char miCaracter[9] = "easy line";
    printf("\nMi cadena: %s", miCaracter);

    for (int i = 0; i < 9; i++)
    {
        printf("\nmiCaracter[%i]: %c", i, miCaracter[i]);
    }

    return 0;
}