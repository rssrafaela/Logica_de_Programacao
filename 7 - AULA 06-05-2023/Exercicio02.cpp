/*
Exerc�cio 2
Fa�a um programa que leia 10 n�meros e informe quantos deles s�o negativos.    

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
