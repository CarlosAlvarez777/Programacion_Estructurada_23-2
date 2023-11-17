#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include "anthony.h"

#define MAX_REGISTROS 1500

typedef struct _alum{
    int status;
    int matricula;
    char apPat[30];
    char apMat[30];
    char nombre[50];
    int edad;
    char sexo;
} Talum;

// Prototipos de funciones
void cargarArchivo(Talum vector[], int *numRegistros);
void agregar(Talum vector[], int *numRegistros);
void eliminar(Talum vector[], int *numRegistros);
void buscar(Talum vector[], int numRegistros);
void ordenar(Talum vector[], int numRegistros);
void mostrarTodo(Talum vector[], int numRegistros);
void generarArchivo(Talum vector[], int numRegistros);

int main() {
    Talum vector[MAX_REGISTROS];
    int numRegistros = 0;
    int opcion;

    do {
        printf("\nMENÚ\n");
        printf("1.- Cargar Archivo\n");
        printf("2.- Agregar\n");
        printf("3.- Eliminar\n");
        printf("4.- Buscar\n");
        printf("5.- Ordenar\n");
        printf("6.- Mostrar Todo\n");
        printf("7.- Generar Archivo\n");
        printf("0.- Salir\n");
        printf("Ingrese su opción: ");
        opcion = vali_num(0, 7, "Inserte una opcion: ");
        switch (opcion) {
            case 1:
                cargarArchivo(vector, &numRegistros);
                break;
            case 2:
                agregar(vector, &numRegistros);
                break;
            case 3:
                eliminar(vector, &numRegistros);
                break;
            case 4:
                buscar(vector, numRegistros);
                break;
            case 5:
                ordenar(vector, numRegistros);
                break;
            case 6:
                mostrarTodo(vector, numRegistros);
                break;
            case 7:
                generarArchivo(vector, numRegistros);
                break;
            case 0:
                break;
            default:
                printf("Opción no válida. Inténtelo de nuevo.\n");
        }
    } while (opcion != 0);

    return 0;
}
void cargarArchivo(Talum vector[], int *numRegistros)
{
    FILE *archivo;
    char nombreArchivo[50];

    // Utiliza la función vali_num para obtener el nombre del archivo del usuario
    printf("Ingrese el nombre del archivo a cargar (sin extensión): ");
    scanf("%s", nombreArchivo);
    // Intenta abrir el archivo en modo lectura
    archivo = fopen(strcat(nombreArchivo, ".txt"), "r");
    // Verifica si el archivo se abrió correctamente
    if (archivo == NULL) {
        printf("Error al abrir el archivo. Asegúrese de que exista.\n");
        return;
    }
    // Lee los datos desde el archivo y almacénalos en el vector de registros
    while (fscanf(archivo, "%d %d %s %s %s %d %c",
                  &vector[*numRegistros].status,
                  &vector[*numRegistros].matricula,
                  vector[*numRegistros].apPat,
                  vector[*numRegistros].apMat,
                  vector[*numRegistros].nombre,
                  &vector[*numRegistros].edad,
                  &vector[*numRegistros].sexo) != EOF)
    {
        (*numRegistros)++;
    }
    fclose(archivo);
    printf("Archivo cargado exitosamente.\n");
}

void agregar(Talum vector[], int *numRegistros)
{
    int i;
    FILE *archivo;
    // Utiliza la función vali_num para validar la cantidad de registros a agregar
    int cantidadRegistros = vali_num(1, 10, "Ingrese la cantidad de registros a agregar (1-10): ");
    // Intenta abrir el archivo en modo escritura al final
    archivo = fopen("datos.txt", "a");
    // Verifica si el archivo se abrió correctamente
    if (archivo == NULL) {
        printf("Error al abrir el archivo para escritura.\n");
        return;
    }
    for (i = 0; i < cantidadRegistros; i++) {
        printf("Ingrese los datos para el nuevo registro:\n");
        vector[*numRegistros].status = 1;
        vector[*numRegistros].matricula = vali_num(1, INT_MAX, "Matrícula: ");
        printf("Apellido Paterno: ");
        scanf("%s", vector[*numRegistros].apPat);
        printf("Apellido Materno: ");
        scanf("%s", vector[*numRegistros].apMat);
        printf("Nombre: ");
        scanf("%s", vector[*numRegistros].nombre);
        vector[*numRegistros].edad = vali_num(1, 150, "Edad: ");
        printf("Sexo (M/F): ");
        scanf(" %c", &vector[*numRegistros].sexo);
        // Escribe los datos en el archivo
        fprintf(archivo, "%d %d %s %s %s %d %c\n",
                vector[*numRegistros].status,
                vector[*numRegistros].matricula,
                vector[*numRegistros].apPat,
                vector[*numRegistros].apMat,
                vector[*numRegistros].nombre,
                vector[*numRegistros].edad,
                vector[*numRegistros].sexo);

        (*numRegistros)++;
    }
    // Cierra el archivo
    fclose(archivo);
    printf("Registros agregados exitosamente.\n");
}

