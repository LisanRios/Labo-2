/*
Datos:
 Una fábrica de cocinas, heladeras y lavarropas, tiene N sucursales propias, cada una
ubicada en la cabecera de partido de la provincia de Buenos Aires. Para ello, se define un array
de N struct con los siguientes datos:
Id_ Sucursal – tipo int
Ciudad - array de tipo char[30]
Descuentos_del_mes – array de tipo float[30]
Total_de_descuentos_del mes - tipo float (inicialmente campo vacío)
Promedio_Descuentos, - de tipo float (inicialmente campo vacío)
 Además se define un array con N datos de gerentes responsables:
Id_Sucursal - tipo int
Nombre_de_gerente – array de tipo char[30]
 Y se define un tercer array de enteros de dimensión N que se inicializara con -1:
 Por otra parte, se almacenan en una array bidimensional de N filas por M columnas, los
descuentos realizados con anterioridad por sucursal:
Mes_1 Mes_2 Mes_3 Mes_4 Mes_5 Mes_6
Suc_1 100 150 180 210 150 230
Suc_2 400 200 300 250 20 150
Suc_3 150 200 140 450 150 320
Suc_4 180 190 320 60 180 140
Requerimiento:
1. Función que reciba el array de sucursales y cargue en el campo
‘Total_de_descuentos_del_mes’, el total del array ‘Descuentos_del_mes’.
2. Función que reciba el array de sucursales, la matriz de descuentos y cargue en el campo
‘Promedio_ Descuentos’ el promedio de los descuentos en los meses procesados.
3. Función que reciba el array de sucursales, el array de enteros y cargue en este array, las
posiciones de los registros del array de sucursales cuyo ‘Total_de_descuentos_del mes supere al
‘Promedio_ Descuentos’. Los datos deben almacenarse en forma contigua. Esta función debe retornar
la cantidad de sucursales detectada.
4. Función que reciba el array de sucursales, array de gerentes y array de posiciones y la
cantidad retornada en la función anterior y emita el campo ‘Ciudad’ de las sucursales obtenidas y
el campo ‘Nombre_de_gerente’.
5. Función que reciba el array de sucursales y lo ordene por ciudad en forma ascendente.
(obligatoria para aprobar)
*/
#include <stdio.h>
#include <string.h>

#define N 4   // Número de sucursales
#define M 6   // Número de meses

struct Sucursal {
    int Id_Sucursal;
    char Ciudad[30];
    float Descuentos_del_mes[30];
    float Total_de_descuentos_del_mes;
    float Promedio_Descuentos;
};

struct Gerente {
    int Id_Sucursal;
    char Nombre_de_gerente[30];
};

void calcularTotalDescuentos(struct Sucursal sucursales[]) {
    for (int i = 0; i < N; i++) {
        float total = 0.0;
        for (int j = 0; j < M; j++) {
            total += sucursales[i].Descuentos_del_mes[j];
        }
        sucursales[i].Total_de_descuentos_del_mes = total;
    }
}

void calcularPromedioDescuentos(struct Sucursal sucursales[]) {
    for (int i = 0; i < N; i++) {
        float total = sucursales[i].Total_de_descuentos_del_mes;
        sucursales[i].Promedio_Descuentos = total / M;
    }
}

int obtenerSucursalesConDescuentoMayorAlPromedio(struct Sucursal sucursales[], int posiciones[]) {
    float promedioTotal = 0.0;
    int count = 0;

    for (int i = 0; i < N; i++) {
        promedioTotal += sucursales[i].Total_de_descuentos_del_mes;
    }
    promedioTotal /= N;

    for (int i = 0; i < N; i++) {
        if (sucursales[i].Total_de_descuentos_del_mes > promedioTotal) {
            posiciones[count++] = i;
        }
    }

    return count;
}

void mostrarCiudadesYGerentes(struct Sucursal sucursales[], struct Gerente gerentes[], int posiciones[], int count) {
    printf("Sucursales con descuentos mayores al promedio:\n");
    for (int i = 0; i < count; i++) {
        int index = posiciones[i];
        printf("Ciudad: %s, Gerente: %s\n", sucursales[index].Ciudad, gerentes[index].Nombre_de_gerente);
    }
}

int compararCiudades(const void *a, const void *b) {
    return strcmp(((struct Sucursal *)a)->Ciudad, ((struct Sucursal *)b)->Ciudad);
}

void ordenarSucursalesPorCiudad(struct Sucursal sucursales[]) {
    qsort(sucursales, N, sizeof(struct Sucursal), compararCiudades);
}

int main() {
    struct Sucursal sucursales[N] = {
        {1, "Maiameeee", {100, 150, 180, 210, 150, 230}, 0.0, 0.0},
        {2, "Nordelta", {400, 200, 300, 250, 20, 150}, 0.0, 0.0},
        {3, "BOCA", {150, 200, 140, 450, 150, 320}, 0.0, 0.0},
        {4, "La loma del orto", {180, 190, 320, 60, 180, 140}, 0.0, 0.0},
    };

    struct Gerente gerentes[N] = {
        {1, "Messi"},
        {2, "Coscu"},
        {3, "Riquelme"},
        {4, "tu mama"},
    };

    int posiciones[N];
    int count;

    calcularTotalDescuentos(sucursales);
    printf("Total de descuentos");
    for (int i = 0; i < N; i++) {
        printf("Sucursal %d:, ciudad: %s\n", sucursales[i].Id_Sucursal, sucursales[i].Ciudad);
        printf("Total de descuentos: %.2f\n", sucursales[i].Total_de_descuentos_del_mes);
    }
    
    calcularPromedioDescuentos(sucursales);
    printf("Promedio de descuentos");
    for (int i = 0; i < N; i++) {
        printf("Sucursal %d:, ciudad: %s\n", sucursales[i].Id_Sucursal, sucursales[i].Ciudad);
        printf("Promedio de descuentos: %.2f\n", sucursales[i].Promedio_Descuentos);
    }

    count = obtenerSucursalesConDescuentoMayorAlPromedio(sucursales, posiciones);
    mostrarCiudadesYGerentes(sucursales, gerentes, posiciones, count);
    printf("Sucursales con descuentos mayores al promedio:\n");
    
    ordenarSucursalesPorCiudad(sucursales);
    printf("Sucursales ordenadas por ciudad:\n");
    for (int i = 0; i < N; i++) {
        printf("Ciudad: %s, Gerente: %s\n", sucursales[i].Ciudad, gerentes[i].Nombre_de_gerente);
    }

    printf("\nSucursales ordenadas por ciudad:\n");
    for (int i = 0; i < N; i++) {
        printf("Ciudad: %s, Gerente: %s\n", sucursales[i].Ciudad, gerentes[i].Nombre_de_gerente);
    }

    return 0;
}


