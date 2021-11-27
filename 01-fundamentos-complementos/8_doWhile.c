#include <stdio.h>

int main()
{
    int miNumero = 0;
    do
    {
        printf("inicio \n");
    } while (miNumero != 0);

    // valor de inicio
    int numerosPares = 0;
    do
    {
        if (numerosPares % 2 == 0)
        {
            printf("numero par : %i\n", numerosPares);
        }
        // razon de cambio
        numerosPares++;
    } while (numerosPares <= 10); // condicion

    return 0;
}
