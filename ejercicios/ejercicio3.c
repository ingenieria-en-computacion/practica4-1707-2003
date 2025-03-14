#include <stdio.h>
#include <stdlib.h>

int main() {
    int *lista, size = 2, count = 0, num;

    lista = (int *)malloc(size * sizeof(int));
    if (lista == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    printf("Ingrese números (ingrese -1 para terminar):\n");
    while (1) {
        scanf("%d", &num);
        if (num == -1) break;

        // Si el arreglo está lleno, hacerlo más grande 
        if (count == size) {
            size *= 2;
            lista = (int *)realloc(lista, size * sizeof(int));
            if (lista == NULL) {
                printf("Error al reasignar memoria.\n");
                return 1;
            }
        }
        lista[count++] = num;
    }

    // Imprimir la lista
    printf("Lista final: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    // Liberar memoria
    free(lista);

    return 0;
}