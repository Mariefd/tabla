#include <stdio.h>

int main() {
    int numClientes;

    printf("Ingrese el número de clientes: ");
    scanf("%d", &numClientes);

    printf("\n");

    // Declaración de arreglos para almacenar los datos de cada cliente
    char nombre[numClientes][50];
    float consumoPromedio[numClientes];
    float kilometrosPorGalon[numClientes];
    float costoCombustiblePorGalon[numClientes];
    float gastoVariadoPorKilometro[numClientes];

    // Leer los datos de cada cliente
    for (int i = 0; i < numClientes; i++) {
        printf("Cliente #%d\n", i + 1);

        printf("Ingrese el nombre del cliente: ");
        scanf("%s", nombre[i]);

        printf("Ingrese el consumo promedio de 8-16: ");
        scanf("%f", &consumoPromedio[i]);

        printf("Ingrese los kilómetros por galón: ");
        scanf("%f", &kilometrosPorGalon[i]);

        printf("Ingrese el costo del combustible por galón: ");
        scanf("%f", &costoCombustiblePorGalon[i]);

        printf("Ingrese el gasto variado por kilómetro: ");
        scanf("%f", &gastoVariadoPorKilometro[i]);

        printf("\n");
    }

    // Imprimir la tabla con las divisiones para cada cliente
    printf("Tabla de divisiones\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("| No. | Nombre del cliente | Consumo | Kilómetros | Costo Combustible | Gasto Variado | Pago por Galón | Costo Total |\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < numClientes; i++) {
        float pagoPorGalon = consumoPromedio[i] / kilometrosPorGalon[i] * costoCombustiblePorGalon[i];
        float costoTotal = consumoPromedio[i] * gastoVariadoPorKilometro[i] + pagoPorGalon;

        printf("| %3d | %-18s | %7.2f | %10.2f | %17.2f | %13.2f | %14.2f | %11.2f |\n", i + 1, nombre[i],
               consumoPromedio[i], kilometrosPorGalon[i], costoCombustiblePorGalon[i], gastoVariadoPorKilometro[i],
               pagoPorGalon, costoTotal);
    }

    printf("---------------------------------------------------------------------------------------------------------------------\n");

    return 0;
}
