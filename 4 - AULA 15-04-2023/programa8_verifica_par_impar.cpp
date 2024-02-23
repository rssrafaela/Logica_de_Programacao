/*
	Faça um programa que receba um numero entre 0 e 100
	- Se o numero não estiver entre 0 e 100, informar que o numero é inválido
*/

#include<stdio.h>

main(){
	
	int numero, resto;
	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	
	if(numero >= 0 && numero <= 100){
		//% -> resto
		resto = numero % 2;
		
		if(resto == 0){
			printf("%d e par!", numero);
		}else{
			printf("%d e impar!", numero);
		}		
		
	}else{
		printf("Numero invalido!");
	}
	
}
