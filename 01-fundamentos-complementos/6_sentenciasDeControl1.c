#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a = 10, b = 7;

    if (a == b)
    {
        printf("\n Los numeros son iguales");
    }

    if (a != b)
    {
        printf("\n Los numeros NO SON iguales");
    }

    // OPERADOR MODULO
    // 10 % 2;
    // 3 % 2 = 1
    // 90 % 9 = 0
    // 20 % 15 = 5
    // 24 % 10 = 4
    // 10 % 1 = 0
    // 10 % 3 = 1

    // CONDICIONALES
    int dias = 0;
    bool myPetIsSick = true;
    bool freeMovieWithThor = true;

    if (dias < 6)
    {
        printf("\n SEGUIR HIYENDO AL GYM");
    }

    if (dias >= 6)
    {
        printf("\n descansar c: ");
    }

    //if(myPetIsSick == true) {
    if (myPetIsSick)
    {
        printf("\n Hacer una excepcion");
    }

    // SI aun no he ido 6 dias ENTONCES continuar hiyendo
    // SI llevo mas de 6 dias ENTONCES descanso
    // SI mi mascota esta enferma ENTONCES hago excepcion
    // Si llevo mas de 6 dias y mi mascota no esta enferma puedo descansar

    // OPERADORES
    if (dias >= 6 || !myPetIsSick)
    {
        printf("\n puedes descansar :P ");
    }
    else
    {
        printf("\n sigue entrenando...");
    }

    if (dias >= 6 || freeMovieWithThor)
    {
        printf("\n tomar el dia libre");
    }
    else
    {
        printf("\n sigue entrenando...");
    }

    int edad = 19;
    if (edad >= 18)
    {
        printf("\n ir de fiesta sin permiso");
    }

    if (edad <= 17)
    {
        printf("\n no ir a fiestas");
    }

    if (dias >= 1 || dias < 6)
    {
        printf("\n Dale caña!");
    }
    else if (dias == 7)
    {
        printf("\n Los musculos no van a crecer");
    }
    else if (dias < 0 || dias > 7)
    {
        printf("\n tas mal... xD");
    }
    else
    {
        printf("Perfecto, cumpliste 6 días");
    }

    return 0;
}
