#include <stdio.h>

int impar_par(int numero){
	if (numero%2 > 0) return 0;
	else return 1;
}

int main(){
	int numero;

	printf("\nInsira um número inteiro: ");
	scanf("%d", &numero);
	printf("O número é: %d\n",impar_par(numero));

}
