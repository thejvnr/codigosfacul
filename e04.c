#include <stdlib.h>
#include <stdio.h>

void main (){
	
	float preco, entrada;
	
	//printf pedindo o preço
	scanf("%f", &preco);
	
	printf("o valor a vista com desconto: %.2f\n", preco - (preco * 0.10));
	
	scanf("%f", &entrada);
	
	printf("o valor de cada parcela sera: %.2f\n", (preco - entrada) / 2);
	 
}
