/*
	Faça um programa que receba o valor de 5 produtos e exiba o total da compra
*/

#include<stdio.h>

main(){
	
	float valorProduto, total;
	int contador = 0;
		
	while(contador < 5){
		
	printf("Informe o valor do produto: ");	
	scanf("%f", &valorProduto);

	total = total + valorProduto; // total recebe 0 + 10 (ou o valor do produto que vc digitar)
								// Depois o total recebe 10 + o outro valor do produto que vc digitar) e assim repetirá o processo 5 vezes.

	contador = contador+1;

	}
	
	printf("\nTotal: %.2f", total);

}
