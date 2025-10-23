#include <stdio.h>

void main(void)
{
char p1, p2, p3 = '$';
printf("\nIngrese un caracter: ");
p1=getchar();
putchar(p1);
printf("\n");
fflush(stdin);
printf("\nEl caracter p3 es: ");
putchar(p3);
printf("\n");
printf("\nIngrese otro caracter: ");
fflush(stdin);
scanf("%c", &p2);
printf("%c", p2);
}

# include <stdio.h>
# include <ctype.h>

void main(void)
{
char p1;
printf("\Ingrese un caracter para analizar si este es un digito: ");
p1 = getchar();
if (isdigit (p1))
    printf("%c es un digito \n", p1);
else
    printf("%c no es un digito \n", p1);

fflush(stdin);
printf("\nIngrese un caracter para examinar si este es una letra minuscula: ");
p1 = getchar();
if (isalpha (p1))
        if (islower (p1))
         printf("%c es una letra minuscula \n", p1);
     else
         printf("%c no es una letra minuscula \n", p1);
else
    printf("%c no es una letra \n", p1);

fflush(stdin);
printf("\nIngrese una letra para convertirla de mayuscula a minuscula: ");
p1 = getchar();
if (isalpha (p1))
        if (isupper(p1))
         printf("%c fue convertida de mayuscula a minuscula \n", tolower(p1));
     else
         printf("%c es una letra minuscula \n", p1);
else
    printf("%c no es una letra \n", p1);
}

#include <stdio.h>

void main(void)
{
char *cad0 = "Buenos Dias";
char cad1[20] = "Hola";
char cad2[] = "Mexico";
char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'};
char cad4[20], cad5[20], cad6[20];

printf("\nLa cadena cad0 es: ");
puts(cad0);
printf("\nLa cadena cad1 es: ");
printf("%c", cad1);
printf("\nLa cadena cad2 es: ");
puts(cad2);
printf("\nLa cadena cad3 es: ");
puts(cad3);

printf("\nIngrese una linea de texto ―se lee con gets―: \n");
gets(cad4);
printf("\nLa cadena cad4 es: ");
puts8(cad4);
fflush(stdin);

printf("\nIngrese una linea de texto ―se lee con scanf―: \n");
scanf("%s", cad5);

char p;
int i = 0;

while ((p = getchar())!= '\n')
    cad6[i++] = p;
 cad6[i] = '\0';
printf("\nLa cadena cad6 es: ");
puts(cad6);
}

#include <stdio.h>

void main(void)
{
char *cad0;
cad0 = "Argentina";
puts(cad0);

cad0 = "Brasil";
puts(cad0);

char *cad1;
gets(*cad1);

char *cad1 = "";
gets(cad1);

char cad1[];

char cad2[20] = "Mexico";
puts(cad2);
gets(cad2);
puts(cad2);
cad2[10] = "Guatemala";
}

Ejercicios Capitulo 8.

#include <stdio.h>
#include <string.h>

struct alumno
{
int matricula;
char nombre[20];
char carrera[20];
float promedio;
char direccion[20];
};

void main(void)
{

char nom[20], car[20], dir[20];
int mat;
float pro;
printf("\nIngrese la matricula del alumno 2: ");
scanf("%d", &a2.matricula);
fflush(stdin);}
printf("Ingrese el nombre de alumno 2:");
gets(a2.nombre);
printf("Ingrese la carrera del alumno 2: ");
gets(a2.carrera);
printf("Ingrese el promedio del alumno 2: ");
scanf("%f", &a2.promedio);
fflush(stdin);
printf("Ingrese la direccion del alumno 2: ");
gets(a2.direccion);

printf("\nIngrese la matricula del alumno 3: ");
scanf("%d", &mat);
a3.matricula = mat;
fflush(stdin);
printf("Ingrese el nombre del alumno 3: ");
gets(nom);
strcpy(a3.nombre, nom);
printf("Ingrese la carrera del alumno 3: ");
gets(car);
strcpy(a3.carrera, car);
printf("Ingrese el promedio del alumno 3: ");
scanf("%f", &pro);
a3.promedio = pro;
fflush(stdin);
printf("Ingrese la direccion del alumno 3: ");
gets(dir);
strcpy(a3.direccion, dir);

printf("\nDatos del alumno 1\n");
printf("%d\n", a1.matricula);
puts(a1.nombre);
puts(a1.carrera);
printf("%.2f\n", a1.promedio);
puts(a1.direccion);

printf("\nDatos del alumno 2\n");
printf("%d\n", a2.matricula);
puts(a2.nombre);
puts(a2.carrera);
printf("%.2f\n", a2.promedio);
puts(a2.direccion);

printf("\nDatos del alumno 3\n");
printf("%d \t %s \t %s \t %.2f \t %s", a3.matricula, a3.nombre, a3.carrera, a3.promedio, a3.direccion);
}

#include <string.h>

struct alumno
{
int matricula;
char nombre[20];
char carrera[20];
float promedio;
char direccion[20];
};

void Lectura(struct alumno *);

