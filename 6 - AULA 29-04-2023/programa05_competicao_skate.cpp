/*
Em uma competi��o de Skate � necess�rio saber a m�dia de pontos que um competidor teve. 

USANDO FOR
Fa�a um programa que leia 5 notas de 0 a 10.
	-O programa dever� imprimir as 5 notas digitadas.
	-O programa dever� calcular a media descartando a menor nota
	-O programa dever� imprimir a nota descartada

(A menor nota deve ser descartada antes do c�lculo da m�dia).
*/

#include<stdio.h>

main(){
	
	float notas[5], soma, media, menor=10;
	
	for(int i=0; i < 5; i++){		
		printf("Informe uma nota: ");
		scanf("%f", &notas[i]);
		
		soma = soma+notas[i]; //somando cada nota digitada
		
		if(notas[i] < menor){
			menor = notas[i];
		}
		
	} //fim do loop de entrada
	
		
	for(int i=0; i < 5; i++){	
		printf("\nNota digitada: %.1f", notas[i]);
	}
	
	media = (soma - menor) / 4;
	
	printf("\n----------------------------\n");
	printf("\nNota descartada: %.1f", menor);
	printf("\nMedia final: %.1f", media);	
}


