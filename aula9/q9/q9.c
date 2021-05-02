#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(){

	double resultado=0, x=0, fatorial=1;
	int expoente=1, denominador=1;
	printf("Retorne um valor para X:\n");
	scanf("%lf",&x);
	const int RAZAO = 2;
	for (int contador = 0; contador<=13; contador+= RAZAO){
		for (int contador1 = 1; contador1<=contador; contador1++)fatorial *= contador1;
		resultado += (double)(pow(x,(expoente+contador)))/(double)fatorial;
		fatorial = 1;
		x*=(-1);
	}
	printf("\nO valor de C é: %lf\n",resultado);

}
