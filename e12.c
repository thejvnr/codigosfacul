#include <stdlib.h>
#include <stdio.h>

void main(){
	
	char nome[10];
	float horas, salario;
	int dpdt;
	
	scanf("%s", &nome);
	scanf("%f", &horas);
	scanf("%d", &dpdt);
	
	salario = (horas * 12) + (40 * dpdt);
	
	printf("o salario bruto de %s eh: %.2f\n", nome, salario);
	printf("foram descontados inss: %.2f, e IR: %.2f\n", salario * 0.085, salario * 0.05);
	printf("o salario liquido do %s eh: %f\n",nome, salario - (salario * 0.085) - (salario * 0.05));
}
