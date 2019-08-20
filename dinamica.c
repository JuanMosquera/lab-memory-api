#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char* argv[]){
   
    int cantidad=100;
    int *y;
    int *p;
    int i,x;

    printf("Cantidad de valores del array: ");
    scanf("%d",&cantidad);

    y = (int*)malloc(sizeof(int)*cantidad);

    for( i=0;i<cantidad;i++)
    {
        printf("Numero: ");
        scanf("%d",&y[i]);
        
    }
    x= cantidad;
    printf("Cantidad de valores del array: ");
    scanf("%d",&cantidad);
    
    y = (int*)realloc(y,sizeof(int)*cantidad);

     for( i=x;i<cantidad;i++)
    {
        printf("Numero: ");
        scanf("%d",&y[i]);
        
    }
    //Visualizar Datos
    for(int i=0;i<cantidad;i++)
    {
        printf(" %d",y[i]);
    }

    free(y);
    return 0;
}