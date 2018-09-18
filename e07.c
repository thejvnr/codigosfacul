#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main (){
	
	int cata,catb;
	
	scanf("%d", &cata);
	scanf("%d", &catb);
	
	printf("o valor da hipotenusa eh: %.2f", sqrt((cata * cata) + (catb * catb)));
}
