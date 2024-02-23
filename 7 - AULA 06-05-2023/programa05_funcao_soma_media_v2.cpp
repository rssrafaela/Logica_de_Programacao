/*
	Faça um programa que leia 2 numeros
	1- Calcular a soma
	2- Calcular a media dos numeros
	
	Função para entrada
	Função para calcular a soma (return)
	Função para calcular a media (return)
	Função para saída

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

main(){ //o main por ser uma função int ele requer um return 0; no final
	entrada();
	saida();
}