void eliminar(Talum vector[], int *numRegistros)
{
    // Utiliza la función vali_num para validar la entrada de la matrícula a eliminar
    int matriculaEliminar;
    printf("Ingrese la matrícula a eliminar: ");
    matriculaEliminar = vali_num(1, INT_MAX, "");
    int encontrado = 0;
    // Busca la matrícula en el vector y marca el registro como eliminado
    for (int i = 0; i < *numRegistros; i++) {
        if (vector[i].status == 1 && vector[i].matricula == matriculaEliminar) {
            printf("Registro eliminado:\n");
            printf("Matrícula: %d\n", vector[i].matricula);
            printf("Apellido Paterno: %s\n", vector[i].apPat);
            printf("Apellido Materno: %s\n", vector[i].apMat);
            printf("Nombre: %s\n", vector[i].nombre);
            printf("Edad: %d\n", vector[i].edad);
            printf("Sexo: %c\n", vector[i].sexo);
            // Marca el registro como eliminado
            vector[i].status = 0;
            encontrado = 1;
            break;  // Sale del bucle si encuentra el registro
        }
    }
    if (!encontrado) {
        printf("Matrícula no encontrada.\n");
    }
}

void buscar(Talum vector[], int numRegistros)
{
    // Utiliza la función vali_num para validar la entrada de la matrícula a buscar
    int matriculaBuscar;
    printf("Ingrese la matrícula a buscar: ");
    matriculaBuscar = vali_num(1, INT_MAX, "");
    int encontrado = 0;
    // Busca la matrícula en el vector
    for (int i = 0; i < numRegistros; i++) {
        if (vector[i].status == 1 && vector[i].matricula == matriculaBuscar) {
            printf("Registro encontrado:\n");
            printf("Matrícula: %d\n", vector[i].matricula);
            printf("Apellido Paterno: %s\n", vector[i].apPat);
            printf("Apellido Materno: %s\n", vector[i].apMat);
            printf("Nombre: %s\n", vector[i].nombre);
            printf("Edad: %d\n", vector[i].edad);
            printf("Sexo: %c\n", vector[i].sexo);

            encontrado = 1;
            break;  // Sale del bucle si encuentra el registro
        }
    }
    if (!encontrado) {
        printf("Matrícula no encontrada.\n");
    }
}

int compararRegistros(const void *a, const void *b)
{
    return ((Talum*)a)->matricula - ((Talum*)b)->matricula;
}
void ordenar(Talum vector[], int numRegistros)
{
    // Utiliza la función vali_num para validar la entrada de la opción de método de ordenación
    int opcionOrdenacion;
    printf("Seleccione el método de ordenación:\n");
    printf("1. Método 1\n");
    printf("2. Método 2\n");
    opcionOrdenacion = vali_num(1, 2, "");
    switch (opcionOrdenacion)
    {
        case 1:
            // Método 1 de ordenación (puedes cambiar esto según el método que desees)
            qsort(vector, numRegistros, sizeof(Talum), compararRegistros);
            break;
        case 2:
            // Método 2 de ordenación (puedes cambiar esto según el método que desees)
            // ...
            break;
        default:
            printf("Opción no válida.\n");
            return;
    }
    printf("Vector ordenado exitosamente.\n");
}

void mostrarTodo(Talum vector[], int numRegistros)
{
    // Muestra todos los registros en el vector
    printf("Mostrando todos los registros:\n");

    for (int i = 0; i < numRegistros; i++) {
        if (vector[i].status == 1) {
            printf("Registro %d:\n", i + 1);
            printf("Matrícula: %d\n", vector[i].matricula);
            printf("Apellido Paterno: %s\n", vector[i].apPat);
            printf("Apellido Materno: %s\n", vector[i].apMat);
            printf("Nombre: %s\n", vector[i].nombre);
            printf("Edad: %d\n", vector[i].edad);
            printf("Sexo: %c\n", vector[i].sexo);
            printf("\n");
        }
    }
}
void generarArchivo(Talum vector[], int numRegistros)
{
    FILE *archivo;
    char nombreArchivo[50];
    printf("Ingrese el nombre del archivo a generar (sin extensión): ");
    scanf("%s", nombreArchivo);
    // Intenta abrir el archivo en modo escritura
    archivo = fopen(strcat(nombreArchivo, ".txt"), "w");
    // Verifica si el archivo se abrió correctamente
    if (archivo == NULL) {
        printf("Error al abrir el archivo para escritura.\n");
        return;
    }
    // Escribe los datos desde el vector de registros al archivo
    fprintf(archivo, "-----------------------------------------------------------------------------------------\n");
    fprintf(archivo, "No | MATRICULA | NOMBRE | APELLIDO P. | APELLIDO MAT. | EDAD | SEXO\n");
    fprintf(archivo, "-----------------------------------------------------------------------------------------\n");
    for (int i = 0; i < numRegistros; i++)
    {
        if (vector[i].status == 1) {
            fprintf(archivo, "%d.- %d   %s %s %s %d %s\n",
                    i,
                    vector[i].matricula,
                    vector[i].nombre,
                    vector[i].apPat,
                    vector[i].apMat,
                    vector[i].edad,
                    (vector[i].sexo == 'M') ? "MASCULINO" : "FEMENINO");
        }
    }
    // Cierra el archivo
    fclose(archivo);
    printf("Archivo generado exitosamente.\n");
}