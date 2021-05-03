#include <stdio.h>
#include <stdlib.h>
int main(){
        int numerador = 4, denominadorInicial = 1, denominadorFinal = 29;
        float resultadoSoma = 0;
        const int RAZAODENOMINADOR = 2;
        for (int contador = 0; contador<denominadorFinal; contador+=RAZAODENOMINADOR){
                resultadoSoma += (float)numerador/(float)(denominadorInicial+contador);
		numerador*=(-1);
		printf("\nContador: %i, ",contador);
		printf("Soma: %f\n", resultadoSoma);
	}
        printf("O resultado de pi é: %f",resultadoSoma);
}
