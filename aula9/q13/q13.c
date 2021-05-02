#include <stdio.h>

int main(){
	const int tempoMV = 50;
	float massa = 0, massaFinal = 0;

	printf("Contador de meia vida\nDigite a massa inicial em gramas: ");

	scanf("%f", &massa);

	int contador = 0;
	for (float i = massa; i>=0.5; i/2){
		contador++;
		massaFinal = i;
	}
	printf("\nO tempo necessário para que a massa %f se torne %f foi de %f segundos.",massa, massaFinal, contador*(float)tempoMV);
	return(0);

}
