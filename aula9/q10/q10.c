#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(){

	double x=0,fatorial=1,resultado=0;

	printf("Retorne um valor para x: \n");
	scanf("%lf",&x);

	for (int contador = 0; contador <=20; contador++){
		if (contador>0)for (int contador1 = 1; contador1 <= contador; contador1++)fatorial*=contador1;
		resultado += (double)pow(x,contador)/(double)fatorial;
	}

	printf("\nO resultado de e^x é: %lf\n", resultado);

}

