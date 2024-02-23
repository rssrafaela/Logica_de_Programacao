/* Exercício 3
Faça um programa que leia a idade de 10 pessoas
- O programa deverá informar quantas pessoas são maiores de idade
- O total de anos dessas pessoas maiores de idade

*/

#include<stdio.h>

main(){
	
	int idade, contador=1, qtdMaior=0, totalMaior;
		
	while(contador <= 10){
		
		printf("\nInforme um numero: ");
		scanf("%d", &idade);
		
		if(idade >= 18){
			qtdMaior++;
			totalMaior=totalMaior+idade;
		}
		
		contador++;		
	}//fim do loop
	
	printf("Total de pessoas maiores de idade: %d", qtdMaior);
	printf("\nIdade total: %d", totalMaior);
}
