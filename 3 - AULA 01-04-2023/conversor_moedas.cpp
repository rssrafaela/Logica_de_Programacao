/*
	Exerc�cio 1 - Programa conversor de moedas.
Fa�a um programa que leia um valor em real e converta para D�lar e Euro.

Exemplo:
Insira um valor em Real: 100
Sa�da
D�lar: 19.57
Euro: 18.10

Obs: Definir uma vari�vel para D�lar e para Euro com seus valores fixos.

 	OBS DE ESTUDOS

	1 DOLAR = R$ 5,17 REAL
	1 EURO = R$ 5,60 REAL
		
*/ 
#include<stdio.h>

main(){
	
	float real, dolarFixo, euroFixo, dolar, euro;
	
	printf("\nDigite o valor em real: ");
	scanf("%f", &real);
	
	dolarFixo = 5.17;
	euroFixo = 5.60;
	dolar = real/dolarFixo;
	euro = real/euroFixo;
	
	printf("\nO valor em dolar e = %.2f e o valor em euro e = %.2f\n\n", dolar, euro);
		
}

/* CORRE��O DO PROFESSOR:

#include<stdio.h>

main(){
	
	float real, dolar = 5.06, euro = 5.50;
	
	printf("Informe um valor em real: ");
	scanf("%f", &real);
	
	printf("Valor em Dolar: %.2f", real/dolar);
	printf("\nValor em Euro: %.2f", real/euro);
	
}

*/
