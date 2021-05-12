#include <stdio.h>

void preencheMatriz(int qtdLinhas, int qtdColunas, float matriz[qtdLinhas][qtdColunas]){
	for (int linha = 0; linha < qtdLinhas; linha++){
                for (int coluna = 0; coluna < qtdColunas; coluna++){
                        printf("\nRetorne o elemento de linha %d e coluna %d: ", linha+1, coluna+1);
			scanf("%f", &matriz[linha][coluna]);
                }
        }
}

void exibeMatriz(int qtdLinhas, int qtdColunas, float matriz[qtdLinhas][qtdColunas], int recebimento){
	if (recebimento) printf("\nMatriz Recebida: ");
	else printf("\n");
        for (int linha = 0; linha < qtdLinhas; linha++){
		printf("\n	");
                for (int coluna = 0; coluna < qtdColunas; coluna++){
                        printf("%0.2f ", matriz[linha][coluna]);
                }
        }
	printf("\n");

}

void calculaSoma(){
	int qtdLinhas, qtdColunas;
	printf("Insira a ordem [linhas,colunas]: ");
	scanf("%d,%d", &qtdLinhas, &qtdColunas);
	float matriz1[qtdLinhas][qtdColunas],
              matriz2[qtdLinhas][qtdColunas],
              matrizSoma[qtdLinhas][qtdColunas];

	printf("\n+++Retorne os elementos da matriz 1+++ ");
	preencheMatriz(qtdLinhas,qtdColunas, matriz1);
	exibeMatriz(qtdLinhas,qtdColunas,matriz1,1);
	printf("\n+++Retorne os elementos da matriz 2+++ ");
	preencheMatriz(qtdLinhas,qtdColunas, matriz2);
	exibeMatriz(qtdLinhas,qtdColunas,matriz2,1);

	printf("\n\n+++Calculo da Soma+++");

	for (int linhaM = 0; linhaM < qtdLinhas; linhaM++){
                for (int colunaM = 0; colunaM < qtdColunas; colunaM++){
			matrizSoma[linhaM][colunaM] = (matriz1[linhaM][colunaM] + matriz2[linhaM][colunaM]);
                }
        }

	printf("\nO Calculo da soma é a matriz: ");
	exibeMatriz(qtdLinhas,qtdColunas,matrizSoma,0);
	printf("\n");

}

void calculaSubtracao(){
	int qtdLinhas, qtdColunas;
	printf("Insira a ordem [linhas,colunas]: ");
	scanf("%d,%d", &qtdLinhas, &qtdColunas);
	float matriz1[qtdLinhas][qtdColunas],
              matriz2[qtdLinhas][qtdColunas],
              matrizSubtracao[qtdLinhas][qtdColunas];

	printf("\n+++Retorne os elementos da matriz 1+++ ");
	preencheMatriz(qtdLinhas,qtdColunas, matriz1);
	exibeMatriz(qtdLinhas,qtdColunas,matriz1,1);
	printf("\n+++Retorne os elementos da matriz 2+++ ");
	preencheMatriz(qtdLinhas,qtdColunas, matriz2);
	exibeMatriz(qtdLinhas,qtdColunas,matriz2,1);

	printf("\n\n+++Calculo da Subtração+++");

	for (int linhaM = 0; linhaM < qtdLinhas; linhaM++){
                for (int colunaM = 0; colunaM < qtdColunas; colunaM++){
			matrizSubtracao[linhaM][colunaM] = (matriz1[linhaM][colunaM] - matriz2[linhaM][colunaM]);
                }
        }

	printf("\nO Calculo da subtração é a matriz: ");
	exibeMatriz(qtdLinhas,qtdColunas,matrizSubtracao,0);
	printf("\n");
}

