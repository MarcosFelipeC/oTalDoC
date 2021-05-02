#include <stdio.h>
#include <stdlib.h>
int main(){
        float numerador = 4.0, denominadorInicial = 1, denominadorFinal = 29.0;
        float resultadoSoma = 0;
        const float RAZAODENOMINADOR = 2.0;
        for (int contador = 0; contador<=denominadorFinal; contador++){
                if (contador%2>0)resultadoSoma -= (numerador/
			(denominadorInicial+contador*RAZAODENOMINADOR));
		else resultadoSoma -= (numerador/(denominadorInicial+contador*RAZAODENOMINADOR));
	}
        printf("O resultado de A é: %f",resultadoSoma);
}
