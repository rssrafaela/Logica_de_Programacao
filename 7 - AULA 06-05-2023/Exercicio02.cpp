/*
Exercício 2
Faça um programa que leia 10 números e informe quantos deles são negativos.    

*/

#include<stdio.h>

main(){
	
	int numero[10], qntdNegativos=0, qntdPositivos=1;

	for (int i = 0; i < 10; i++){
		printf("Informe um numero: ");
		scanf("%d", &numero[i]);
		
		if(numero[i] < 0){
			qntdNegativos++;
		}
		else{
			qntdPositivos++;
		}
	}	
	
	printf("\nQuantidade de Negativo: %d", qntdNegativos);
	printf("\nQuantidade de Positivos: %d", qntdPositivos);
}
