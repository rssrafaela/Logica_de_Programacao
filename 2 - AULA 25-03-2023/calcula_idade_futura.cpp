/*
	Faça um programa que leia o ano de nascimento de uma pessoa
		-Informe quantos anos ela terá ao final de 2023
*/

#include<stdio.h>

main(){
	
	int anoDenascimento, idade;
	
	printf("Informe o seu ano de nascimento: ");
	scanf("%d", &anoDenascimento);
	
	idade = 2023 - anoDenascimento;
	
	printf("\nEm 2023 voce tera: %d anos", idade);
	
}
