/*
	Fa�a um programa que leia 2 numeros
	1- Calcular a soma
	2- Calcular a media dos numeros
	
	Fun��o para entrada
	Fun��o para calcular a soma
	Fun��o para calcular a media
	Fun��o para sa�da

*/

#include<stdio.h>

float n1,n2,soma,media;

void entrada(){
	
	printf("Informe um numero: ");
	scanf("%f", &n1);
	
	printf("Informe outro numero: ");
	scanf("%f", &n2);		
}

void calcularSoma(){
	soma = n1+n2;
}

void calcularMedia(){
	media = soma/2;
}

void saida(){
	printf("\nA soma dos numeros e: %.1f", soma);
	printf("\nA media dos numeros e: %.1f", media);
}

main(){
	
	entrada();
	calcularSoma();
	calcularMedia();
	saida();
}
