#include <stdio.h>
int main(){
	int posicoes=10;
	float vetor1[posicoes], vetor2[posicoes], soma[posicoes];
	printf("Somador de vetores\n");
	//Atribuindo valores no vetor 1;
	for (int contador = 0; contador < posicoes; contador++){
		printf("\nDigite o %dº valor do vetor 1: ", contador+1);
		scanf("%f", &vetor1[contador]);
	}
	//Atribuindo valores no vetor 2;
	for (int contador = 0; contador < posicoes; contador++){
		printf("\nDigite o %dº valor do vetor 2: ", contador+1);
		scanf("%f", &vetor2[contador]);
	}
	//Somando e exibindo:
	printf("\n\nA soma dos vetores vale: \n");
	for (int contador = 0; contador < posicoes; contador++){
		printf("     ");
		soma[contador]=vetor1[contador]+vetor2[contador];
		printf("%f", soma[contador]);
	}
	printf("\n");
	return(0);

}
