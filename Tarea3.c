#include <stdio.h>
int cubo(void);
int I;
void main(void)
{
int CUB;
for (I = 1; I <= 10; I++)
    CUB = cubo();
    printf("\nEl cubo de %d es:  %d", I, CUB);
}
}
int cubo(void)
{
return (I*I*I);
}
void main(void)
{
int I;
for (I = 1; I <= 3; I++)
    f1();
}
void f1(void)
{
    int K = 2;
    K += K;
    printf("\n\nEl valor de la variable local es: %d", K);
    ::K = ::K + K;
    printf("\nEl valor de la variable global es: %d", ::K);
}

#include <stdio.h>
int f1(void);
int f2(void);
int f3(void);
int f4(void);

int K = 3;

void main(void)
{
int I;
for (I = 1; I <= 3; I++)
 {
    printf("\nEl resultado de la funcion f1 es: %d", f1());
    printf("\nEl resultado de la funcion f2 es: %d", f2());
    printf("\nEl resultado de la funcion f3 es: %d", f3());
    printf("\nEl resultado de la funcion f4 es: %d", f4());
}
}

int f1(void)
{K += K;
return (K);
}

int f2(void)
{
int K = 1;
K++;
return (K);
}

int f3(void)
{
static int K = 8;
K += 2;
return (K);
}

int f4(void)
{
int K = 5;
K = K + ::K;
return (K);
}

#include <stdio.h>
void main(void)
{
int I;
for (I = 1; I <= 10; I++)
    printf("\nEl cubo de I es:%d", cubo(I));

}

int cubo(int K)
{
return (K*K*K);
}

#include <stdio.h>
void main(void)
{
int I, K = 4;
for (I = 1; I <= 3; I++)
{
    printf("\n\nValor de K antes de llamar a la funcion: %d", ++K);
    printf("\nValor de K despues de llamar a la funcion: %d", f1(&K));
}
}

void f1(int *R)
{
*R += *R;
}

#include <stdio.h>
void main(void)
{
int I, K = 4;
for (I = 1; I <= 3; I++)
{
    printf("\n\nValor de K antes de llamar a la funcion:   %d", ++K);
    printf("\nValor de K despues de llamar a la funcion: %d", f1(K));

}
{
int f1(int R)
}
R += R;
return (R);
}
