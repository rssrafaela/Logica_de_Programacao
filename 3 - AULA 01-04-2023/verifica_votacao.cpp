/*
	Exerc�cio 2 - Vota��o
Fa�a um programa que receba o ano de nascimento
de uma pessoa e informe se ela pode votar
Obs: Considere a elei��o dia 31/12

	OBS DOS ESTUDOS:
	
	A partir de 2007 poder� votar. = 16 anos
*/

#include<stdio.h>

main(){
	
	int anoNascimento, idade;
	
	printf("\nDigite o seu ano de nascimento: ");
	scanf("%d", &anoNascimento);
	
	idade = 2023 - anoNascimento;
	
	if(idade >= 16){
		printf("\nVoce tem %d anos e ja pode votar!!!", idade);	
	}
	else{
		printf("\nVoce tem %d anos e nao tem idade para votar!!", idade);
	}
		
}

/* CORRE��O DO PROFESSOR:

#include<stdio.h>

main(){
	int anoNascimento, idade;
	
	printf("Informe o ano de nascimento: ");
	scanf("%d", &anoNascimento);
	
	idade = 2023 - anoNascimento;
	
	if(idade >= 16){
		printf("%d anos, pode votar!", idade);
	}else{
		printf("Com %d anos, nao pode votar!", idade);
	}
	
}


*/
