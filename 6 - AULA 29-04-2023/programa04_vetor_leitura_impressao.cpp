/*

	Escreve um programa que leia um vetor de 7 posi��es
		-Imprimir os valores
*/

#include<stdio.h>

main(){
	
	int numeros[7];
	
	for(int i=0; i<7; i++){
		printf("Informe o valor da posi��o %d do vetor: ", i);
		scanf("%d", &numeros[i]); //guardando o valor digitado em uma das posi��es do vetor
		
	}
	
	for(int i=0; i<7; i++){
	printf("\nPosicao %d : %d", i, numeros[i]); 
			
}

}
