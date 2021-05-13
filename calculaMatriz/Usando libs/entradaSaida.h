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
