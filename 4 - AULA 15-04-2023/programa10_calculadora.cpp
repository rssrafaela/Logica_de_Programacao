/*
	Faça um programa que leia 2 numeros
		O programa deverá exibir um menu com as 4 operações básicas da matemática
		Ex
		1- Adição
		2- Subtração
		3- Multiplicação
		4- Divisao
		
		Calcular e imprimir o resultado		
*/

#include<stdio.h>

main(){
	
	float n1, n2;
	int opcao;
	
	printf("Informe um numero: ");
	scanf("%f", &n1);
	
	printf("Informe outro numero: ");
	scanf("%f", &n2);
	
	printf("\nMENU");
	printf("\n1- Adicao");
	printf("\n2- Subtracao");
	printf("\n3- Multiplicacao");
	printf("\n4- Divisao");
	
	printf("\nEscolha uma opcao: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		//se opcao == 1{}
		case 1:			
			printf("Adicao: %.1f", n1+n2);
			break;
			
		case 2:			
			printf("Subtrcao: %.1f", n1-n2);
			break;
			
		case 3:			
			printf("Multiplicacao: %.1f", n1*n2);
			break;
			
		case 4:			
			if(n1 == 0 || n2 == 0){
				printf("Nao se deve dividir por zero");
			}else{
				printf("Divisao: %.1f", n1/n2);
			}			
			
			break;	
		
		default :
			printf("Entrada invalida!");
			break;
	}
	
}
