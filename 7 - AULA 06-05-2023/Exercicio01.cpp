/*
Exercício 1
Faça um programa que leia 10 números inteiros e exiba a quantidade de números pares e ímpares
*/

#include<stdio.h>

main(){
	
	int numero[10], qtdPar=0, qtdImpar=0;
	
	for(int i=0; i < 10; i++){
		printf("Informe um numero: ");
		scanf("%d", &numero[i]);
		
		if(numero[i] % 2 == 0){		
			qtdPar++;		
		}
		else{
			qtdImpar++;		
		}	
	}
	
	printf("Total de Pares: %d", qtdPar);
	printf("\nTotal de Impares: %d", qtdImpar);
		
}
