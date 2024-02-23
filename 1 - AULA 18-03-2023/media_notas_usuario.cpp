/*Faça um programa que Leia 2 notas e imprima a media*/

#include<stdio.h>

main(){
	
	float n1, n2, soma, media;
	
	printf("Informe a primeira nota: ");
	scanf("%f", &n1); //&n1 é o que chamamos de ponteiro, o espaço da memória n1 receberá o que for digitado.
	
	printf("Informe a segunda nota: ");
	scanf("%f", &n2); //&n2 é o que chamamos de ponteiro, o espaço da memória n2 receberá o que for digitado.
	
	soma = n1+n2;
	media = soma/2;
	
	// Ou declarar somente a variável media e colocar somente = (n1+n2)/2;
	
	printf("\nA media e: %.1f", media);
}

