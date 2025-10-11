#include <stdio.h>
void main(void)
{
int I, NUM CUE = 0;
int ARRE[100];
for (I=0; I<100; I++)
{
printf("Ingrese el elemento %d del arreglo: ", I+1);
scanf("%d", &ARRE[I]);
}
printf("\n\nIngrese el numero que se va abuscar en el arreglo: ");
scanf("%d", &NUM);
for (I=0; I<100; I++)
    if (ARRE[I] == NUM)
    CUE++;
printf("\n\nEl %d se encuentra %d veces en el arreglo", NUM, CUE);
}

#include <stdio.h>
void main(void)
{
int ELE[5] = {0};
int I, VOT;
printf("Ingresa el primer voto (0 - para terminar): ");
scanf("%d", &VOT);
while (VOT)
{
    if ((VOT > 0) && (VOT < 6))
        ELE[VOT-1]++;
    else
        printf("\nEl voto ingresado es incorrecto.\n");
    printf("Ingresa el siguiente voto (0 - para terminar): ");
    scanf("%d", &VOT);
}
printf("\n\nResultados de la Eleccion\n");
for (I = 0; I <= 4; I++)
    printf("\nCandidato %d: %d", I+1, ELE[I]);
}


#include <stdio.h>
void main(void)
{
int X = 3, Y = 7, Z[5] = {2, 4, 6, 8, 10};
printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[3] = %d \t Z[4]
       Z[0], Z[1], Z[2], Z[3], Z[4],);
int *IX;
IX = &X;
Y = *IX;
*IX = 1;
printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[2], Z[3], Z[4]);
IX = &Z[2];
Y = *IX;
*IX = 15;
printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
X = *IX + 5;
*IX = *IX - 5;
printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
++*IX;
*IX += 1;
printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
X = *(IX + 1);
Y = *IX;
printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
IX = IX + 1;
Y = *IX;
printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
IX = IX + 4;
printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
IX = &X;
IX = IX + 1;
X = *IX;
printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
}

#include <stdio.h>
const int TAM = 10;
void Lectura(int [][TAM], int);
void Imprime(int [][TAM], int);
void main(void)
{
int MAT[TAM][TAM];
Lectura(MAT, TAM);
Imprime(MAT, TAM);
}

void Lectura(int A[][TAM], int F)
{
int I, J;
for (I=0; I<F; I++)
    for (J=0; J<F; J++)
    {
         printf("Ingrese el elemento %d %d: ", I+1, J+1);
         scanf("%d", &A[I][J]);
    }
}
void Imprime(int A[][TAM], int F)
{
int I, J;
for (I=0; I<F; I++)
    for (J=0; J<TAM; J++)
        if (I == J)
        printf("\nDiagonal %d %d: %d ", I, J, A[I][J]);
}
