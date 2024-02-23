/*SWITCH -> Estrura de condição alternativa ao IF/ELSE*/

#include<stdio.h>
main(){	
	int numero = 6;
	
	switch(numero){
		case 1:
			printf("Numero igual a 1");
			break;
		
		case 2:
			printf("Numero igual a 2");
			break;
			
		case 3:
			printf("Numero igual a 3");	
			break;		
		
		case 4:
			printf("Numero igual a 4");	
			break;
		
		case 5:
			printf("Numero igual a 5");	
			break;	
			
		//Equivalente ao else
		default :
			printf("Numero invalido!");
			break;
	}
	
}
