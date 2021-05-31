#include <stdio.h>
#include <math.h>

float radianos(float graus){
	return(graus*3,14/180);
}

int main(void){
	float angulo;
	printf("Entre com o Ângulo: ");
	scanf("%f",&angulo);
	printf("Ângulo: %f, seno: %f, cosseno: %f, tangente: %f\n", angulo, sin(radianos(angulo)), cos(radianos(angulo)), tan(radianos(angulo)));
	return(0);
}
