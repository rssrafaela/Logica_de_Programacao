/*
Uma empresa quer verificar se um empregado est� qualificado para a aposentadoria ou n�o.
Para estar em condi��es, um dos seguintes requisitos deve ser satisfeito:

 - Ter no m�nimo 65 anos de idade.
 - Ter trabalhado no m�nimo 30 anos.
 - Ter no m�nimo 60 anos e ter trabalhado no m�nimo 25 anos.
 
 Com base nas informa��es acima, fa�a um algoritmo que leia:
 o ano de seu nascimento e o ano de seu ingresso na empresa.
 O programa dever� escrever a idade e o tempo de trabalho do
 empregado e tamb�m a mensagem 'Requerer aposentadoria' ou 'N�o requerer'.

Ex:
Entrada
Ano de Nascimento: 1980
Ano de ingresso na empresa: 2001

Sa�da
Idade: 42
Tempo de trabalho: 22
N�o pode requerer aposentadoria
*/

#include<stdio.h>

main(){
	
	int anoNascimento, anoAdmissao, idade, tempoTrabalho;
	
	printf("Digite o seu ano de nascimento: ");
	scanf("%d", &anoNascimento);
	
	printf("\nDigite o ano de ingresso na empresa: ");
	scanf("%d", &anoAdmissao);
	
	idade = 2023 - anoNascimento;
	tempoTrabalho = 2023 - anoAdmissao;
	
	if(idade >= 65){
		printf("\nidade: %d", idade);
		printf("\ntempo de trabalho: %d", tempoTrabalho);
		printf("\nPode requerer aposentadoria!");
	}
	else if (tempoTrabalho >= 30){
		printf("\nidade: %d", idade);
		printf("\ntempo de trabalho: %d", tempoTrabalho);
		printf("\nPode requerer aposentadoria!");
	}
	else if (idade >= 60 && tempoTrabalho >= 25){
		printf("\nidade: %d", idade);
		printf("\ntempo de trabalho: %d", tempoTrabalho);
		printf("\nPode requerer aposentadoria!");
	}
	else{
		printf("\nidade: %d", idade);
		printf("\ntempo de trabalho: %d", tempoTrabalho);
		printf("\nNao pode requerer aposentadoria!");	
	}
}
