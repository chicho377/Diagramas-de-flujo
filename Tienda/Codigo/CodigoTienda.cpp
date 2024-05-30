#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

 int num,cant,precio;
 float desc,total;
 int main()
 
 {
 	system("cls"); 
	printf("\n Cual es el número del producto que deseas ");
 	scanf("%i",&num);
 	printf("\n \n Cuantos productos llevas ");
 	scanf("%i",&cant);
 	if(num==1)
     {
      precio=100;
      desc=.05;
     }
     else if(num==2)
     {
         precio=150;
         desc=.15;
     }    
      else if(num==3)
      {
          precio=200;
          desc=.25;
      }        
      else {
              precio=0;
              desc=0;
              printf("\n \n \n El producto %i no existe",num);
            }
 	precio=precio*cant;
 	desc=precio*desc;
 	total=precio-desc;
 	printf("\n \n Importe = %i\n",precio);
 	printf("\n \n Descuento = %.2f\n",desc);
 	printf("\n \n Total = %.2f\n",total); 
	getch();
 }
