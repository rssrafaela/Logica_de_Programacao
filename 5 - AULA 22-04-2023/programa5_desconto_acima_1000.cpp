/*
	Faça um programa que receba o valor de 5 produtos. 
		Se o total for maior que 1000, aplicar 10% de desconto
*/

#include<stdio.h>

main(){
	
		
	float valorProduto, total, desconto;
	int contador = 0;
		
	while(contador < 5){
		
	printf("Informe o valor do produto: ");	
	scanf("%f", &valorProduto);
	
	total = total + valorProduto; 
	contador = contador+1;
	
	}
	
	if(total > 1000){
	desconto = total * 0.1;
		printf("\nTotal: %.2f", total - desconto);
	}	
	
}
