/*
	Faça um programa que receba o valor de um produto e a quantidade em estoque deste produto
	A saída deverá ser o valor total em estoque
*/

// A palavra sempre começa com letra minúscula 

#include<stdio.h>

main(){
	
	float valor, quantidade, total; //Caso queira usar letra maiuscula, usar o padrão camelCase, exempo = valorProduto
	
	printf("Informe o valor do produto: ");
	scanf("%f", &valor); // Esse & é só quando for mandar um valor para variável
	
	printf("Informe a quantidade em estoque: ");
	scanf("%f", &quantidade);
	
	total = valor*quantidade;
	
	printf("O valor total em estoque e: %f", total);
		
}
