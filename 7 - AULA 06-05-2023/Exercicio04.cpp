/*
Exerc�cio 4:

Em uma competi��o de Skate � necess�rio saber a m�dia de pontos que um competidor teve. 

Fa�a um programa que leia 5 notas de 0 a 10 e imprima a m�dia 
(A menor nota deve ser descartada antes do c�lculo da m�dia).
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
