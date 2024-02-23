/*
Exercício 1
Faça um programa que leia 10 números inteiros e exiba a quantidade de números pares e ímpares

*/

#include<stdio.h>

main(){
	
	int numero, qtdPar=0, qtdImpar=0, contador=1;
	
	while(contador <= 10){
		
		printf("Informe um numero: ");
		scanf("%d", &numero);
	
		if(numero % 2 == 0){		
			qtdPar = qtdPar+1;		
		}else{
			qtdImpar = qtdImpar+1;		
		}
		
		contador=contador+1;
	}
				
	printf("Total de Pares: %d", qtdPar);
	printf("\nTotal de Impares: %d", qtdImpar);
}
