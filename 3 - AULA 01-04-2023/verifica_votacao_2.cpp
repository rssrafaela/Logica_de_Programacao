/*
	Faça um programa que receba o ano de nascimento de uma pessoa e o ano de uma eleição
	Considere a eleição em 31/12
	
	Se a idade for menor de 16 --> Não pode votar
	Se a idade for entre 16 e 17 e maior que 65 --> Voto facultativo
	Se entre 18 e 64 --> Voto obrigatório	
*/

#include<stdio.h>

main(){
	
	int anoNascimento, anoEleicao, idade;
	
	printf("Informe o ano de nascimento: ");
	scanf("%d", &anoNascimento);
	
	printf("Informe o ano de eleicao: ");
	scanf("%d", &anoEleicao);
	
	idade = anoEleicao - anoNascimento;
	
	if(idade < 16){ //Só fará o else if se esse primeiro if for falso.
		printf("%d anos, nao pode votar!", idade);
	}
	else if(idade >= 16 && idade < 18){ //se não se = só é testado caso contrário ao primeiro if. 
		printf("%d anos, voto opcional!", idade);
	}
	else if(idade >= 65){
		printf("%d anos, voto opcional!", idade);
	}
	else{
		printf("%d anos, voto obrigatorio!", idade); //Se a opções acima não forem verdadeiras.
	}
	
	printf("\nObrigada por usar o sistema!");
}

