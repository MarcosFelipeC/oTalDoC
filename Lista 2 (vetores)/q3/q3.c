#include<stdio.h>
int main(){
	int posicoes = 15;
	float vetor[posicoes];
	printf("Escreve na ordem crescente.");
	//Leitura e atribuição dos valores
	for (int contador = 0; contador < posicoes; contador++){
                printf("\nDigite o %dº valor do vetor: ", contador+1);
                scanf("%f", &vetor[contador]);
        }
	//Colocando na ordem decrescente
	printf("\nA ordem é: \n");
	for (int contador1 = 0; contador1 < posicoes; contador1++){
		float maior = vetor[contador1];//Separa o elemento a ser comparado
		int  maiorPosicao = contador1;//Separa a posição a ser comparada
        	for (int contador2 = 0; contador2 < posicoes; contador2++){
        		if (vetor[contador2]>maior){//Verifica elemento móvel com o elemento fixado
				maior = vetor[contador2];//atribui o maior valor (será o novo elemento de comp.)
				maiorPosicao = contador2;
			}
		}
	        //Atribui zero no maior valor obtido para nao interferir em outras leituras
		vetor[maiorPosicao] = 0;
		printf("    %.2f", maior);
        }
	printf("\n");

	return(0);
}
