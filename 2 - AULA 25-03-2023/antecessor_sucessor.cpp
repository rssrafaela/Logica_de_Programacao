/*	
	Fa�a um programa que leia um numero inteiro e imprima seu antecessor e seu sucessor
	
	Ex:
	Entrada -> 10
	Sa�da -> 09 e 11
*/

#include<stdio.h>

main(){
	
	int entrada, antecessor, sucessor;
	
	printf("Informe o valor de entrada: ");
	scanf("%d", &entrada);
	
	//Ao inv�s de declarar duas v�ri�veis: Segue a 2� forma que poderia ser realizada: 
	//Poderia colocar direto printf("\nO antecessor e %d e o sucessor e: %d", numero-1, numero +1);
	
	antecessor = entrada-1;
	sucessor = entrada+1;
	
	printf("\nO antecessor e: %d", antecessor); 
	printf("\nO sucessor e: %d", sucessor);
	
}
