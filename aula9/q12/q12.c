#include <stdio.h>

int main(){
	int quantidade = 100, numeros[quantidade];
	double somatorio = 0;
	double resultado;
	int contador;
	for (contador = 0; contador<quantidade; contador++){
		printf("\nInsira o %d número: ", contador+1);
		scanf("%d", &numeros[contador]);
		somatorio += (double)numeros[contador];
	}
	resultado = somatorio/(double)(contador);
	printf("A média aritmética vale %lf", resultado);
}
