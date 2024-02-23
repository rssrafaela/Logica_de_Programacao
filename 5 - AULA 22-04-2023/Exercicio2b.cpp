/* Exercício 2 : USANDO SWITCH (NÃO PODEMOS USAR COM FLOAT)

Para calcular a aprovação de um aluno uma escola adota  os seguintes critérios:

- São 3 provas que vão de 0 a 10
- Se a nota for abaixo de 4, esta deverá ser considerada ZERO
- O programa deverá calcular a média
- De 0 a 4.9 o aluno estará reprovado
- De 5 a 6.9 o aluno estará em recuperação
- De 7 a 10 o aluno será aprovado
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
