 #include <stdlib.h>
 #include <stdio.h>
 #include <conio.h> 
float area,baseM,basem,altura; 
int main()
 {
    system("cls");
    printf("\n Dame la base menor");
    scanf("%f",&basem); 
    printf("\n\n Dame la base mayor");
    scanf("%f",&baseM); 
    printf("\n\n Dame la altura");
    scanf("%f",&altura); 
    area=(baseM+basem)*altura/2; 
    printf("\n\n\n\t El area %.2f\n",area); 
 	//la instruccion \t significa tabular 
 	getch();
    return 0;
 } 
