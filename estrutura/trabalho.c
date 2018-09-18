#include <stdlib.h>
#include <stdio.h>

struct militar {
	
	char *grad;
	char *nome;
	int folga;
	
}typedef Militar;

Militar cadastrar(char grad[12] ,char nome[12], int folga){
	
	Militar militar;
	militar.grad = grad;
	militar.nome = nome;
	militar.folga = folga;
	
	return militar;
}

char menu(){
	
	printf("\ninforme 1 para ver a escala.");
	printf("\ninforme 2 para sair.\n");
	return getche();
}

void printMes(){
	
	int x, y, dia=1, mes[5][7];
	char sem[7] = {'S', 'T', 'Q', 'Q', 'S', 'S', 'D'};
	
	printf("\n");
	for(x=0; x<7; x++){
		printf("\t%c", sem[x]);
	}
	printf("\n");
	
	mes[0][0] = 1;
	for(x=0; x<5; x++){
		for(y=0; y<7; y++){
			printf("\t%d", mes[x][y]);
			mes[x][y]+= 1;
				if(mes[x][y] == 32)
					break;			
		}
	printf("\n");
	}
}

void escala(Militar *militares){
	 
	 int x, y, salv, mfolga = 0, dia = 0;
	 
	 for(y=0; y<31; y++){
	 	for(x=0; x<10; x++){
	 		if(militares[x].folga > mfolga){
	 			mfolga = militares[x].folga;
				salv = x;
	 			}
	 		militares[x].folga++;
	 	 }
	 	dia++;
		militares[salv].folga = 0;
		printf("\n\tO militar de servico dia: %d e: %s", dia, militares[salv].nome);
	 	mfolga = 0;
	}
}


void main(){

	FILE *arq;
	char opcao, texto[255], ch;
	
	Militar *militares = (Militar*) malloc(sizeof(Militar)*10);
	
	militares[0] = cadastrar("soldado", "lopes", 5);
	militares[1] = cadastrar("soldado", "pedro", 6);
	militares[2] = cadastrar("soldado", "jorge", 2);
	militares[3] = cadastrar("soldado", "lucas", 4);
	militares[4] = cadastrar("soldado", "silva", 7);
	militares[5] = cadastrar("soldado", "souza", 8);
	militares[6] = cadastrar("soldado", "mateus", 1);
	militares[7] = cadastrar("soldado", "pires", 3);
	militares[8] = cadastrar("soldado", "maciel", 9);
	militares[9] = cadastrar("soldado", "almeida", 10);
	
	opcao = menu();
	switch (opcao){
		case '1': 	printMes();
					escala(militares);
					
		case '2': break;
	}
	
}
