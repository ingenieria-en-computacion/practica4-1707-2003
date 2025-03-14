#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, **matriz;

    printf("Ingrese el número de filas y columnas: ");
    scanf("%d %d", &m, &n);

    // Reservar memoria dinámicamente
    matriz = (int **)calloc(m, sizeof(int *));
    for (int i = 0; i < m; i++) {
        matriz[i] = (int *)calloc(n, sizeof(int));
    }

    // Modificar algunos valores de la matriz
    int x, y, valor;
    printf("Ingrese la posición (fila columna) y valor a modificar (-1 -1 para salir):\n");
    while (1) {
        scanf("%d %d", &x, &y);
        if (x == -1 || y == -1) break;
        printf("Ingrese el nuevo valor: ");
        scanf("%d", &valor);
        if (x < m && y < n) {
            matriz[x][y] = valor;
        } else {
            printf("Posición fuera de rango.\n");
        }
    }

    // Imprimir la matriz
    printf("Matriz resultante:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberar memoria
    for (int i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}