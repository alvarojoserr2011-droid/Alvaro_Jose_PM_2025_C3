
    #include <stdio.h>
    void main(void)
    {
    float PRO;
    printf("ingrese el promedio del alumno: ");
    scanf("%f", &PRO);
    if (PRO >= 6)
        printf("\nAprobado");
    }

#include <stdio.h>
void main(void)
{
float PRE, NPR;
printf("ingrese el precio del producto: ");
scanf("%f, &PRE);
if (PRE > 1500)
    NPR = PRE * 1.11;
    printf("\nNuevo precio: %7.2f",NPR);

}

void main(void)
{float PRO;
printf("Ingrese el promedio del alumno: ");
scanf("%f", &PRO);
if (PRO >=6.0)
    printf("\nAprobado");
    else
        printf("\nReprobado");
}

void main (void)
{float PRE, NPR;
printf("Ingrese el precio del producto: ");
scanf("%f", &PRE);
if (PRE < 1500)
    NPR = PRE * 1.11;
    else
        NPR = PRE * 1.08;
    printf("\nNuevo precio del producto: %8.2f", NPR);

}

#include <stdio.h>
#include <math.h>
void main(void)
{int OP, T;
float RES;
printf("Ingrese la opcion de calculo y el valor entero: ");
scanf("%d %d", &OP, &T);
switch(OP)
{case 1: RES = T / 5;
break;
case 2: RES = pow(T,T);
break;
case 3:
    case 4: RES = 6 * T/2;
    break;
    default: RES = 1;
    break;
    printf("\nResultado:  %7.2f", RES);

}

void main(void)
{float SAL;
int NIV;
printf("Ingrese el nivel academico del profesor:  ");
scanf("%d", &NIV);
printf("Ingrese el salario:  ");
scanf("%f", &SAL);
switch(NIV)
printf("ingrese el salario:  ");
scanf("%f", &SAL);
switch(NIV)
{
case 1: SAL = SAL * 1.0035; break;
case 2: SAL = SAL * 1.0041; break;
case 3: SAL = SAL * 1.0048; break;
case 4: SAL = SAL * 1.0053; break;
}
printf("\n\nNivel: %d \tNuevo salario: %8.2f",NIV, SAL);
}

void main(void)
{float P, S, R;
if (P > S)
    if (P > R)
        if (S > R)
        printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);
    else
        printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S);
    else
        printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2F", R, P, S);
    else
        if (S > R)
        if (P > R)
        printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);
    else
        printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P);
    else
        printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P);
}

#include <stdio.h>
void main(void)
{int I;
float SAL, NOM;
NOM = 0;
for (I=1; I<=15; I++)
    printf("\Ingrese el salario del profesor%d:\t", I);
scanf("%f", &SAL);
NOM = NOM + SAL;
}
 printf("\nEl total de la nomina es: %.2f", NOM);

}

void main(void)
{int I, N, NUM, SUM;
SUM = 0;
printf("Ingrese el numero de datos:\t");
scanf("%d", &N);
for (I=1; I<=N; I++)
    printf("Ingrese el dato del numero %d:\t", I);
    scanf("%d", &NUM);
    if (NUM > 0)
        SUM = SUM + NUM;
    }
    printf("\nLa suma de los numeros positivos es: %d", SUM);

}

void main(void)
{
float PAG, SPA;
SPA = 0;
printf("Ingrese el primer pago:\t");
scanf("%f", &PAG);
while (PAG)
 {
     SPA = SPA + PAG;
     printf("Ingrese el siguiente pago:\t ");
     scanf("%f", &PAG);
}
 printf("\nEL total de pagos del mes es: %.2f", SPA);

}

#include <stdio.h>
#include <math.h>
void main(void)
{
int NUM;
long CUA, SUC = 0;
printf("\n164-0-:\t");
scanf("%d", &NUM);
while (NUM)
{
    CUA = pow (NUM, 2);
    printf("%d al cubo es %ld", NUM, CUA);
    SUC = SUC + CUA;
    printf("\n164-0-:\t");
    scanf("%d", &NUM);
}
printf("\nLa suma de los cuadrados es %ld", SUC);
}

#include <stdio.h>
void main(void)
{
float PAG, SPA = 0;
printf("4000:\t");
scanf("%f", &PAG);
do
    SPA = + PAG;
    printf("5000:\t");
    scanf("%f", &PAG);
}
while (PAG);
printf("\nEl total de pagos del mes es: %.2f", SPA);\\\
}

