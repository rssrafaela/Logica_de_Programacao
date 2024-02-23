/*Um posto est� vendendo combust�veis com a seguinte tabela de descontos:

�lcool:
at� 20 litros, desconto de 3% por litro
acima de 20 litros, desconto de 5% por litro

Gasolina
at� 20 litros, desconto de 4% por litro
acima de 20 litros, desconto de 6% por litro

Escreva um algoritmo que leia o n�mero de litros vendidos e o tipo de combust�vel 
(1-Alcool ou 2-Gasolina), calcule e imprima o valor a ser pago pelo cliente 
sabendo-se que o pre�o do litro da gasolina � R$5.49 e o pre�o do litro do �lcool � R$ 4.19.*/

#include<stdio.h>

main(){
	
	float litros, total, desconto;
	int tipo;
		
	printf("Informe o total de litros: ");
	scanf("%f", &litros);
	
	printf("Informe o tipo de combustivel: 1- Alcool ou 2- Gasolina: ");
	scanf("%d", &tipo);
		
	
	if(tipo == 1){
		//alcool
		printf("Combustivel escolhido: Alcool!");
		total = litros * 4.19;
		printf("\nValor total: %.2f", total);
		
		if(litros <= 20){
			//3%
			total = total * 0.97;			
		}else{
			//5%
			total = total * 0.95;			
		}
		
		printf("\nValor a ser pago: %.2f", total);		
	}
	
	else if(tipo == 2){
		//alcool
		printf("Combustivel escolhido: Gasolina!");
		total = litros * 5.49;
		printf("\nValor total: %.2f", total);
		
		if(litros <= 20){
			//4%
			total = total * 0.96;			
		}else{
			//6%
			total = total * 0.94;			
		}
		
		printf("\nValor a ser pago: %.2f", total);		
	}
	
	else{
		printf("\nOpcao invalida!");		
	}
	
}
