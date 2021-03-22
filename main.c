#include <stdio.h>
#include <stdlib.h>


int main()
{

    int nota, suma, promedio,i, notasTotales, minimo, maximo;
    nota=0;
    suma=0;
    promedio=0;
    notasTotales=0;
    maximo=0;
    minimo=0;

    printf("Ingrese cantidad de notas totales \n");
    scanf("%d", &notasTotales);

    for (i=0; i<notasTotales ; i++)
    {

        printf("Ingrese nota \n");
        scanf("%d", &nota);

        suma=suma+nota;
        if(i==0){
            maximo=nota;
        }
        else{
            if(nota>maximo){
                maximo=nota;
            }
        }
        if(i==0){
            minimo=nota;
        }
        else{
            if(nota<minimo){
                minimo=nota;
            }
        }
    }
    promedio=suma/notasTotales;
    printf("La nota max es: %d \n", maximo);
    printf("La nota Min es: %d \n", minimo);
    printf("La suma total de notas es: %d \n", suma);
    printf("El promedio es; %d \n", promedio);

    return 0;

}
