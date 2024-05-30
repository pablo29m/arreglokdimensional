#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));  /// D0 = Piso - D1 = Departamento  D2=Edificio
    int d0=4,d1=2,d2=3,i,j,k,m=0,suma=0,contador=0;
    double promedio=0;
    int arreglo[d0][d1][d2];
    int unidimensional[24]={0};

    ///Relleno la matriz con datos aleatorios de consumo y al mismo tiempo relleno el unidimensional

    for(i=0;i<d0;i++)
    {
        for(j=0;j<d1;j++)
        {
            for(k=0;k<d2;k++)
            {
                arreglo[i][j][k]=rand() %11 + 10;
                unidimensional[m]=arreglo[i][j][k];
                m++;
            }
        }
    }

    /// Como ya tengo el arreglo unidimensional, calculo el promedio de consumo
    ///de los departamentos 0 de todos los pisos y edificios
    for(m=0;m<24;m++)
    {
        if((m%6)<3)
        {
            suma = suma + unidimensional[m];
            contador++;
        }
    }
    printf("El promedio de consumo es %.2lf",((double)suma/contador));




    return 0;
}
