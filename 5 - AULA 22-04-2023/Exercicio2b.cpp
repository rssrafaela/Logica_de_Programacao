/* Exerc�cio 2 : USANDO SWITCH (N�O PODEMOS USAR COM FLOAT)

Para calcular a aprova��o de um aluno uma escola adota  os seguintes crit�rios:

- S�o 3 provas que v�o de 0 a 10
- Se a nota for abaixo de 4, esta dever� ser considerada ZERO
- O programa dever� calcular a m�dia
- De 0 a 4.9 o aluno estar� reprovado
- De 5 a 6.9 o aluno estar� em recupera��o
- De 7 a 10 o aluno ser� aprovado
*/

#include<stdio.h>

main(){
	
	float nota1, nota2, nota3, media;
	int status;
	
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
			
	printf("Informe a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Informe a terceira nota: ");
	scanf("%f", &nota3);
	
	if(nota1 < 4){
		nota1 = 0;
	}
	
	if(nota2 < 4){
		nota2 = 0;
	}
	
	if(nota3 < 4){
		nota3 = 0;
	}
	
	media = (nota1 + nota2 + nota3) / 3;
	printf("Media: %.1f", media);
		
	if(media < 5){
		status = 0;
	}
	
	else if(media < 7){
		status = 1;
	}
	
	else{
		status = 2;
	}
	
	
	switch(status){
		case 0:
			printf("\nReprovado!");
			break;
			
		case 1:
			printf("\nRecuperacao!");
			break;
			
		case 2:
			printf("\nAprovado!");
			break;
	}
		
}
