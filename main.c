#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pesos[5];
    float suma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Introduce un peso para almacenar: ");
        scanf("%f", &pesos[i]);
        suma += pesos[i];
    }

    float promedio = suma / 5;
    int cont_mayor_igual = 0;
    int cont_menor = 0;

    for (int i = 0; i < 5; i++) {
        if (pesos[i] >= promedio) {
            cont_mayor_igual++;
        } else {
            cont_menor++;
        }
    }

    printf("El promedio de pesos es: %.2f\n", promedio);
    printf("Número de pesos mayores o iguales que el promedio: %d\n", cont_mayor_igual);
    printf("Número de pesos menores que el promedio: %d\n", cont_menor);

     }
