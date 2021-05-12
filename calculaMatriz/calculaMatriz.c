#include <stdio.h>

void preencheMatriz(int qtdLinhas, int qtdColunas, float matriz[qtdLinhas][qtdColunas]){
	for (int linha = 0; linha < qtdLinhas; linha++){
                for (int coluna = 0; coluna < qtdColunas; coluna++){
                        printf("\nRetorne o elemento de linha %d e coluna %d: ", linha+1, coluna+1);
			scanf("%f", &matriz[linha][coluna]);
                }
        }
}

void exibeMatriz(int qtdLinhas, int qtdColunas, float matriz[qtdLinhas][qtdColunas]){
        for (int linha = 0; linha < qtdLinhas; linha++){
		printf("\n");
                for (int coluna = 0; coluna < qtdColunas; coluna++){
                        printf("%f ", matriz[linha][coluna]);
                }
        }

}

void calculaSoma(){
	int qtdLinhas, qtdColunas;
	float matriz1[qtdLinhas][qtdColunas],
	      matriz2[qtdLinhas][qtdColunas],
	      matrizSoma[qtdLinhas][qtdColunas];
	printf("Insira a ordem [linhas,colunas]: ");
	scanf("%d, %d", &qtdLinhas, &qtdColunas);

	printf("\n+++Retorne os elementos da matriz 1+++ ");
	preencheMatriz(qtdLinhas,qtdColunas, matriz1);
	printf("\nMatriz Recebida:");
	exibeMatriz(qtdLinhas,qtdColunas,matriz1);
	printf("\n+++Retorne os elementos da matriz 2+++ ");
	preencheMatriz(qtdLinhas,qtdColunas, matriz2);
	exibeMatriz(qtdLinhas,qtdColunas,matriz2);

	printf("\n\n+++Calculo da Soma+++");

	for (int linhaM = 0; linhaM < qtdLinhas; linhaM++){
		printf("\n linha: %d", linhaM);
                for (int colunaM = 0; colunaM < qtdColunas; colunaM++){
			matrizSoma[linhaM][colunaM] = 0;
			matrizSoma[linhaM][colunaM] = (matriz2[linhaM][colunaM] + matriz1[linhaM][colunaM]);
			printf("\n%f",  matrizSoma[linhaM][colunaM]);
                }
        }

	printf("\nO Calculo da soma é a matriz: ");
	exibeMatriz(qtdLinhas,qtdColunas,matrizSoma);

}

void calculaSubtracao(){

}

void tipoMultiplicacao(){

}

void calculaDeterminante(){

}

int main (){
	int opcao = 0;
	//system("clear");
	printf("+++ Calculadora de Matriz +++");
	printf("\nRetorne uma opção de 1 à 4:");
	printf("\n1 - Soma de matrizes, 2 - Subtração de Matrizes, 3 - Multiplicação, 4 - Cálculo de Determinantes\n");
	scanf("%d", &opcao);
	if (opcao == 1) calculaSoma();
	else if (opcao == 2) calculaSubtracao();
	else if (opcao == 3) tipoMultiplicacao();
	else if (opcao == 4) calculaDeterminante();
	else printf("Valor inválido!");
	return (0);
}

