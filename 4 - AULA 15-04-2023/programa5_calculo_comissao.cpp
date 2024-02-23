/*Faça um programa que receba o salário de um vendedor e o valor total de suas vendas.
Com base no valor total das vendas é necessário calcular sua comissão.

Valor Total de vendas abaixo de 3000 - comissão de 2% do valor total
Valor Total de vendas abaixo de 5000 e acima de 3000 - comissão de 4% do valor total
Valor Total de vendas a partir de 5000 - comissão de 6% do valor total

Exibir o salário base, total vendido, a comissão e o salário líquido. */

#include<stdio.h>

main(){

	float salario, totalVendas, comissao, salarioLiquido;
	
	printf("Informe o salario do vendedor: ");
	scanf("%f", &salario);
	
	printf("Informe o total vendido: ");
	scanf("%f", &totalVendas);
	
	if(totalVendas < 3000){
		comissao = totalVendas * 0.02;
	}
	
	else if(totalVendas < 5000){
		comissao = totalVendas * 0.04;
	}
	
	else{
		comissao = totalVendas * 0.06;
	}
	
	salarioLiquido = salario+comissao;	
	printf("Salario base: %.2f", salario);
	printf("\nTotal vendido: %.2f", totalVendas);
	printf("\nComissao : %.2f", comissao);
	printf("\nSalario liquido: %.2f", salarioLiquido);
		
}
