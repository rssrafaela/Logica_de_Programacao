/*
Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não.
Para estar em condições, um dos seguintes requisitos deve ser satisfeito:

 - Ter no mínimo 65 anos de idade.
 - Ter trabalhado no mínimo 30 anos.
 - Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.
 
 Com base nas informações acima, faça um algoritmo que leia:
 o ano de seu nascimento e o ano de seu ingresso na empresa.
 O programa deverá escrever a idade e o tempo de trabalho do
 empregado e também a mensagem 'Requerer aposentadoria' ou 'Não requerer'.

Ex:
Entrada
Ano de Nascimento: 1980
Ano de ingresso na empresa: 2001

Saída
Idade: 42
Tempo de trabalho: 22
Não pode requerer aposentadoria
*/


#include<stdio.h>

main(){
	
	int anoNascimento, anoIngresso, idade, tempoTrabalho;
	
	printf("Informe o ano de nascimento: ");
	scanf("%d", &anoNascimento);
	
	printf("Informe o ano de ingresso na empresa: ");
	scanf("%d", &anoIngresso);
	
	idade = 2023 - anoNascimento;
	tempoTrabalho = 2023 - anoIngresso;
	
	printf("Idade: %d", idade);
	printf("\nTempo de trabalho: %d\n", tempoTrabalho);
				
	if(idade >= 65 || tempoTrabalho >= 30 || idade >= 60 && tempoTrabalho >= 25){
		printf("Pode requerer aposentadoria");
	}
	
	else{
		printf("NAO pode requerer aposentadoria");
	}
		
}
