#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char menu(){
	
	printf("\n Digite 1 para realizar uma soma ");
	printf("\n Digite 2 para realizar uma subtracao ");
	printf("\n Digite 3 para realizar uma multiplicacao ");
	printf("\n Digite 4 para realizar uma divisao ");
	printf("\n Digite 5 para elevar ao quadrado ");
	printf("\n Digite 6 para elevar um numero a Y ");
	printf("\n Digite 7 para calcular a raiz quadrada ");
	printf("\n Digite 8 para sair ");
	
	return getch();
}

float lerum(){
	float x;
	printf("\n informe um numero: ");
	scanf("%f", &x);
	return x;
}

float lerdois(){
	float y;
	printf("\n informe o segundo numero: ");
	scanf("%f", &y);
	return y;
}

float soma(float a, float b){
	return r = a + b;
}

float subt(float a, float b){
	return r = a - b;
}

float mult(float a, float b){
	return r = a * b;
}

float divisao(float a, float b){
	return r = a / b;
}

float quadrado(float a){
	return r = a * a;
}

float potencia(float a, float b){
	int x, res = 1;
	for(x=1; x<=b; x++)
		res *= a;
		return res;
}

float raiz(float a){
	return sqrt(a);
}
void main(){
	
	char opcao;
	float a, b, r;
	opcao = menu();
	
	
	switch (opcao){
		case '1': a = lerum();
				  b = lerdois();
				  printf("\n a soma e igual a %.1f ", soma(a, b));
		case '2': a = lerum();
				  b = lerdois();
				  printf("\n a subtracao e igual a %.1f ", subt(a, b));
		case '3': a = lerum();
				  b = lerdois();
				  printf("\n a multiplicacao e igual a %.1f ", mult(a, b));
		case '4': a = lerum();
				  b = lerdois();
				  printf("\n a divisao e igual a %.1f ", divisao(a, b));
		case '5': a = lerum();
				  printf("\n o numero %.1f ao quadrado e %.1f ", a, quadrado(a));
		case '6': a = lerum();
				  b = lerdois();
				  printf("\n o numero %.1f elevado a %.1f e igual a %.1f ", a, b, potencia(a, b));
		case '7': a = lerum();
				  printf("\n a raiz quadrada de %.1f e igual a %.1f", a, raiz(a));
		case '8': break;
	}
}
