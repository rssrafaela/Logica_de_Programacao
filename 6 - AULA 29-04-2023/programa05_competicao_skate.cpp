/*
Em uma competição de Skate é necessário saber a média de pontos que um competidor teve. 

USANDO FOR
Faça um programa que leia 5 notas de 0 a 10.
	-O programa deverá imprimir as 5 notas digitadas.
	-O programa deverá calcular a media descartando a menor nota
	-O programa deverá imprimir a nota descartada

(A menor nota deve ser descartada antes do cálculo da média).
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


