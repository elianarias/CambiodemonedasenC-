#include <stdio.h>
#include <stdlib.h>

int main(){
	int opc;
	int pesoarg=0;
    int divisa=0;
	int monedas=0;
	int x=0;
	int c100=0,c10=0,c20=0,c5=0,c2=0,c1=0;

	
	printf("\n CAMBIO DE MONEDA  \n");
	printf("\n 1- EURO  \n");
	printf("\n 2- DOLAR \n");
	printf("\n 3- PESO MEXICANO \n");
	printf("\n 4- PESO CHILENO \n");
	printf("\n 5- REAL \n");
	printf(" \n Selecciona un tipo de cambio \n");
	scanf("%d", &opc);
	
	
	//tipos de cambio según la selección
	switch(opc){
		case 1:
			printf("\n Ingrese el monto a cambiar expresado en pesos argentinos \n");
		    scanf("%d", &pesoarg);
		    printf("\n Ingrese el precio actual de cambio del Euro: \n");
		    scanf("%d", &divisa);
		    x= pesoarg / divisa;
		    printf("El cambio es  %d ", x);
          
            while(x>=100){
            x=x-100;
            c100++;
             }
            printf("\n\n Se entregan %d billetes de 100 euros ",c100);
            while(x>=10){
            x=x-10;
            c10++;
            }
            printf("\n Se entregan %d billetes de 10 euros ",c10);
            while(x>=5){
            x=x-5;
            c5++;
            }
            printf("\n Se entregan %d billetes de 5 euros",c5);
            while(x>=1){
            x=x-1;
            c1++;
            }
           printf("\n Se entregan %d monedas de 1 euro",c1);
            
		    break;
		    
		case 2:
			printf("\n Ingrese el monto a cambiar expresado en pesos argentinos \n");
		    scanf("%d", &pesoarg);
		    printf("\n Ingrese el precio actual de cambio del Dolar: \n");
		    scanf("%d", &divisa);
		    x= pesoarg / divisa;
		    printf("El cambio es  %d ", x);
		   
            while(x>=100){
            x=x-100;
            c100++;
            }
            printf("\n\n Se entregan %d billetes de 100 dolares",c100);
            while(x>=20){
            x=x-20;
            c20++;
            }
            printf("\n Se entregan %d billetes de 20 dolares ",c20);
            while(x>=5){
            x=x-5;
            c5++;
             }
            printf("\n Se entregan %d billetes de 5 dolares",c5);
            while(x>=1){
            x=x-1;
            c1++;
            }
            printf("\n Se entregan %d monedas de 1 dolar",c1);

			break;
			
		case 3:
			printf("\n Ingrese el monto a cambiar expresado en pesos argentinos \n");
		    scanf("%d", &pesoarg);
		    printf("\n Ingrese el precio actual de cambio del Peso Mex: \n");
		    scanf("%d", &divisa);
		    x= pesoarg / divisa;
		    printf("El cambio es  %d ", x);
			break;
		
            while(x>=100){
            x=x-100;
            c100++;
            }
            printf("\n\n Se entregan %d billetes de 100 pesos mexicanos ",c100);
            while(x>=10){
            x=x-10;
            c10++;
            }
            printf("\n Se entregan %d billetes de 10 pesos  mexicanos ",c10);
            while(x>=5){
            x=x-5;
            c5++;
            }
            printf("\n Se entregan %d billetes de 5 pesos mexicanos",c5); 
            while(x>=1){
            x=x-1;
            c1++;
            }
            printf("\n Se entregan %d monedas de 1 peso mexicano ",c1);
			
		case 4:
		  	printf("\n Ingrese el monto a cambiar expresado en pesos argentinos \n");
		    scanf("%d", &pesoarg);
		    printf("\n Ingrese el precio actual de cambio del Peso Chileno : \n");
		    scanf("%d", &divisa);
		    x= pesoarg / divisa;
		    printf("El cambio es  %d ", x);
		    
            while(x>=100){
            x=x-100;
            c100++;
            }
            printf("\n\n Se entregan %d billetes de 100 pesos chilenos ",c100);
            while(x>=10){
            x=x-10;
            c10++;
            }
            printf("\n Se entregan %d billetes de 10 pesos chilenos ",c10);
            while(x>2){
            x=x-2;
            c2++;
            }
            printf("\n Se entregan %d billetes de 2 pesos chilenos",c2);
            while(x>=1){
            x=x-1;
            c1++;
           }
           printf("\n Se entregan %d monedas de 1 peso chileno ",c1);
		    break;
		    
		case 5:
		  	printf("\n Ingrese el monto a cambiar expresado en pesos argentinos \n");
		    scanf("%d", &pesoarg);
		    printf("\n Ingrese el precio actual de cambio del Real: \n");
		    scanf("%d", &divisa);
		    x= pesoarg / divisa;
		    printf("El cambio es  %d ", x);
		    
            while(x>=100){
            x=x-100;
            c100++;
            }
            printf("\n\n Se entregan %d billetes de 100 reales ",c100);
            while(x>=10){
            x=x-10;
            c10++;
            }
            printf("\n Se entregan %d billetes de 10 reales ",c10);
            while(x>=5){
            x=x-5;
            c5++;
            }
            printf("\n Se entregan %d billetes de 5 reales",c5);
            while(x>=1){
            x=x-1;
            c1++;
            }
            printf("\n Se entregan %d monedas de 1 real",c1);
		    
		    break;
		    }}
	

	
		
	


	







