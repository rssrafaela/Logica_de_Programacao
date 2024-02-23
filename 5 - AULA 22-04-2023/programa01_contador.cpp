/*

	ESTRUTURA DE REPETIÇÃO / Loop (WHILE)
	
	While(condição verdadeira){
		executa....
*/

#include<stdio.h>

main(){
	
	int contador = 1;
	
	printf("\nSeja bem-vindo(a)\n");
	
	while(contador < 5){
		printf("\nContador: %d", contador);
		
		contador = contador +1; //contador recebe o valor dele + 1. = Processo chamado de INCREMENTAR.
	}//fim do loop (quando a condição acima não for mais verdadeira!
	
	printf("\nObrigado por usar o programa!");
}
