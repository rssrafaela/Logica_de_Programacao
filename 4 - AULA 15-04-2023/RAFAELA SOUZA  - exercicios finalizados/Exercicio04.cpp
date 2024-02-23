/*
Fa�a um programa que receba o sal�rio de um vendedor e o valor total de suas vendas.
Com base no valor total das vendas � necess�rio calcular sua comiss�o.

Valor Total de vendas abaixo de 3000 - comiss�o de 2% do valor total
Valor Total de vendas abaixo de 5000 e acima de 3000 - comiss�o de 4% do valor total
Valor Total de vendas a partir de 5000 - comiss�o de 6% do valor total

Exibir o sal�rio base, total vendido, a comiss�o e o sal�rio l�quido. 
*/

#include<stdio.h>

main(){
	
	float salarioBase, valorVendas, comissaoUm, comissaoDois, comissaoTres;
	
	printf("Digite o seu salario base: ");
	scanf("%f", &salarioBase);
	
	printf("\nDigite o valor total de vendas: ");
	scanf("%f", &valorVendas);
	
	comissaoUm = valorVendas * 0.02;
	comissaoDois = valorVendas * 0.04;
	comissaoTres = valorVendas * 0.06;
	
	if(valorVendas < 3000){
		printf("\nSalario base: %.2f", salarioBase);
		printf("\nParabens! Voce ganhou uma comissao de 2 por cento");
		printf("\nTotal vendido: %.2f", valorVendas);
		printf("\nComissao: %.2f", comissaoUm);
		printf("\nSalario liquido: %.2f", salarioBase + comissaoUm);		
	}
	else if(valorVendas < 5000 && valorVendas > 3000){
		printf("\nSalario base: %.2f", salarioBase);
		printf("\nParabens! Voce ganhou uma comissao de 4 por cento");
		printf("\nTotal vendido: %.2f", valorVendas);
		printf("\nComissao: %.2f", comissaoDois);
		printf("\nSalario liquido: %.2f", salarioBase + comissaoDois);		
	}
		else if(valorVendas >= 5000){
		printf("\nSalario base: %.2f", salarioBase);
		printf("\nParabens! Voce ganhou uma comissao de 6 por cento");
		printf("\nTotal vendido: %.2f", valorVendas);
		printf("\nComissao: %.2f", comissaoTres);
		printf("\nSalario liquido: %.2f", salarioBase + comissaoTres);		
	}
	
}
