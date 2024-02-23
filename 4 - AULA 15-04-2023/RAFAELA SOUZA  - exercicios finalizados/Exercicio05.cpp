/*
Um posto está vendendo combustíveis com a seguinte tabela de descontos:

Álcool:
até 20 litros, desconto de 3% por litro
acima de 20 litros, desconto de 5% por litro

Gasolina
até 20 litros, desconto de 4% por litro
acima de 20 litros, desconto de 6% por litro

Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível (1-Alcool ou 2-Gasolina),
calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$5.49 e o preço do litro do álcool é R$ 4.19. 
*/

#include<stdio.h>

main(){
	
	float litrosVendidos, totalGasolina, totalAlcool;
	int numero = 1 || 2;
	
	printf("Digite a quantidade de litros solicitada: ");
	scanf("%f", &litrosVendidos);
	
	printf("\nDigite o combustivel desejado 1-Alcool ou 2-Gasolina: ");
	scanf("%d", &numero );
	
	if(numero == 1){
		printf("\nOk. Voce escolheu alcool!", numero);
	}
	else if(numero == 2){
		printf("\nOk. Voce escolheu gasolina!", numero);
	}
	
	//gasolina = 5.49;
	//alcool = 4.19;
	totalGasolina = litrosVendidos * 5.49;
	totalAlcool = litrosVendidos * 4.19;
	
	if (litrosVendidos <= 20 && numero == 1){
		printf("\nO valor cobrado com desconto e: %.2f", totalAlcool - (litrosVendidos * 4.19 * 0.03));	
	}
	else if (litrosVendidos > 20 && numero == 1){
		printf("\nO valor cobrado com desconto e: %.2f", totalAlcool - (litrosVendidos * 4.19 * 0.05));	
	}
		if (litrosVendidos <= 20 && numero == 2){
		printf("\nO valor cobrado com desconto e: %.2f", totalGasolina - (litrosVendidos * 5.49 * 0.04));	
	}
	else if (litrosVendidos > 20 && numero == 2){
		printf("\nO valor cobrado com desconto e: %.2f", totalGasolina - (litrosVendidos * 5.49 * 0.06));	
	}	
}
