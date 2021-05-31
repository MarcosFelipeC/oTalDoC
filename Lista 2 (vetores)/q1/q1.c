#include <stdio.h>
int main(){
	int posicoes = 10;
	float vetor[posicoes], media=0;
	printf("Calculadora de medias\n");
	//Atribuição dos numeros no vetor
	for (int contador = 0; contador < posicoes; contador++){
		printf("\nDigite o numero %d: ",contador+1);
		float valor;
		scanf("%f",&valor);
		vetor[contador]=valor;
		media += valor/posicoes;
	}
	printf("\nA média dos %d numeros vale: %.4f",posicoes,media);
	//Comparador de média com os numeros do vetor
	for (int contador = 0; contador < posicoes; contador++){
		if (vetor[contador]>media)
		printf("\nO %dº número, de valor %.4f, é maior que a média(%f).", contador+1, vetor[contador], media);
	}
	return(0);

}
