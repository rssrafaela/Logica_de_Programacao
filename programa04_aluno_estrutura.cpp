/*
	Struct
	Utilizado para agrupar variáveis de tipos diferentes
*/

#include<stdio.h>

struct Aluno{
	char nome[20];
	int idade;
	char sexo[1];
};

//"a" é uma variável do tipo aluno (Acessando as variáveis de "Aluno)
struct Aluno a;

void entrada(){
	printf("Digite o nome: ");
	scanf("%s", &a.nome);
	
	printf("Digite a idade: ");
	scanf("%d", &a.idade);
	
	printf("Digite o sexo (m/f): ");
	scanf("%s", &a.sexo);
}

void saida(){
	printf("\nNome: %s", a.nome);
	printf("\nIdade: %d", a.idade);
	printf("\nSexo: %s", a.sexo);
}

int main(){
	
	entrada();
	saida();
	
	return 0;	
}
