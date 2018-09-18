#include <stdlib.h>
#include <stdio.h>

struct pessoa {
	
	int idade;
	float peso, altura;
	char eyecolor, haircolor;
	
}typedef Pessoa;

void cadastro(Pessoa *pessoas){
	int x;
	
	for(x=0; x<4; x++){
	printf("\nInforme a idade, peso e altura respectivamente:");
	scanf("%d %f %f", &pessoas[x].idade, &pessoas[x].peso, &pessoas[x].altura);
	printf("\nInforme a cor dos olhos:");
	scanf("%s", &pessoas[x].eyecolor);
	printf("\nInforme a cor do cabelo:");
	scanf("%s", &pessoas[x].haircolor);
	}
}


void velhos (Pessoa *pessoas){
	int x;
	int cont=0;
	
	for(x=0; x<4; x++){
		if(pessoas[x].idade > 50 && pessoas[x].peso < 60){
			cont++;
		}
	}
	printf("\nQuantidade de idosos: %d", cont);
}

void idadeMedia (Pessoa *pessoas){
	int x, cont=0;
	int soma=0;
	
	for(x=0; x<4; x++){
		if(pessoas[x].altura < 1.50){
			soma = soma + pessoas[x].idade;
			cont++;
		}
	}
	if(cont > 0)
		printf("\nMedia: %f", (float) soma / cont);
}

void olhosAzuis (Pessoa *pessoas){
	int x, cont=0;
	
	for(x=0; x<4; x++){
		if(pessoas[x].eyecolor == 'A'){
			cont++;
		}
	}
	printf("\n%f", (float) (cont * 100) / 20);
}

void ruivos (Pessoa *pessoas){
	int x, cont=0;
	
	for(x=0; x<4; x++){
		if(pessoas[x].haircolor == 'R' && pessoas[x].eyecolor != 'A'){
			cont++;
		}
	}
	printf("\n%d", cont);
}

void main(){

	Pessoa *pessoas = (Pessoa*) malloc(sizeof(Pessoa)*4);
	
	cadastro(pessoas);
	velhos(pessoas);
	idadeMedia(pessoas);
	olhosAzuis(pessoas);
	ruivos(pessoas);
}
