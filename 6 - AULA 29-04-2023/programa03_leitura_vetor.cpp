/*
	VETOR 
	São estruturas utilizadas para agrupar variáveis do mesmo tipo
	O vetor organiza a informção em uma dimensão
	
	Escreva um programa que leia um vetor de 3 posições
		- Imprimir os valores

*/

#include<stdio.h>
main(){
	
	int numeros[3];
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &numeros[0]);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &numeros[1]);
	
	printf("Informe o terceiro numero: ");
	scanf("%d", &numeros[2]);
	
	printf("\nPosicao 0: %d", numeros [0]);
	printf("\nPosicao 1: %d", numeros [1]);
	printf("\nPosicao 2: %d", numeros [2]);
	
}
