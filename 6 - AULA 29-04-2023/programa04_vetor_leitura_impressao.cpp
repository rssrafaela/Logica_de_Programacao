/*

	Escreve um programa que leia um vetor de 7 posições
		-Imprimir os valores
*/

#include<stdio.h>

main(){
	
	int numeros[7];
	
	for(int i=0; i<7; i++){
		printf("Informe o valor da posição %d do vetor: ", i);
		scanf("%d", &numeros[i]); //guardando o valor digitado em uma das posições do vetor
		
	}
	
	for(int i=0; i<7; i++){
	printf("\nPosicao %d : %d", i, numeros[i]); 
			
}

}
