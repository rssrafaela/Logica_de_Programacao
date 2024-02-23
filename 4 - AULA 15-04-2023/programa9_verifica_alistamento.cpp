/*
	Faça um programa que leia o sexo (m/f) de uma pessoa
		-Se o sexo for 'm'
			-Solicitar a idade
			-Se a idade maior ou igual a 18 -> Informar que o alistamento é obrigatório
			-Senão, informar que com esta idade o alistamento nao é permitido
		Se o sexo for 'f'
			Informar que o alistamento obrigatório não é permitido para mulheres
			
		char sexo 
		sexo == 'm'			
		%c
*/

#include<stdio.h>

main(){
	
	char sexo;
	int idade;
	
	printf("Informe o sexo (m/f): ");
	scanf("%c", &sexo);
	
	if(sexo == 'm' || sexo == 'M'){
		
		printf("Informe a idade: ");
		scanf("%d", &idade);
		
		if(idade >= 18){
			printf("Alistamento obrigatorio!");
		}else{
			printf("Com %d anos o alistamento nao e permitido", idade);
		}
		
	}
	
	else if(sexo == 'f' || sexo == 'F'){
		printf("O alistamento obrigatorio nao e permitido para mulheres");
	}
	
	else{
		printf("Opcao invalida!");
	}
	
}
