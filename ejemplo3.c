#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arreglo=NULL, *arreglo2, num, cont;
    printf("¿Cuántos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    arreglo = (int*)malloc(num *sizeof(int));
    if(arreglo != NULL){        
        for(cont =0; cont <num; cont++){
            printf("Ingresa el elemento %d del conjunto\n", cont+1);
            scanf("%d", (arreglo+cont));
        }
        printf("Vector reservado:\n\t[");
        for(cont =0; cont <num; cont++){
            printf("\t%d", *(arreglo + cont));            
        }
        printf("\t]\n");

        printf("Aumentando el espacio reservado al doble\n");
        num *=2;
        arreglo2 = (int*)realloc(arreglo, num*sizeof(int));
        // modificar el tamaño de una memoria que ya se recibio
        //apuntador de  argumento numero dos 
        if(arreglo2 != NULL){ 
            arreglo = arreglo2;       
            for(; cont <num; cont++){
                printf("Ingresa el elemento %d del conjunto\n", cont+1);
                scanf("%d", (arreglo2+cont));
            }
            printf("Vector reservado:\n\t[");
            for(cont =0; cont <num; cont++){
                printf("\t%d", *(arreglo2 + cont));            
            }
            printf("\t]\n");    
            // arreglo y arrerglo dos apunta al mismo
            arreglo2 = (int*)realloc(arreglo, 2*sizeof(int));
             printf("Vector reservado:\n\t[");
            for(cont =0; cont <6; cont++){
                printf("\t%d", *(arreglo2 + cont));            
            }
            printf("\t]\n");   
        }
        printf("Liberando el espacio reservado\n");

        free(arreglo);        
        arreglo = arreglo2 =NULL;
        // PUEDE SISMINUIR EL TAMAÑO DEL ARREGLO
    }
    return 0;
}