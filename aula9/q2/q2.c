#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float c1,c2,c3,triangulo;
	printf("Programa que verifica se é triangulo\n");
	printf("Informe o comprimento c1,c2,c3: ");
	scanf("%f,%f,%f", &c1,&c2,&c3);
	if (c1<=0||c2<=0||c3<=0) printf("\n não é um triangulo!\n");
	else if (c1<abs(c2-c3) && c1>(c2+c3)) printf("\n não é um triangulo!\n");
	else if (c2<abs(c1-c3) && c2>(c1+c3)) printf("\n não é um triangulo!\n");
	else if (c3<abs(c2-c1) && c3>(c2+c1)) printf("\n não é um triangulo!\n");
	//else if (c1 == c2 && c1==c3) printf("\n não é um triangulo!\n");
	else {
		printf("\né um triangulo!\n");

		if (c1 == c2 && c2 == c3 && c1 == c3) printf ("O triangulo é equilátero\n");
		else if (c1 == c2) printf("O triangulo é isoceles\n");
		else if (c2 == c3) printf("O triangulo é isoceles\n");
		else if (c1 == c3) printf("O triangulo é isoceles\n");
		else printf ("O triangulo é escaleno\n");
	}
	return(0);
}
