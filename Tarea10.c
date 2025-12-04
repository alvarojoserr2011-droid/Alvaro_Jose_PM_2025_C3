#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Libro {
    int año;
    char autor[100];
    char titulo[100];
    char descripcion[200];
    float precio;
    int codigo;
    struct Libro *sig;
} Libro;

Libro* agregarLibro(Libro *lista);
void guardarLibros(Libro *lista);
Libro* cargarLibros();
void buscarPorTitulo(Libro *lista);
void buscarPorAutor(Libro *lista);
void mostrarLibro(Libro *l);


 int main() {
    Libro *lista = NULL;
    int opcion;

    lista = cargarLibros();  // Cargar desde archivo

    do {
            printf("\n---- MENU ----\n");
            printf("1. Agregar libro\n");
            printf("2. Buscar por titulo\n");
            printf("3. Buscar por autor\n");
            printf("4. Guardar y salir\n");
            printf("Seleccione una opcion: ");
            scanf("%d", &opcion);
            getchar();


    switch(opcion) {
            case 1:
                lista = agregarLibro(lista);
                break;
            case 2:
                buscarPorTitulo(lista);
                break;
            case 3:
                buscarPorAutor(lista);
                break;
            case 4:
                guardarLibros(lista);
                printf("Datos guardados. Saliendo...\n");
                break;
            default:
                printf("Opcion invalida\n");
        }

     } while(opcion != 4);

    return 0;
}

 ==AGREGAR LIBRO==

 Libro* agregarLibro(Libro *lista) {
    Libro *nuevo = (Libro*)malloc(sizeof(Libro));

    printf("Ano: ");
    scanf("%d", &nuevo->año); getchar();

    printf("Autor: ");
    fgets(nuevo->autor, 100, stdin);
    nuevo->autor[strcspn(nuevo->autor, "\n")] = 0;

    printf("Titulo: ");
    fgets(nuevo->titulo, 100, stdin);
    nuevo->titulo[strcspn(nuevo->titulo, "\n")] = 0;

    printf("Descripcion: ");
    fgets(nuevo->descripcion, 200, stdin);
    nuevo->descripcion[strcspn(nuevo->descripcion, "\n")] = 0;

    printf("Precio: ");
    scanf("%f", &nuevo->precio); getchar();

    printf("Codigo: ");
    scanf("%d", &nuevo->codigo); getchar();

    nuevo->sig = lista;  // Insertar al inicio
    printf("Libro agregado con exito.\n");

    return nuevo;
}

 ==GUARDAR LISTA==

 void guardarLibros(Libro *lista) {
    FILE *f = fopen("libros.txt", "w");
    if (!f) {
        printf("Error al guardar archivo.\n");
        return;
    }

    Libro *aux = lista;
    while(aux != NULL) {
        fprintf(f, "%d|%s|%s|%s|%.2f|%d\n",
                aux->año, aux->autor, aux->titulo, aux->descripcion,
                aux->precio, aux->codigo);
        aux = aux->sig;
    }

    fclose(f);
}

 ==CARGAR LISTA==

 Libro* cargarLibros() {
    FILE *f = fopen("libros.txt", "r");
    if (!f) {
        printf("No existe archivo, iniciando lista vacia.\n");
        return NULL;
    }

    Libro *lista = NULL;
    Libro temp;
    char linea[400];

    while(fgets(linea, sizeof(linea), f)) {
        sscanf(linea, "%d|%[^|]|%[^|]|%[^|]|%f|%d",
               &temp.año, temp.autor, temp.titulo,
               temp.descripcion, &temp.precio, &temp.codigo);

        Libro *nuevo = (Libro*)malloc(sizeof(Libro));
        *nuevo = temp;
        nuevo->sig = lista;
        lista = nuevo;
    }

    fclose(f);
    printf("Libros cargados desde archivo.\n");
    return lista;
}

 ==MOSTRAR LIBRO==

 void mostrarLibro(Libro *l) {
    if(!l) return;
    printf("\n---- LIBRO ----\n");
    printf("Año: %d\n", l->ano);
    printf("Autor: %s\n", l->autor);
    printf("Titulo: %s\n", l->titulo);
    printf("Descripcion: %s\n", l->descripcion);
    printf("Precio: %.2f\n", l->precio);
    printf("Codigo: %d\n", l->codigo);
}

 ==BUSCAR POR TITULO==

 void buscarPorTitulo(Libro *lista) {
    char busqueda[100];
    printf("Ingrese titulo a buscar: ");
    fgets(busqueda, 100, stdin);
    busqueda[strcspn(busqueda, "\n")] = 0;

    Libro *aux = lista;
    int encontrado = 0;

    while(aux) {
        if (strcasecmp(aux->titulo, busqueda) == 0) {
            mostrarLibro(aux);
            encontrado = 1;
        }
        aux = aux->sig;
    }

    if (!encontrado)
        printf("No se encontro un libro con ese titulo.\n");
}

 ==BUSCAR POR AUTOR==

 void buscarPorAutor(Libro *lista) {
    char busqueda[100];
    printf("Ingrese autor a buscar: ");
    fgets(busqueda, 100, stdin);
    busqueda[strcspn(busqueda, "\n")] = 0;

    Libro *aux = lista;
    int encontrado = 0;

    while(aux) {
        if (strcasecmp(aux->autor, busqueda) == 0) {
            mostrarLibro(aux);
            encontrado = 1;
        }
        aux = aux->sig;
    }

    if (!encontrado)
        printf("No se encontro un libro de ese autor.\n");
}

 ==PROGRAMA==

 libros.txt

 ==GUARDADO==

 1984|George Orwell|1984|Distopia clasica|999.99|123

