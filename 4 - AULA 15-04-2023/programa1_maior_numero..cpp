/*
Fa�a um programa que leia 3 n�meros e exiba o maior deles

Ex: 
Numero:  5 
Numero: 3 
Numero: 2

Sa�da: O n�mero 5 � o maior!
*/

#include<stdio.h>

main(){
	
	int n1,n2,n3;
	
	printf("Informe o primeiro numero: ");
	scanf("%d",&n1);
	
	printf("Informe o segundo numero: ");
	scanf("%d",&n2);
	
	printf("Informe o terceiro numero: ");
	scanf("%d",&n3);
	
	if(n1 > n2 && n1 > n3){
		printf("O numero %d e o maior", n1);
	}
	
	else if(n2 > n1 && n2 > n3){
		printf("O numero %d e o maior", n2);
	}
	
	else{
		printf("O numero %d e o maior", n3);
	}
	
}
