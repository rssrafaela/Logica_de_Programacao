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
	
	switch(opcao){
		//se opcao == 1{}
		case 1:			
			printf("\nTotal a pagar: %.2f", n1 - 0.1 * n1);
			break;

		case 2:			
			printf("\nTotal a pagar: %.2f", n1 - 0.05 * n1);
			break;
		
		case 3:			
			printf("\nTotal a pagar: %.2f", n1);
			break;
			
		default :
			printf("Opcao invalida!");
			break;
		
	}
	
}
