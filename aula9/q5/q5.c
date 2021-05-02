#include <stdio.h>
int main(){
	int numeradorInicial = 37, denominadorInicial = 2, numeradorFinal = 1,
	denominadorFinal = 29;
	float resultadoSoma = 0;
	const int RAZAODENOMINADOR = 1;
	for (int contador = 0; contador<=denominadorFinal; contador++)
	resultadoSoma =+ (float)((numeradorInicial-contador)*(numeradorInicial-(contador+1)))/
	(float)(denominadorInicial+contador*RAZAODENOMINADOR);

	printf("O resultado de M é: %f",resultadoSoma);
}
