/*
	Fa�a um programa que leia 2 numeros
	1- Calcular a soma
	2- Calcular a media dos numeros
	
	Fun��o para entrada
	Fun��o para calcular a soma (return)
	Fun��o para calcular a media (return)
	Fun��o para sa�da

*/

#include<stdio.h>

float n1,n2;

void entrada(){
	
	printf("Informe um numero: ");
	scanf("%f", &n1);
	
	printf("Informe outro numero: ");
	scanf("%f", &n2);		
}

float calcularSoma(){
	
	float soma;
	soma = n1+n2;
	
	return soma;
}

float calcularMedia(){
	float media;
	media = calcularSoma() / 2;
	
	return media;
}

void saida(){
	printf("\nA soma dos numeros e: %.1f", calcularSoma());
	printf("\nA media dos numeros e: %.1f", calcularMedia());
}

main(){ //o main por ser uma fun��o int ele requer um return 0; no final
	entrada();
	saida();
}
