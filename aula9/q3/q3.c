#include <stdio.h>
void main(){
	int n1, cont=1;
	printf("Programa que calcula fatorial\n");
	printf("Insira um número: ");
	scanf ("%d", &n1);

	if (n1<0) printf("Erro! O número n pode ser negativo\n");
	else if (n1 == 0) printf ("0! = 1\n");
	else{
		printf("\n");
		for (int controle = n1; controle>0; controle --){
			printf("*%d",controle);
			cont = cont*controle;
		}
		printf (" = %d\n", cont);
	}
}
