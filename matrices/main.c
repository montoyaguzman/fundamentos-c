#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, ""); //acentos//

    int f, c, v1[100][100], v2[100][100], resultm[100][100];
    printf("\n");
    printf("MULTIPLICACIÓN DE MATRICES BOOLEANAS \n\n");

    printf("Escribe cuantas filas hay:");
    scanf("%d", &f);
    printf("Escribe cuantas columnas hay:");
    scanf("%d", &c);

    printf("\nPrimera matriz\n"); //recibir valores para la matriz  v1//

    for (int i = 0; i < f; i++)
    { //recorro filas y columnas//
        for (int j = 0; j < c; j++)
        {
            printf("[%d][%d]= ", i, j);
            scanf("%d", &v1[i][j]);
        }
    }

    printf("\nSegunda matriz\n"); //recibo valores para la matriz v2 //

    for (int i = 0; i < f; i++)
    { //recorro filas y columnas//
        for (int j = 0; j < c; j++)
        {
            printf("[%d][%d]= ", i, j);
            scanf("%d", &v2[i][j]);
        }
    }

    printf("\nPrimera matriz\n"); //imprimo matriz v1//
    printf("\n");
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d ", v1[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    printf("\nSegunda matriz\n"); //imprimo matriz v2//
    printf("\n");
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d ", v2[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    printf("\nPrimera Matriz por Segunda matriz  \n");
    printf("\n");

    // ( m1(0,0) * m2(0,0) ) + ( m1(0,1) * m2(1, 0) )
    int i = 0;
    int j = 0;
    int k = 0;
    for (i = 0; i < f; i++)
    {
        for (j = 0; j < c; j++)
        {
            int res = 0;
            for (k = 0; k < f; k++)
            {
                res += v1[i][k] * v2[k][j];
                resultm[i][j] = res;
            }
        }
    }

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d ", resultm[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}