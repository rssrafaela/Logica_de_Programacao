/*
	Coment�rio
	de v�rias
	linhas
	Espa�o antes do printf = apertar tab. (tabula��o)
	; = terminar um comando.
	\n = pular uma linha.
*/


#include<stdio.h> //importando uma biblioteca de fun��es

main(){ //inicio da Linguagem C -> Ponto de partida para iniciar um programa.
	printf("Ola mundo!"); //fun��o para imprimir na tela
	printf("\nLogica de Programacao");
	
	//Vari�vel = Espa�o de mem�ria para armazenar um valor (tempor�rio)
	//Declara��o de vari�veis
	//Toda vari�vel precisa ter um tipo
	
	int numero; // 10
	float preco; // 19.90
	char letra; // 'a'
	bool status; // true/false (true = 1 , false = 0)
	
	//Declarar valores para as vari�veis
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
