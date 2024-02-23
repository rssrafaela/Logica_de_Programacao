/*
Faça um programa para ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa.
Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R $1.500,00 e mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu salário total.
*/

#include<stdio.h>

main(){
	
	float salarioFixo, totalVendas, comissao;
	
	printf("Digite o salario fixo: ");
	scanf("%f", &salarioFixo);
	
	printf("\nDigite o valor total de vendas: ");
	scanf("%f", &totalVendas);
		
	if(totalVendas <= 1500){ 									
		comissao = 1500 * 0.03;
	}

	else{
		comissao = ((totalVendas - 1500) * 0.05)+ 45;
	}
	
	printf("\nSalario a receber: %.2f", salarioFixo + comissao);

}

/*

		CORREÇÃO DO PROFESSOR 22-04-2023
		
#include<stdio.h>

main(){
	
	float salario, totalVendas ,comissao, comissao5;

	printf("Informe o salario do vendedor: ");
	scanf("%f", &salario);
	
	printf("Informe o total vendido: ");
	scanf("%f", &totalVendas);

			
	if(totalVendas > 1500){
		comissao = 45;
		comissao5 = (totalVendas-1500) * 0.05;				
	}
	
	else{
		comissao = totalVendas * 0.03;
	}
	
	printf("\nValor a receber: %.2f", salario+comissao+comissao5);
	
}

*/
