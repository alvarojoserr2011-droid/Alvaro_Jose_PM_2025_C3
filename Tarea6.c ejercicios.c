
#include <stdio.h>

void main(void)
{
char p1;
FILE *ar;
ar = fopen("arc.txt", "w");
if (ar != NULL)
{
    while ((p1=getchar()) !=  '\n')
        fputc(p1, ar);
    fclose(ar);
}
else
    printf("No se puede abrir el archivo");
}


#include <stdio.h>

void main(void)
{
char p1;
FILE *ar;
if ((ar = fopen("arc.txt", "r")) != NULL)
}

while ("!feof(ar))")
    {
      p1 = fgetc(ar);
      putchar(p1);
    }
    fclose(ar);
}
else
    printf("No se puede abrir el archivo");
}


#include <stdio.h>

void main(void)
{
char cad[50];
int res;
FILE *ar;
if ((ar = fopen("arc.txt", "w")) != NULL)

{
     printf(”\n¿Desea ingresar una cadena de caracteres?  Sí-1 No-0:”);
 scanf(”%d”, &res);
 while (res)
    {
      fflush(stdin);
      printf(”Ingrese la cadena: ”);
      gets(cad);
      fputs(cad, ar);

      printf(”\n¿Desea ingresar otra cadena de caracteres?  Sí-1  No-0:”);
      scanf(”%d”, &res);
      if (res)
       fputs(”\n”, ar);

     }
     fclose(ar);
 }
 else
 printf(”No se puede abrir el archivo”);
 }


 include <stdio.h>

void main(void)
 {
char cad[50];
FILE *ap;
if ((ap=fopen (”arc.txt”, ”r”)) != NULL)
{
 while  (!feof(ap))

  {
      fgets(cad, 50, ap);
      puts(cad);

    }
    fclose(ap);
 }
 else
    printf(”No se puede abrir el archivo”);
 }


 #include <stdio.h>

void main(void)
{
int i, j, n, mat;
float cal;
FILE *ar;
printf(”\nIngrese el número de alumnos: ”);
scanf(”%d”, &n);

if ((ar = fopen(”arc8.txt”, ”w”)) != NULL)
 {
      fprintf(ar,”%d ”, n);

     for (i=0; i<n; i++)
     {
        printf(”\nIngrese la matrícula del alumno %d: ”, i+1);
        scanf(”%d”, &mat);
        fprintf(ar,”\n%d ”, mat);
     for (j=0; j<5; j++)
     {
        printf(”\nCalificación %d: ”, j+1);
        scanf(”%f”, &cal);
        fprintf(ar,”%.2f ”, cal);

         }
   }
   fclose(ar);
 }
 else
 printf(”No se puede abrir el archivo”);
 }


 #include <stdio.h>

  vvooiidd main(vvooiidd)
 {
 int i, j, n, mat;
 float cal, pro;
 FILE *ar;
 if ((ar = fopen(”arc9.txt”, ”r”)) != NULL)
  {
 fscanf(ar, ”%d”, &n);
 for  (i = 0; i < n; i++)
 {
     fscanf(ar, ”%d”, &mat);
     printf(”%d\t”, mat);
     pro = 0;
     for (j=0; j<5; j++)
       {
           fscanf(ar, ”%f”, &cal);

            pro += cal;
       }
       printf(”\t %.2f  ”, pro / 5);

       printf(”\n”);

     }
     fclose(ar);
 }
 else
 printf(”No se puede abrir el archivo”);
 }


#include <stdio.h>

