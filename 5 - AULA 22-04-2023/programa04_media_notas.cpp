/* Exercício 2 : USANDO O WHILE TAMBÉM
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
	
	float nota, total, media;
	int contador = 1;
	
	while(contador <5){
		
		printf("Informe a %da nota: ", contador); // informe a primeira nota do contador
		scanf("%f", &nota);
		
		if(nota <4){
			nota=0;
		}
		
	total = total+nota; // total recebe 0 + a primeira nota que digitada e assim vai repetindo 5x
	
	contador++; // contador = contador+1 (forma abreviada)
	}
	
	media = total/4;
	printf("Media do primeiro semestre: %.1f", media);
	
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
