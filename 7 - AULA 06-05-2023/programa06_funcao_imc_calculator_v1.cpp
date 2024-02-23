/*
	Faça um programa que calcule o IMC
	
	Função de entrada
	Função para calcular e retornar o IMC (imc = peso / (altura*altura)
	Função de saída com o valor
	
	INDENTAÇÃO = SEPARAÇÃO DAS LINHAS
*/

#include<stdio.h>

float peso,altura;

void entrada(){
	
	printf("Informe o seu peso: ");
	scanf("%f", &peso);
	
	printf("Informe a sua altura: ");
	scanf("%f", &altura);	
}

float calcularImc(){
	float imc;
	imc = peso / (altura*altura);
	
	return imc;
}

void saida(){
	printf("\nO IMC e: %.1f", calcularImc());
}

main(){
	entrada();
	saida();
}
