/* Exercício 2
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
	
	float n1, n2, n3,media;

	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	if(n1 < 4){
		n1 = 0;
	}
	if(n2 < 4){
		n2 = 0;
	}
	if(n3 < 4){
		n3 = 0;
	}
		
	media = (n1+n2+n3) / 3;
	printf("\nMedia: %.2f", media);
		
	if(media >= 0 && media <= 4.9){
		printf("\nO aluno esta reprovado!");
	}
	else if(media >= 5 && media <= 6.9){
		printf("\nO aluno esta em recuperacao!");
	}	
	else{
		printf("\nO aluno esta aprovado!");
	}
}


/*

			CORREÇÃO DO PROFESSOR 22-04-2023
			
#include<stdio.h>

main(){
	
	float nota1, nota2, nota3, media;
	
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
		printf("\nSituacao: Reprovado!");
	}
	
	else if(media < 7){
		printf("\nSituacao: Recuperacao!");
	}
	
	else{
		printf("\nSituacao: Aprovado!");
	}
		
}

*/
