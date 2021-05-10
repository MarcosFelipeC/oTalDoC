#include <stdio.h>

int main(){
	const float TEMPO_MV = 50.0;
	float massa = 0, massaFinal = 0;

	printf("Contador de meia vida\nDigite a massa inicial em gramas: ");

	scanf("%f", &massa);

	int contador1 = 0;
	for (double contador = massa; contador>=0.5; contador/2.0){
		contador1++;
		massaFinal = contador;
	}
	printf("\nO tempo necessário para que a massa %f se torne %f foi de %f segundos.",massa, massaFinal, contador1*TEMPO_MV);
	return(0);

}
