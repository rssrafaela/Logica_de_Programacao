/*
	Faça um programa que receba 2 notas de um aluno
	-Calcular e exibir a media
	
	Se a média for maior ou igual a 7 (Aprovado)
	Senão -> (Reprovado)
*/

#include<stdio.h>
main(){
	
	float n1, n2, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1+n2)/2;
	
	printf("A sua media e: %.2f", media);
	
	if(media >= 7){
		printf("\nVoce esta aprovado!"); //printf("Aprovado com a media %.1f",media);
	}
	else{
		printf("\nVoce esta reprovado!"); //printf("Reprovado com a media %.1f",media);
	}
	
	printf("\n\nObrigada por usar o sistema!");
}