void main(void)
{
struct alumno a0 = {120, "Maria", "Contabilidad", 8.9, "Queretaro"};
struct alumno *a3, *a4, *a5, a6;

a3 = &a0;

a4 = new (struct alumno);
printf("\nIngrese la matricula del alumno 4: ");
scanf("%d", &(*a4).matricula);
fflush(stdin);
printf("Ingrese el nombre del alumno 4: ");
gets(a4->nombre);
printf("Ingrese la carrera del alumno 4: ");
gets((*a4).carrera);
printf("Ingrese promedio del alumno 4: ");
scanf("%f", &a4->promedio);
fflush(stdin);
printf("Ingrese la direccion del alumno 4: ");
gets(a4->direccion);

a5 = new (struct alumno);
Lectura(a5);
Lectura(&a6);
printf("\nDatos del alumno 3\n");
printf("%d\t%s\t%s\t%.2f\t%s", a3->matricula, a3->nombre, a3->carrera, a3->promedio, a3->direccion);

printf("\nDatos del alumno 4\n");
printf("%d\t%s\t%s\t%.2f\t%s", a4->matricula, a4->nombre, a4->carrera, a4->promedio, a4->direccion);

printf("\nDatos del alumno 5\n");
printf("%d\t%s\t%s\t%.2f\t%s", a5->matricula, a5->nombre, a5->carrera, a5->promedio, a5->direccion);

printf("\nDatos del alumno 6\n");
printf("%d\t%s\t%s\t%.2f\t%s", a6.matricula, a6.nombre, a6.carrera, a6.promedio, a6.direccion);
}

void Lectura(struct alumno *a)
{
printf("\nIngrese la matricula del alumno: ");
scanf("%d", &(*a).matricula);
fflush(stdin);
printf("Ingrese el nombre del alumno: ");
gets(a->nombre);
fflush(stdin);
printf("Ingrese la carrera del alumno: ");
gets((*a).carrera);
printf("Ingrese el promedio del alumno: ");
scanf("%f", &a->promedio);
fflush(stdin);
printf("Ingrese la direccion del alumno: ");
gets(a->direccion);
}

#include <stdio.h>
#include <string.h>

typedef struct
{
char calle[20];
int numero;
int cp;
char localidad[20];
} domicilio;

struct empleado

{
char nombre[20];
char departamento[20];
float sueldo;
   domicilio direccion;

};

void Lectura(struct empleado *a)
{
printf("\nIngrese el nombre del empleado: ");
gets(a->nombre);
fflush(stdin);
printf("Ingrese el departamento de la empresa: ");
gets(a->departamento);
printf("Ingrese el sueldo del empleado: ");
scanf("%f", &a->sueldo);
fflush(stdin);
printf("―-Ingrese la direccion del empleado:―-");
printf("\n\tCalle: ");
gets(a->direccion.calle);
printf("\tNumero: ");
scanf("%d", &a->direccion.numero);
printf("\tCodigo Postal: ");
scanf("%d", &a->direccion.cp);
fflush(stdin);
printf("\tLocalidad: ");
gets(a->direccion.localidad);
}

void main(void)
{
struct empleado e0 = {"Arturo", "Compras", 15500.75, "San Jeronimo", 120, 3490, "Toluca"};
struct empleado *e1, *e2, *e3, *e4;

e1 = new (struct empleado);
printf("\nIngrese el nombre del empleado 1: ");
scanf("%s", &(*e1).nombre);
fflush(stdin);
printf("Ingrese el departamento de la empresa: ");
gets(e1->departamento);
printf("Ingrese el sueldo del empleado: ");
scanf("%f", &e1->sueldo);
printf("―-Ingrese la direccion del empleado―-");
printf("\n\tCalle: ");
fflush(stdin);
gets(e1->direccion, calle);
printf("\tNumero: ");
scanf("%d", &e1,->direccion.numero);
printf("\tCodigo Postal: ");
scanf("%d", &e1,->direccion.cp);
printf("\tLocalidad: ");
fflush(stdin);
gets(e1->direccion.localidad);

printf("\nIngrese el nombre del empleado 3: ");
scanf("%s", &e3.nombre);
fflush(stdin);
printf("Ingrese el departamento de la empresa: ");
gets(e3.departamento);
printf("Ingrese el sueldo del empleado: ");
scanf("%f", &e3.sueldo);
printf("―-Ingrese la direccion del empleado:―-");
printf("\n\tCalle: ");
fflush(stdio);
gets(e3.direccion.calle);
printf("\tNumero: ");}
scanf("%d", &e3.direccion.numero);
printf("\tCodigo Postal: ");
scanf("%d", &e3.direccion.cp);
printf("\tLocalidad: ");
fflush(stdin);
gets(e3.direccion.localidad);

e2 = new (struct empleado);
Lectura(e2);

Lectura(&e4);

printf("\nDatos del empleado 1\n");
printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s",     e1->nombre,      e1->departamento,      e1>sueldo,
       e1->direccion.calle,      e1->direccion.numero,      e1->direccion.cp,      e1->direccion.localidad);

printf("\nDatos del empleado 4n");
printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s", e4.nombre, e4.departamento, e4.sueldo,
       e4.direccion.calle, e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad);
}








