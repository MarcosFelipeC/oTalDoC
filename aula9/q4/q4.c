#include <stdio.h>
int main(){
	int numeradorInicial = 1, denominadorInicial = 1, numeradorFinal = 99,
	denominadorFinal = 50;
	float resultadoSoma = 0;
	const int RAZAONUMERADOR = 2, RAZAODENOMINADOR = 1;

	for (int contador = 0; contador< denominadorFinal; contador++){
		resultadoSoma += (float)(numeradorInicial+contador*RAZAONUMERADOR)/
		(float)(denominadorInicial+contador*RAZAODENOMINADOR);
		printf("\nContador: %i, ",contador);
                printf("Soma: %f\n", resultadoSoma);
	}

	printf("O resultado de A é: %f",resultadoSoma);
}
