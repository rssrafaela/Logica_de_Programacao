/*
Exerc�cio 4 - C�lculo de aumento:
Fa�a um programa que leia o valor de um sal�rio e um percentual de aumento
Calcular e imprimir o novo valor do sal�rio

*/

#include<stdio.h>

main(){
	
	float salario, percentualAumento, novoSalario, contaPercentual;
	
	printf("\nInforme o seu salario: ");
	scanf("%f", &salario);
	
	printf("\nQual seria o percentual do aumento: ");
	scanf("%f", &percentualAumento);
	
	contaPercentual = salario * (percentualAumento / 100);
	novoSalario = salario + contaPercentual;
	printf("\nO seu novo salario e: %.2f ", novoSalario);
	
}

/* CORRE��O DO PROFESSOR:

main(){
	float salario, percentual, novoSalario, aumento;
	
	printf("Informe o valor do salario: ");
	scanf("%f", &salario);
	
	printf("Informe o percentual de aumento: ");
	scanf("%f", &percentual);
	
	aumento = (salario * percentual) / 100;
	novoSalario = salario + aumento;
	
	printf("Valor de aumento: %.2f", aumento);
	printf("\nSalario Final: %.2f", novoSalario);
	
}

*/
