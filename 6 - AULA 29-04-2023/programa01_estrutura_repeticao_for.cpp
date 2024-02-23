/*
	Estrutura de repeitição: FOR
	para(inicialização do contador; condição da execução; incremento){
		bloco de execução
	}

*/

#include<stdio.h>
main(){
	
	int contadorW=1;
	
	while(contadorW <= 5){
		printf("\nContador While: %d", contadorW);
		contadorW++;
	}
	
	printf("\n------------------------------------------\n");
	
	for(int contador=1; contador <=5; contador++){
		printf("\nContador for: %d", contador);
	}
}
