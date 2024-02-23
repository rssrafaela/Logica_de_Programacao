/*
	FUNÇÕES
	Servem para subdividir sua lógica em pedaços, facilitando a manutenção e o reaproveitamento do código
	
*/

#include<stdio.h>

//função sem retorno (void) -> (só executa)
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
