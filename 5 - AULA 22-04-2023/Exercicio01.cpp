/* Exercicio 1
Um posto de gasolina est� dando desconto no abastecimento se o pagamento for realizado em dinheiro ou por d�bito.

Fa�a um programa que leia o valor do abastecimento.

O programa dever� exibir um menu para escolha da forma de pagamento
1- Dinheiro/Pix
2- D�bito
3- Cr�dito

Dinheiro -> Dar 10% de desconto
D�bito -> Dar 5% de desconto
Cr�dito -> Sem desconto  

Imprimir o tipo de pagamento escolhido e o valor com desconto


*/


#include<stdio.h>

main(){
	
	float n1;
	int opcao;
	
	printf("Por favor, inserir o valor do abastecimento: ");
	scanf("%f", &n1);
	
	printf("\nEscolha a forma de pagamento: ");
	printf("\n1- Dinheiro/Pix");
	printf("\n2- Debito");
	printf("\n3- Credito");

	printf("\nEscolha uma opcao: ");
	scanf("%d", &opcao);
	
	if(opcao == 1){
		printf("\nShow. No dinheiro voce recebera um desconto de 10 por cento.");
		printf("\nTotal a pagar: %.2f", n1 - 0.1 * n1);
	}
	else if(opcao == 2){
		printf("\nShow. No debito voce recebera um desconto de 5 por cento.");
		printf("\nTotal a pagar: %.2f", n1 - 0.05 * n1);
	}
	else{
		printf("\nTotal a pagar: %.2f", n1);
	}
	
}

/*
		CORRE��O DO PROFESSOR 22-04-2023
		
#include<stdio.h>

main(){
	
	float valor, desconto, total;
	int opcao;
	
	printf("Informe o valor do abastecimento: ");
	scanf("%f", &valor);
	
	printf("Escolha a forma de pagamento: ");
	printf("\n1- Dinheiro/Pix");
	printf("\n2- Debito");
	printf("\n3- Credito");
	printf("\nDigite a opcao desejada: ");
	scanf("%d", &opcao);
	
	if(opcao != 1 && opcao != 2 && opcao != 3){
		printf("Opcao invalida!");	
	}
	
	else{
		
		if(opcao == 1){
			printf("Na opcao 1 voce ganhara 10 por cento de desconto");
			desconto = valor * 0.1;
		}
		
		else if(opcao == 2){
			printf("Na opcao 2 voce ganhara 5 por cento de desconto");
			desconto = valor * 0.05;
		}
		
		else{
			printf("Pagando no credito voce nao tem desconto");		
		}
		
		total = valor-desconto;
		printf("\nValor a pagar: %.2f", total);
		
	}
	
		
}

*/
