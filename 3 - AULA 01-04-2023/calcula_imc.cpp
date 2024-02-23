/*
	dontpad.com/logica03 (site para colocar seus códigos, não é confiável, pois qlqr um pode alterar)
	
	Calculo de IMC 
	Faça um sistema que receba o peso e a altura de uma pessoa
	- Execute e imprima o calculo do IMC
	imc = peso / (altura*altura);
	
	Informar a classificação
	
	MENOR QUE 18.5	MAGREZA	
	ENTRE 18.5 E 24.9	NORMAL	
	ENTRE 25.0 E 29.9	SOBREPESO	
	ENTRE 30.0 E 39.9	OBESIDADE	
	MAIOR QUE 40.0	OBESIDADE GRAVE	
*/

#include<stdio.h>

main(){
	
	float peso, altura, imc;
	
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura*altura);
	
	if(imc < 18.5){
		printf("\nO seu imc e %.2f correspondendo a classificacao: magreza", imc);
	}
	else if(imc >= 18.5 && imc <= 24.9){
		printf("\nO seu imc e %.2f correspondendo a classificao: normal", imc);
	}
	else if(imc >= 25.0 && imc <= 29.9){
		printf("\nO seu imc e %.2f correspondendo a classificacao: sobrepeso", imc);
	}
	else if(imc >= 30.0 && imc <= 39.9){
		printf("\nO seu imc e %.2f correspondendo a classificacao: obesidade", imc);
	}
	else{
		printf("\nO seu imc e %.2f correspondendo a classificacao: obesidade grave", imc);
	}
		printf("\n\nObrigada por usar o sistema!!");
}
