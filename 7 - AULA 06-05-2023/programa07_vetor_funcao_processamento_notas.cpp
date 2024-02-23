/*
	Fa�a um programa que receba 7 notas (usando VETOR e fun��o entrada)
	- Fun��o para retornar a MAIOR nota
	- Fun��o para tornar a MENOR nota
	- Fun��o para retornar a media, descartando a menor e a maior
	- Fun��o de sa�da para imprimir as notas descartadas e a media final
*/

#include<stdio.h>

	float nota[7],soma;

	void entrada(){
	
		for (int i = 0; i < 7 ; i++){
	
			printf("Informe a %da nota: ", i+1);
			scanf("%f", &nota[i]);
			
			soma = soma+nota[i];

		}
	}

	float retornarMaior(){
		float maior = 0;
		
		for (int i = 0; i < 7 ; i++){
			if(nota[i] > maior){
					maior = nota[i];	
		
			}
		}
	
	return maior;
	}

	float retornarMenor(){
	 	float menor = 10;
	 	
		for (int i = 0; i < 7 ; i++){
			if(nota[i] < menor){
				menor = nota[i];	
		
			}
		}
	
	return menor;
	}

	float retornarMedia(){
		float media;
	
		media = (soma - retornarMenor() - retornarMaior()) / 5;

	
	return media;
	
	}

	void saida(){

		printf("\n----------------------------\n");
		printf("\nMaior nota descartada: %.1f", retornarMaior());
		printf("\nMenor nota descartada: %.1f", retornarMenor());
		printf("\nMedia final: %.1f", retornarMedia());	
	}

	main(){
		entrada();
		saida();
	}
