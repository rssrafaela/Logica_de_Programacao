/*
	Faça um programa que leia
	- o valor total de uma conta 
	- o valor total recebido
	E retorne o troco a ser devolvido
*/

#include<stdio.h>
 
main(){
	
	float valorTotal, valorRecebido, troco;
	
	printf("Informe o valor total da conta: ");
	scanf("%f", &valorTotal);
	
	printf("Informe o valor recebido: ");
	scanf("%f", &valorRecebido);
	
	troco = valorRecebido - valorTotal;
	
	printf("\nO troco e: %.1f", troco);
}
