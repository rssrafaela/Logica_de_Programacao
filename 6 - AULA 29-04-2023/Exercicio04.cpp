/*
Exerc�cio 4:

Em uma competi��o de Skate � necess�rio saber a m�dia de pontos que um competidor teve. 

Fa�a um programa que leia 5 notas de 0 a 10 e imprima a m�dia 
(A menor nota deve ser descartada antes do c�lculo da m�dia).
*/

#include<stdio.h>

main(){
	
	float nota, media, total, menor=10;
	int contador=1;
	
	while(contador <= 5){
		
		printf("Informe a %da nota: ", contador);
		scanf("%f", &nota);
		
		total = total+nota; //acumulando o somat�rio das notas
		
		if(nota < menor){
			menor = nota;
		}
						
		contador++;
	}
	
	media = (total-menor) / 4;
	
	printf("\nNota descartada: %.1f\n", menor);
	printf("\nMedia final: %.2f\n", media);	
}
