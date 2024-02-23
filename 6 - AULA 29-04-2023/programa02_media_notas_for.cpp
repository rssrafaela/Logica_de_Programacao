/*
	Faça um programa que leia 4 notas e calcule a media usando o FOR
*/

#include<stdio.h>
main(){
	
	float nota, media, soma;
	
	for(int i=1; i<=4; i++){ // i = iterator (ideia de pular para o próximo)
		
		printf("Informe %da nota: ", i);
		scanf("%f", &nota);
		
		soma = soma+nota;
	}
	
	media = soma/4;
	printf("Media das notas: %.1f", media);
	
}
