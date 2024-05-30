 #include <stdlib.h>
 #include <stdio.h>
 #include <conio.h>
 
 float area,base,altura;
 int main()
 {
    system("cls");
    printf("\n Dame el valor de la base:");
    scanf("%f",&base);
    printf("\n Dame el valor de la altura:");
    scanf("%f",&altura);
 	area=(base*altura)/2;
 	printf("\n \n El area es:%.2f\n",area);  
 	getch();
      return 0;
 }
