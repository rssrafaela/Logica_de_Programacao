/*
	Fa�a um programa que receba o valor de um produto e a quantidade em estoque deste produto
	A sa�da dever� ser o valor total em estoque
*/

// A palavra sempre come�a com letra min�scula 

#include<stdio.h>

main(){
	
	float valor, quantidade, total; //Caso queira usar letra maiuscula, usar o padr�o camelCase, exempo = valorProduto
	
	printf("Informe o valor do produto: ");
	scanf("%f", &valor); // Esse & � s� quando for mandar um valor para vari�vel
	
	printf("Informe a quantidade em estoque: ");
	scanf("%f", &quantidade);
	
	total = valor*quantidade;
	
	printf("O valor total em estoque e: %f", total);
		
}
