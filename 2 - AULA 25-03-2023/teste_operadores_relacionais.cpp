/*
	Operadores Relacionais
	
	= atribuição/Recebe
	== igual
	> maior
	< menor
	>= maior ou igual
	<= menor ou igual
	!= diferente
*/

#include<stdio.h>
main(){
	
	int numero = 0;
	
	if(numero == 0){
		printf("\nNumero igual a zero");
	}
	
	if(numero > 0){
		printf("\nNumero maior que zero");
	}
	
	if(numero >= 0){
		printf("\nNumero maior ou igual a zero");
	}
	
	if(numero <= 0){
		printf("\nNumero menor ou igual a zero");
	}
	
	if(numero != 0){
		printf("\nNumero diferente de zero");
	}
}
