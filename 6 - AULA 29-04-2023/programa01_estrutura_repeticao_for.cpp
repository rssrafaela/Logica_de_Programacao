/*
	Estrutura de repeiti��o: FOR
	para(inicializa��o do contador; condi��o da execu��o; incremento){
		bloco de execu��o
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
