/*
	Fun��o com retorno
	Se a fun��o retorna algo, ela deve ser "tipada" com o mesmo tipo do retorno
*/

#include<stdio.h>

int n1, n2; //variaveis globais

int calcular(){	
	int soma;	
	soma = n1+n2;	
	return soma; //retorna o VALOR da vari�vel para quem chamou a fun��o	
}


main(){
		
	printf("Informe um numero: ");
	scanf("%d", &n1);
	
	printf("Informe um numero: ");
	scanf("%d", &n2);
	
	if(calcular() > 50){
		printf("%d, e maior que 50", calcular());
	}
	else{
		printf("%d, e menor que 50", calcular());
	}
	
}
