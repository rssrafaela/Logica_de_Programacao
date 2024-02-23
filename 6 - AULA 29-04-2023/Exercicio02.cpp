/*
Exercício 2
Faça um programa que leia 10 números e informe quantos deles são negativos.    
*/

#include<stdio.h>

main(){
	
	int numero, contador=1, qtdNegativos=0;
		
	while(contador <= 10){
		
		printf("\nInforme um numero: ");
		scanf("%d", &numero);
		
		if(numero < 0){
			//qtdNegativos = qtdNegativos+1;
			qtdNegativos++;
		}
				
		contador = contador+1;
	}//fim do loop
		
	printf("O total de numeros negativos e: %d", qtdNegativos);
}

