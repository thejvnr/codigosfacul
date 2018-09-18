#include <stdlib.h>
#include <stdio.h>

void main (){
	
	float preco;
	
	scanf("%f", &preco);
	
	printf("o preco do produto com desconto e: %.2f", preco - (preco * 0.10));
	
}
