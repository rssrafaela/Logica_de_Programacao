/*
	
	Faça programa que receba o salario de um funcionario e o total vendido
	Se o total vendido for maior que 1000, ele ganhará uma comissao de 10%
	Senão ele ganhará uma comissão de 5%
*/

#include<stdio.h>
main(){
	
	float salario, totalVendido, comissao, salarioFinal;
	
	printf("Informe o salario: ");
	scanf("%f", &salario);
	
	printf("Informe o total vendido: ");
	scanf("%f", &totalVendido);
	
	if(totalVendido > 1000){
		comissao = (totalVendido * 10) / 100;
	}else{
		comissao = (totalVendido * 5) / 100;
	}
	
	salarioFinal = salario + comissao;
	printf("\nVoce ganhou %.2f de comissao!", comissao);
	printf("\nValor a receber %.2f: ", salarioFinal);		
}
