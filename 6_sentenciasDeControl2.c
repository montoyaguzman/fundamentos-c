#include <stdio.h>
#include <stdbool.h>

int age = 99;

int main(void)
{
    switch (age)
    {
    case 0 ... 5:
        printf("Bebé\n");
        break;
    case 6 ... 11:
        printf("Infancia\n");
        break;
    case 12 ... 18:
        printf("Adolescencia\n");
        break;
    case 19 ... 26:
        printf("Juventud\n");
        break;
    case 27 ... 59:
        printf("Adulto\n");
        break;
    case 60 ... 125:
        printf("Persona Mayor\n");
        break;
    default:
        printf("Valor fuera de rango\n");
        break;
    }
    return 0;
}
