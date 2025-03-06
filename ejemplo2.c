#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arreglo, num, cont;
    printf("¿Cuántos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    printf("%d\n,arreglo");
    
    arreglo = (int*)calloc(num , sizeof(int)); // el primer elemento almacena el numero de elementos a reservar y el segundo el tamaño de los elementos a reservar
    // regresar apuntador de tipo void callo si garantiza que se les asigne un 0 en cada una de las localidades de memoria que se reservaron 
    if(arreglo != NULL){
        printf
        ("Vector reservado:\n\t[");
        for(cont =0; cont <num; cont++){
            printf("\t%d", *(arreglo + cont));            
        }
        printf("\t]\n");
        printf("Liberando el espacio reservado\n");
        free(arreglo); 
        arreglo = NULL;
    }
    return 0;
}