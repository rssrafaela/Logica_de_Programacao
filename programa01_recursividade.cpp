/*
	Recursividade: Quando uma função chama ela mesma!
*/

#include<stdio.h>

int n=0;

void imprimirRecursivo(){
			
	printf("\nRecursividade: %d", n);	
	n++;
	
	if(n < 5){		
		imprimirRecursivo();
	}
	
}


int main(){
	
	imprimirRecursivo();	
	return 0;
}
