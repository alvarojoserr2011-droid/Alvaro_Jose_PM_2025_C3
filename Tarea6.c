
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura para los productos
typedef struct {
    char nombre[50];
    float precio;
    int cantidad;
} Producto;

// Prototipos de funciones
Producto* cargarInventario(const char* nombreArchivo, int* numProductos);
void guardarInventario(const char* nombreArchivo, Producto* inventario, int numProductos);
Producto agregarProducto();
void imprimirInventario(Producto* inventario, int numProductos);

int main() {
    Producto* inventario = NULL;
    int numProductos = 0;
    char opcion;


    // ️Leer archivo de inventario
    inventario = cargarInventario("inventario.txt", &numProductos);

    // Preguntar si desea agregar un producto nuevo
    printf("¿Desea agregar un nuevo producto al inventario? (s/n): ");
    scanf(" %c", &opcion);
    if (opcion == 's' || opcion == 'S') {
        Producto nuevo = agregarProducto();
        numProductos++;
        inventario = realloc(inventario, numProductos * sizeof(Producto)); // Memoria dinámica
        inventario[numProductos - 1] = nuevo;
        guardarInventario("inventario.txt", inventario, numProductos);
        printf("Producto agregado exitosamente.\n");
    }

    // Preguntar si quiere imprimir el inventario
    printf("¿Desea imprimir los productos en inventario? (s/n): ");
    scanf(" %c", &opcion);
    if (opcion == 's' || opcion == 'S') {
        imprimirInventario(inventario, numProductos);
    }

    free(inventario);
    return 0;
}



Producto* cargarInventario(const char* nombreArchivo, int* numProductos) {
    FILE* archivo = fopen(nombreArchivo, "r");
    if (!archivo) {
        printf("No se encontró el archivo. Se creará uno nuevo.\n");
        *numProductos = 0;
        return NULL;
    }

    Producto temp;
    Producto* inventario = NULL;
    *numProductos = 0;

    while (fscanf(archivo, "%49s %f %d", temp.nombre, &temp.precio, &temp.cantidad) == 3) {
        (*numProductos)++;
        inventario = realloc(inventario, (*numProductos) * sizeof(Producto));
        inventario[(*numProductos) - 1] = temp;
    }

    fclose(archivo);
    return inventario;
}



void guardarInventario(const char* nombreArchivo, Producto* inventario, int numProductos) {
    FILE* archivo = fopen(nombreArchivo, "w");
    if (!archivo) {
        printf("Error al guardar el archivo.\n");
        return;
    }

    for (int i = 0; i < numProductos; i++) {
        fprintf(archivo, "%s %.2f %d\n", inventario[i].nombre, inventario[i].precio, inventario[i].cantidad);
    }

    fclose(archivo);
}


Producto agregarProducto() {
    Producto p;
    printf("Ingrese el nombre del producto: ");
    scanf("%49s", p.nombre);
    printf("Ingrese el precio: ");
    scanf("%f", &p.precio);
    printf("Ingrese la cantidad: ");
    scanf("%d", &p.cantidad);
    return p;
}

Manzana 15.5 10
Leche 30.0 5
Pan 25.0 12
