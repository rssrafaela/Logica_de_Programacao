/*Faça um programa que receba o preço e a quantidade de unidades de um produto em um pedido
-Se a quantidade for a partir de 50 unidades, o preço do produto sofrerá um desconto de 20%
- Exibir o valor total do pedido e o valor com desconto

Ex: Valor do produto: 39.90
Quantidade: 50
Valor total: R$ 1995
Valor com desconto: R$ 1596*/

#include<stdio.h>

main(){
	
	float preco, total, desconto;
	int quantidade;	
	
	printf("Informe o preco do produto: ");
	scanf("%f", &preco);
	
	printf("Informe a quantidade: ");
	scanf("%d", &quantidade);
	
	total = preco*quantidade;
	printf("O valor total do pedido e: %.2f", total);
	
	if(quantidade >= 50){
		desconto = (total * 20) / 100;
		total = total-desconto;
		
		printf("\nVoce ganhou %.2f de desconto",desconto);
		printf("\nValor a pagar: %.2f",total);		
	}
	
}
