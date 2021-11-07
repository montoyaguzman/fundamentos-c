#include <stdio.h>
#include <stdbool.h>

int main()
{
    // valor de inicio
    int numerosPares = 0;
    bool isSufficient = false;
    // condicion
    while (numerosPares <= 100 && !isSufficient)
    {
        if (numerosPares % 2 == 0)
        {
            printf("dato : %i\n", numerosPares);
        }
        if (numerosPares >= 10)
        {
            isSufficient = true;
        }
        // razon de cambio
        numerosPares++;
    }
    return 0;
}