void promedio(FILE *);
void main(vvooiidd)
{
FILE *ar;
if ((ar = fopen(”arc9.txt”, ”r”)) !=  NULL)
{
 promedio(ar);

 fclose(ar);
}
else
printf(”No se puede abrir el archivo”);
}

 void promedio(FILE *ar1)
 {
 int i, j, n, mat;
 float pro, cal;
 fscanf(ar1, ”%d”, &n);
 for  (i=0; i<n; i++)
 {

 fscanf(ar1, ”%d”, &mat);
 printf(”%d\t”, mat);
 pro = 0;
 for (j = 0; j < 5; j++)
 {
 fscanf(ar1, ”%f”, &cal);
 pro += cal;
 }
 printf(”\t %.2f  ”, pro / 5);
 printf(”\n”);
 }
 }


 #include <stdio.h>

 typedef struct
{
 int matricula;
 char nombre[20];
 int carrera;
 float promedio;
 }alumno;

 void escribe(FILE *);
 void main(void)
 {
     FILE *ar;
 iiff  ((ar = fopen (”ad1.dat”, ”w”)) != NULL)
 escribe(ar);
 eellssee
 printf(”\nEl archivo no se puede abrir”);
 fclose(ar);
 }
 vvooiidd escribe(FILE *ap)

 {
 alumno alu;
 int i = 0, r;
 printf(”\n¿Desea ingresar información sobre alumnos? (Sí-1  No-0):  ”);
 scanf(”%d”, &r);
 while (r)
 {
 i++;
 printf(”Matrícula del alumno %d: ”, i);
 scanf(”%d”, &alu.matricula);
 printf(”Nombre del alumno %d: ”, i);
 fflush(stdin);
 gets(alu.nombre);
 printf(”Carrera del alumno %d: ”, i);
 scanf(”%d”, &alu.carrera);
 printf(”Promedio del alumno %d: ”, i);
 scanf(”%f”, &alu.promedio);
 fwrite(&alu, ssiizzeeooff(alumno), 1, ap);

 printf(”\n¿Desea ingresar información sobre más alumnos? (Sí-1 No-0):  ”);
 scanf(”%d”, &r);


#include <stdio.h>

 typedef struct {
 int matricula;
 char nombre[20];
 int carrera;
 float promedio;
 } alumno;
 void  lee(FILE *);
 void  main(void)
 {
 FILE *ar;
 if  ((ar = fopen (”ad1.dat”, ”r”)) != NULL)
 escribe(ar);
 else
 printf(”\nEl archivo no se puede abrir”);
 fclose(ar);
 }
 void lee(FILE *ap)

 {
 alumno alu;
 fread(&alu, sizeof(alumno), 1, ap);

 while (!feof(ap))
 {
    printf(”\nMatrícula: %d”, alu.matricula);
    printf(”\tCarrera: %d”, alu.carrera);
    printf(”\tPromedio: %f\t ”, alu.promedio);
    puts(alu.nombre);
    fread(&alu, ssiizzeeooff(alumno), 1, ap);
 }
 }


 #include <stdio.h>

 typedef struct
 {
 int matricula;
 char nombre[20];
 int carrera;
 float promedio;
 } alumno;
 void modifica(FILE *);
 void main(void)
 {
 FILE *ar;
 if ((ar = fopen (”ad1.dat”, ”r+”)) != NULL)
 modifica(ar);
 else
 printf(”\nEl archivo no se puede abrir”);
 fclose(ar);
 }

  void modifica(FILE *ap)

 {
 int d;
 alumno alu;
 printf(”\nIngrese el número de registro que desea modificar: ”);

 scanf(”%d”, &d);
 fseek(ap, (d-1)*sizeof(alumno), 0);

 fread(&alu, sizeof(alumno), 1, ap);

 printf(”\nIngrese el promedio correcto del alumno: ”);
 scanf(”%f”, &alu.promedio);
 fseek(ap, (d-1)*sizeof(alumno), 0);

 fwrite(&alu, sizeof(alumno), 1, ap);
 }


 #include <stdio.h>

 typedef struct
 int  clave;
 int departamento;
 float salario;
 float ventas[12];
 }empleado;
 void incrementa(FILE *);
 void main(void)
 {
 FILE *ar;
 if  ((ar = fopen(”ad5.dat”, ”r+”)) != NULL)

 incrementa(ar);
 else
 printf(”\nEl archivo no se puede abrir”);
 rewind(ar);

 fclose(ar);
 }
 void  incrementa(FILE *ap)
  {
 int i, j, t;
 float sum;
 empleado emple;
 t = sizeof(empleado);

 fread(&emple, sizeof(empleado), 1, ap);
 while(!feof(ap))
 {
 i = ftell(ap) / t;

 sum = 0;
 for (j=0; j<12; j++)
 sum += emple.ventas[j];
 if  (sum > 1000000)
 {
 emple.salario = emple.salario * 1.10;

 fseek(ap, (i-1)*sizeof(empleado), 0);

 fwrite(&emple, sizeof(empleado), 1, ap);
 fseek(ap, i*sizeof(empleado), 0);

 }
 fread(&emple, sizeof(empleado), 1, ap);
 }
 }












