#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int i;
float r;

int main()
{
    system("cls");
    printf("\n ingresar un numero:");
    scanf("%i", &i);
    r = sqrt(i);
    printf("\n la raíz cuadrada de %i es: %.2f", i, r);
    getch();
    return 0;
}

