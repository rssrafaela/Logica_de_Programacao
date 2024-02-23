/*
	Programa que leia um numero de forma recursiva
	1- O programa deverá interromper sua execução quando o numero digitado for ZERO
	2- Calcular a soma dos numeros
*/

#include<stdio.h>

float numero, soma;

void entradaRecursiva(){
	
	printf("Informe um numero: ");
	scanf("%f", &numero);
	
	soma = soma + numero;
	
	if(numero != 0){
		entradaRecursiva();
	}else{
		printf("A soma dos numeros e: %.2f", soma);
	}
	
}

int main(){	
	entradaRecursiva();	
	return 0;
}
