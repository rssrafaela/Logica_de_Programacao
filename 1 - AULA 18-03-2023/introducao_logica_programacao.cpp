/*
	Comentário
	de várias
	linhas
	Espaço antes do printf = apertar tab. (tabulação)
	; = terminar um comando.
	\n = pular uma linha.
*/


#include<stdio.h> //importando uma biblioteca de funções

main(){ //inicio da Linguagem C -> Ponto de partida para iniciar um programa.
	printf("Ola mundo!"); //função para imprimir na tela
	printf("\nLogica de Programacao");
	
	//Variável = Espaço de memória para armazenar um valor (temporário)
	//Declaração de variáveis
	//Toda variável precisa ter um tipo
	
	int numero; // 10
	float preco; // 19.90
	char letra; // 'a'
	bool status; // true/false (true = 1 , false = 0)
	
	//Declarar valores para as variáveis
	numero = 10;
	preco = 19.90;
	letra = 'a';
	status = false;
	
	printf("\n-----------------------\n");
	printf("\nO numero e: %d", numero); //%d numero inteiro
	printf("\nO preco e: %f", preco); //%f numero com casas decimais
	printf("\nA letra e: %c", letra); //%c letra
	printf("\nO status e: %d", status); // 1 -> True, 0 -> False
	
	
}
