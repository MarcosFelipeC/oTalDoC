#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float x=0, resultadoCosseno=0, fatorial=1;
	const int RAZAO = 2;
	int numeradorInicial = 1, denominadorInicial = 1;
	printf ("Retorne um valor para X; ");
	scanf ("%f", &x);
	for (int contador = 0; contador <= 20; contador += RAZAO){
		for (int contador1 = 1; contador1<=contador; contador1++) fatorial *= contador1;
		resultadoCosseno += (pow(x,contador)*numeradorInicial)/(fatorial);
		numeradorInicial *= (-1);
		printf("\nContador: %i, Soma: %f", contador, resultadoCosseno);
	}
	printf ("\nCOSSENO: %f",resultadoCosseno);

}
