#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char* argv[]){
   
    int cantidad=100;
    int *x;

    //printf("Cantidad de valores del array: ");
    //scanf("%d",&cantidad);

    x = (int*)malloc(sizeof(int)*cantidad);

    for(int i=0;i<cantidad;i++)
    {
        //printf("Numero: ");
        //scanf("%d",&x[i]);
        x[i]=1;
    }
    free(x);

    //Visualizar Datos
    for(int i=0;i<=cantidad;i++)
    {
        printf(" %d",x[i]);
    }

    return 0;
}