/*
	Matriz
	É uma estrutura utilizada para agrupar variáveis do mesmo tipo
	A matriz organiza a informação em duas dimensões (linhas e colunas)
	
	Escreva um programa que leia uma matriz 2 x 2	
*/

#include<stdio.h>

int matriz[2][2];

void entrada(){
	
	//Linha (i)
	for(int i=0; i<2; i++){
		
		//Coluna (j)
		for(int j=0; j<2; j++){
			printf("Informe um numero: ");
			scanf("%d", &matriz[i][j]);
		}
		
	}
	
}

void saida(){
	
	//Linha (i)
	for(int i=0; i<2; i++){
		
		//Coluna (j)
		for(int j=0; j<2; j++){
			printf("\nMatriz: [%d][%d] -> %d ", i,j,matriz[i][j]);			
		}
		
	}
	
}

int main(){	
	entrada();
	saida();
	return 0;
}
