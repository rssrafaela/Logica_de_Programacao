/*
	SE / SEN�O (IF/ELSE)
	
	if(condi��o for verdadeira){
		executa
	}
	else{
		executa caso a condi��o n�o seja verdadeira
	}
*/

#include<stdio.h>
main(){
	
	int idade;
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("Maior de idade");
	}
	
	else{
		printf("Menor de idade");
	}
	
	printf("\nObrigada por usar o sistema!");
	
}
