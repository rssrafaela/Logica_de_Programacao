/*
	Fa�a um programa que calcule o IMC
	
	Fun��o de entrada
	Fun��o para calcular e retornar o IMC (imc = peso / (altura*altura)
	Fun��o de sa�da com o valor
	
	INDENTA��O = SEPARA��O DAS LINHAS
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
