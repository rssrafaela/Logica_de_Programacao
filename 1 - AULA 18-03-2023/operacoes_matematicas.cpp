//4 opera��es matem�ticas

#include<stdio.h>

main(){
	
	float n1, n2, soma, subtracao, multiplicacao, divisao;
	
	n1 = 10;
	n2 = 5;
	
	soma = n1+n2;
	subtracao = n1-n2;
	multiplicacao = n1*n2;
	divisao = n1/n2;
	
	// Para pular duas linhas = \n\n
	//Primeiro o texto que deseja imprimir na tela entre parenteses "texto" , depois da v�rgula inserir a v�riavel
	//Realizar opera��es:
	
	printf("\nA soma e: %.1f", soma); // Caso queira somente uma casa decimal ap�s a virgula, escreva entre o %f => %.1f
	printf("\nA subtracao e: %.1f", subtracao);
	printf("\nA multiplicacao e: %.1f", multiplicacao);
	printf("\nA divisao e: %.1f", divisao);
	
	
}
