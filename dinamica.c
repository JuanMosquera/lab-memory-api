#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char* argv[]){
   
    int cantidad=100;
    int *y;
    int *p;

    //printf("Cantidad de valores del array: ");
    //scanf("%d",&cantidad);

    y = (int*)malloc(sizeof(int)*cantidad);

    for(int i=0;i<cantidad;i++)
    {
        //printf("Numero: ");
        //scanf("%d",&x[i]);
        y[i]=1;
        if(i == 50){
        	y[i]=*p;
        }
    }
    

    //Visualizar Datos
    for(int i=0;i<=cantidad;i++)
    {
        printf(" %d",y[i]);
    }

    return 0;
}