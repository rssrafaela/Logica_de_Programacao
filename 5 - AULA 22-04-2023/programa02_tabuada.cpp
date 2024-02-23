/*
	Faça um programa que leia um numero inteiro e exiba a tabuada até 10
	Exemplo:
	Entrada: 10
	Saída:
	10x0 = 0 
	10x1 = 10
	10x2 = 20
*/



#include<stdio.h>

main(){
	
	int numero, contador=0, resultado;
	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	
	while(contador <=10){
		//printf("\ncontador: %d", contador); (só para testar se ele está contando até 10)
		
		resultado = numero*contador;
		
		//nxn=n (fórmula para ver na tela 10x0 = 0 por exemplo.)
		printf("\n%dx%d=%d", numero, contador, resultado);
		
		contador = contador+1;
	}
}
