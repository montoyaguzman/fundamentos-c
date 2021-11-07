#include <stdio.h>
#define ONE_DAY_PRICE 10
/*
// sintaxis de una funcion
tipoRetorno nombre(param1, param2) {   
}
*/

// declaracion de una funciona
int sum(int num1, int num2, float num3);
float divide(float num1, float num2);
void generateMoreAmount();
int amount = 0;
const float PI = 3.1416;

int main()
{
    int result = sum(19, 20, 10.10);
    int result2 = sum(29, 21, 0);
    int divideResult = divide(10, 3);
    printf("%c Resultado de la suma %d y resultado de la division %d y la suma 2 es %d", 'H', result, divideResult, result2);
    generateMoreAmount(30);
    printf("\nPago del telefono %d", amount);
    printf("\nCircunferencia =  %f * r", PI);

    /* esta linea tiene error ya que la directiva define
    crea valor no modificables */
    // ONE_DAY_PRICE = ONE_DAY_PRICE + 20;

    /* esta linea genera un error ya que es una constante */
    // PI = PI + 10.0;
    // printf("\nPI = %f", PI);

    return 0;
}

// implementacion de una funciona
int sum(int param1, int param2, float num3)
{
    int result = param1 + param2;
    // more sentences
    return result;
}

// implementacion de la funcion dividir
float divide(float param1, float param2)
{
    float result = param1 / param2;
    return result;
}

void generateMoreAmount(int days)
{
    amount = days * ONE_DAY_PRICE;
}
