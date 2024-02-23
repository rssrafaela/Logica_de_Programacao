/*
	Funções com passagem de parâmetros/argumentos
*/

#include<stdio.h>

float calcularMedia(float n1, float n2){
	
	float media = (n1+n2)/ 2;
	
	return media;		
}

main(){
				
	printf("\nMedia: %.1f",calcularMedia(2,5));
	printf("\nMedia: %.1f",calcularMedia(8,5));
	printf("\nMedia: %.1f",calcularMedia(6,1));
	
}
