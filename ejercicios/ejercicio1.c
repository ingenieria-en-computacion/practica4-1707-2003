#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    int *arr;
    // Reserva de memoria dinámicamente
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        printf("Ingrese el valor para arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Imprimir el arreglo
    printf("Arreglo ingresado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Liberar memoria
    free(arr);

    return 0;
}