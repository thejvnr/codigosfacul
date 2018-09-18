#include <stdlib.h>
#include <stdio.h>

void main(){
	
	int a,b,c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if((a+b) > c)
		printf("a soma eh maior que C");
	else
		printf("a soma eh menor que C");
}
