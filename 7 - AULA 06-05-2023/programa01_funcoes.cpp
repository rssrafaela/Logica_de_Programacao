/*
	FUN��ES
	Servem para subdividir sua l�gica em peda�os, facilitando a manuten��o e o reaproveitamento do c�digo
	
*/

#include<stdio.h>

//fun��o sem retorno (void) -> (s� executa)
void mensagem(){
	printf("\n\nObrigado e volte sempre!\n");
	printf("\n---------------------------------\n");
}

main(){
	
	int j=0;
	
	for(int i=0; i<5; i++){		
		printf("\nContador do for %d", i);		
	}
	
	mensagem();
	
	while(j<5){
		printf("\nContador do while %d", j);
		j++;
	}
	
	mensagem();
	
}
