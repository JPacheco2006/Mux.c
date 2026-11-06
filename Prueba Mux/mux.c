
#include <stdio.h>

int main(void) {
    int entradas[4] = { 10, 20, 30, 40 };
    int s0, s1, seleccion;

    printf("Prueba de multiplexor 4 a 1\n");

    printf("Introduce S0 (0 o 1): ");
    scanf_s("%d", &s0);

    printf("Introduce S1 (0 o 1): ");
    scanf_s("%d", &s1);

    if ((s0 != 0 && s0 != 1) ||
        (s1 != 0 && s1 != 1)) {
        printf("Error: los selectores deben ser 0 o 1.\n");
        return 1;
    }

    seleccion = s1 * 2 + s0;

    printf("Entrada seleccionada: I%d\n", seleccion);
    printf("Salida: %d\n", entradas[seleccion]);

    return 0;
}
