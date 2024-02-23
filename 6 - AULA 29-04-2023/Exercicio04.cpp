/*
Exercício 4:

Em uma competição de Skate é necessário saber a média de pontos que um competidor teve. 

Faça um programa que leia 5 notas de 0 a 10 e imprima a média 
(A menor nota deve ser descartada antes do cálculo da média).
*/

#include<stdio.h>

main(){
	
	float nota, media, total, menor=10;
	int contador=1;
	
	while(contador <= 5){
		
		printf("Informe a %da nota: ", contador);
		scanf("%f", &nota);
		
		total = total+nota; //acumulando o somatório das notas
		
		if(nota < menor){
			menor = nota;
		}
						
		contador++;
	}
	
	media = (total-menor) / 4;
	
	printf("\nNota descartada: %.1f\n", menor);
	printf("\nMedia final: %.2f\n", media);	
}
