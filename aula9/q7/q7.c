#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	float x=0, b=0;
	int denominadorInicial = 1, denominadorFinal = 25, expoenteInicial = 25, expoenteFinal=1;
	printf("Retorne um valor para X: ");
	scanf("%f",&x);
	for (int contador = 0; contador < denominadorFinal; contador++){
		if (!contador%2) b -= (float)(pow(x,expoenteInicial-contador)/(denominadorInicial+contador));
		else b += pow(x,expoenteInicial-contador)/(denominadorInicial+contador);
	}
	printf("O valor de B é: %f\n",b);
}
