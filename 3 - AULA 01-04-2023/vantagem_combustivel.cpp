/*
	Exercício 3 - Etanol x Gasolina:
O cálculo básico para se descobrir se o etanol  é vantajoso ou não em relação à gasolina é simples. 

Basta dividir o preço do litro do etanol pelo da gasolina. 
Se o resultado for inferior a 0.7, use álcool. Se for maior que 0.7, então abasteça com gasolina.

Escreva um programa que receba o valor do litro do etanol e da gasolina e informe qual opção é a mais vantajosa.

*/

#include<stdio.h>

main(){
	
	float etanol, gasolina;
	
	printf("\nDigite o valor do litro de etanol: ");
	scanf("%f", &etanol);
	
	printf("\nDigite o valor do litro da gasolina: ");
	scanf("%f", &gasolina);
	
	if(etanol/gasolina < 0.7){
		printf("\nAbasteca com alcool");
	}
	else{
		printf("\nAbasteca com gasolina");
	}
}

/* CORREÇÃO DO PROFESSOR:

#include<stdio.h>

main(){
	float etanol, gasolina;
	
	printf("Informe o preco do Etanol: ");
	scanf("%f", &etanol);
	
	printf("Informe o preco do Gasolina: ");
	scanf("%f", &gasolina);
		
	
	if(etanol / gasolina < 0.7){
		printf("Abasteca com Etanol!");
	}else{
		printf("Abasteca com Gasolina!");
	}
	
}


*/
