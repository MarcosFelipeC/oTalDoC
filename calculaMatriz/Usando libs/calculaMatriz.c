#include <stdio.h>
#include "entradaSaida.h"
#include "operacional.h"

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

