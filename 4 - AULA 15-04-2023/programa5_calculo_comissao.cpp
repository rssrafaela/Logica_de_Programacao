/*Fa�a um programa que receba o sal�rio de um vendedor e o valor total de suas vendas.
Com base no valor total das vendas � necess�rio calcular sua comiss�o.

Valor Total de vendas abaixo de 3000 - comiss�o de 2% do valor total
Valor Total de vendas abaixo de 5000 e acima de 3000 - comiss�o de 4% do valor total
Valor Total de vendas a partir de 5000 - comiss�o de 6% do valor total

Exibir o sal�rio base, total vendido, a comiss�o e o sal�rio l�quido. */

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
