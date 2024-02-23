/*
	Faça um programa que leia 2 numeros inteiros e verifique 
	se o primeiro é maior que o segundo 
	se o segundo é maior que o primeriro
	se os dois numeros são iguais
*/

#include<stdio.h>

main(){
	
	int n1, n2; 
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	if(n1 > n2){
		printf("%d e maior que %d", n1,n2); //printf("\nO primeiro numero digitado e maior que o segundo!");
	}
	if(n2 > n1){
		printf("%d e maior que %d", n2,n1); //printf("\nO segunda numero digitado e maior que o primeiro!");
	}
	if(n1==n2){
		printf("Numeros iguais!"); //printf("\nNumeros iguais! %d e igual a %d", n1,n2);
	}
	
	printf("\nObrigado por usar o sistema!");
}
