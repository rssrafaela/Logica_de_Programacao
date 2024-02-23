/*	
	Faça um programa que leia um numero inteiro e imprima seu antecessor e seu sucessor
	
	Ex:
	Entrada -> 10
	Saída -> 09 e 11
*/

#include<stdio.h>

main(){
	
	int entrada, antecessor, sucessor;
	
	printf("Informe o valor de entrada: ");
	scanf("%d", &entrada);
	
	//Ao invés de declarar duas váriáveis: Segue a 2° forma que poderia ser realizada: 
	//Poderia colocar direto printf("\nO antecessor e %d e o sucessor e: %d", numero-1, numero +1);
	
	antecessor = entrada-1;
	sucessor = entrada+1;
	
	printf("\nO antecessor e: %d", antecessor); 
	printf("\nO sucessor e: %d", sucessor);
	
}
