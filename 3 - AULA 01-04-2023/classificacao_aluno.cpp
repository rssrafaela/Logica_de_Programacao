/*
	MEDIA MENOR QUE 5 (REPROVADO)
	MEDIA MAIOR QUE 5 E MENOR QUE 7 (RECUPERAÇÃO)
	MEDIA MAIOR OU IGUAL A 7 (APROVADO)
*/

#include<stdio.h>

main(){
	
	float n1, n2, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2;
	
	if(media < 5){
		printf("\nA sua media e: %.2f, voce esta reprovado", media);	
	}
	else if(media >=5 && media <7){
		printf("\nA sua media e: %.2f, voce esta de recuperacao", media);
	}
	else{
		printf("\nA sua media e: %.2f, voce esta aprovado!!", media);
	}

}
