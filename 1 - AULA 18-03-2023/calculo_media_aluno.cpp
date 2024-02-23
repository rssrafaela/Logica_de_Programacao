/*Faça um programa que receba 2 notas e imprima a media*/

#include<stdio.h>

main(){
	
	float n1, n2, soma, media;
	
	n1 = 10;
	n2 = 5;
	
	soma = n1+n2;
	media = soma/2;
	
	// Ou colocar somente a variável media = (n1+n2)/2;
	
	printf("\nA media e: %.1f", media);
}