void tipoMultiplicacao(){
	int opcao=0;
	printf("\nRetorne a operação: ");
	printf("\n1 - Produto Matriz Escalar, 2 - Produto Matriz x Matriz: ");
	scanf("%d", &opcao);
	if (opcao == 1){
		int qtdLinhas, qtdColunas;
		printf("Insira a ordem [linhas,colunas]: ");
		scanf("%d,%d", &qtdLinhas, &qtdColunas);
		float matriz1[qtdLinhas][qtdColunas], escalar=0, matrizMultiplicacao[qtdLinhas][qtdColunas];
		printf("\nRetorne o Escalar:");
		scanf("%f",&escalar);

		printf("\n+++Retorne os elementos da matriz 1+++ ");
		preencheMatriz(qtdLinhas,qtdColunas, matriz1);
		exibeMatriz(qtdLinhas,qtdColunas,matriz1,1);

		printf("\n\n+++Calculo da Multiplicação+++");

		for (int linhaM = 0; linhaM < qtdLinhas; linhaM++){
                	for (int colunaM = 0; colunaM < qtdColunas; colunaM++){
				matrizMultiplicacao[linhaM][colunaM] = matriz1[linhaM][colunaM]*escalar;
                	}
        	}

		printf("\nO Calculo da soma é a matriz: ");
		exibeMatriz(qtdLinhas,qtdColunas,matrizMultiplicacao,0);
		printf("\n");

	}
	else if (opcao == 2){
		int qtdLinhasM1, qtdColunasM1, qtdLinhasM2, qtdColunasM2;

		while(1){
			printf("Insira a ordem da matriz 1 [linhas,colunas]: ");
			scanf("%d,%d", &qtdLinhasM1, &qtdColunasM1);
			printf("Insira a ordem da matriz 2 [linhas,colunas]: ");
			scanf("%d,%d", &qtdLinhasM2, &qtdColunasM2);
			if (qtdColunasM1 == qtdLinhasM2) break;
			printf("O numero de colunas da matriz 1 deve ser igual ao numero de linhas da matriz 2!");
		}

		float matriz1[qtdLinhasM1][qtdColunasM1],
              	      matriz2[qtdLinhasM2][qtdColunasM2],
              	      matrizMultiplicacao[qtdLinhasM1][qtdColunasM2];

		printf("\n+++Retorne os elementos da matriz 1+++ ");
		preencheMatriz(qtdLinhasM1,qtdColunasM1, matriz1);
		exibeMatriz(qtdLinhasM1,qtdColunasM1,matriz1,1);
		printf("\n+++Retorne os elementos da matriz 2+++ ");
		preencheMatriz(qtdLinhasM2,qtdColunasM2, matriz2);
		exibeMatriz(qtdLinhasM2,qtdColunasM2,matriz2,1);

		printf("\n\n+++Calculo da Multiplicação+++");

		for (int linhaM = 0; linhaM < qtdLinhasM1; linhaM++){
                	for (int colunaM = 0; colunaM < qtdColunasM2; colunaM++){
				matrizMultiplicacao[linhaM][colunaM] = 0;
				int i = 0, j = 0;
				do{
					matrizMultiplicacao[linhaM][colunaM] +=
						matriz1[linhaM][j]*matriz2[i][colunaM];
					i++;
					j++;
				}while(i < qtdLinhasM2 | j < qtdColunasM1);
                	}
        	}

		printf("\nO Calculo da multiplicação das matrizes é: ");
		exibeMatriz(qtdLinhasM1,qtdColunasM2,matrizMultiplicacao,0);
		printf("\n");
	}
	else printf("Opção Inválida!");
}

void calculaDeterminante(){
	int ordem=0;
	do{
		printf("\nRetorne a ordem da matriz [ < 3] : ");
		scanf("%d", &ordem);
	}while(ordem > 3);
	float determinante=0;
	switch (ordem){
		case 1:
			printf("\nRetorne a matriz de ordem 1: ");
			float matriz = 0;
			scanf("%f",&matriz);
			printf("\nO det(matriz) = %0.2f\n", matriz);
			break;
		case 2:
			printf("\nRetorne a matriz de ordem 2: ");
			float matriz1[2][2];
			preencheMatriz(2,2, matriz1);
			exibeMatriz(2,2, matriz1, 1);
			determinante = (matriz1[0][0]*matriz1[1][1]) - (matriz1[0][1]*matriz1[1][0]);
			printf("\nO det(matriz) = %0.2f\n", determinante);
			break;
		case 3:
			printf("\nRetorne a matriz de ordem 3: ");
			float matriz2[3][3];
			preencheMatriz(3,3, matriz2);
			exibeMatriz(3,3, matriz2, 1);
			determinante = (matriz2[0][0]+matriz2[1][1]+matriz2[2][2] +
					matriz2[0][1]+matriz2[1][2]+matriz2[2][0] +
					matriz2[0][2]+matriz2[1][0]+matriz2[2][1]) -
				       (matriz2[0][2]+matriz2[1][1]+matriz2[2][0] +
					matriz2[0][0]+matriz2[1][2]+matriz2[2][1] +
					matriz2[0][1]+matriz2[1][0]+matriz2[2][2]);
			printf("\nO det(matriz) = %0.2f\n", determinante);
			break;
		default:
			printf("\nRetorne um valor válido!\n");
	}
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

