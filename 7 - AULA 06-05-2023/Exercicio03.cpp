/* Exercício 3
Faça um programa que leia a idade de 10 pessoas
- O programa deverá informar quantas pessoas são maiores de idade
- O total de anos dessas pessoas maiores de idade

*/

#include<stdio.h>

main(){
	
	int idade[10], totalMaior, qntdMaior = 0, qntdMenor = 0, totalMenor;
	
	for (int i = 0; i < 10; i++){
		printf("Digite uma idade: ");
		scanf("%d", &idade[i]);
		

		if(idade[i] >= 18){
		
			qntdMaior++;
			totalMaior=totalMaior+idade[i];	
		}
		else{
			qntdMenor++;
			totalMenor=totalMenor+idade[i];
		}
	}	
	printf("\nTotal de pessoas maiores de idade: %d", qntdMaior);
		printf("\nIdade total dos maiores de idade: %d", totalMaior);
			printf("\nTotal de pessoas menores de idade: %d", qntdMenor);
				printf("\nIdade total dos menores de idade: %d", totalMenor);
		
}
