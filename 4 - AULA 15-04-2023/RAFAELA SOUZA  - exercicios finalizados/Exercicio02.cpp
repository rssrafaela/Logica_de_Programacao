/*
Faça um programa que receba o preço e a quantidade de unidades de um produto em um pedido
-Se a quantidade for a partir de 50 unidades, o preço do produto sofrerá um desconto de 20%
- Exibir o valor total do pedido e o valor com desconto

Ex: Valor do produto: 39.90
Quantidade: 50
Valor total: R$ 1995
Valor com desconto: R$ 1596
*/

#include<stdio.h>

main(){
	
	float valorProduto, quantidadeSolicitada, valorTotal, valorDesconto;
	
	printf("Digite o valor do produto: ");
	scanf("%f", &valorProduto);
	
	printf("Digite a quantidade solicitada: ");
	scanf("%f", &quantidadeSolicitada);
	
	
	valorTotal = valorProduto * quantidadeSolicitada;
	valorDesconto = valorTotal * 20 / 100;
		
	if(quantidadeSolicitada >= 50){
		printf("\nSegue o valor total de: %.2f", valorTotal);
		printf("\nSegue o valor com desconto: %.2f", valorTotal - valorDesconto); 
	}
	else if (quantidadeSolicitada < 50){
		printf("\nSegue o valor total de: %.2f", valorTotal);
	 }
			
}
