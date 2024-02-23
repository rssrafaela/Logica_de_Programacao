/*
Exercício 4:

Em uma competição de Skate é necessário saber a média de pontos que um competidor teve. 

Faça um programa que leia 5 notas de 0 a 10 e imprima a média 
(A menor nota deve ser descartada antes do cálculo da média).
*/

#include<stdio.h>

main(){
	
	float nota[5], media, menor = 10, total;
	
	for (int i = 0; i < 5 ; i++){
		
		printf("Digite uma nota: ");
		scanf("%f", &nota[i]);
		
			total = total+nota[i];
			
			if(nota[i] < menor){
			menor = nota[i];
		}
	}
	media = (total-menor) / 4;
	
	printf("\nNota descartada: %.1f\n", menor);
	printf("\nMedia final: %.2f\n", media);	
	
	
	
}
