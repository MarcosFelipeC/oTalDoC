#include <stdio.h>
int fatorial (int n){
	if (n <= 1){
		return 1;
	}
	else{
		if((n-1)>0)printf("* %d",(n-1));
		return (n*fatorial(n-1));
	}
}
int main(){
	int n1, resultado=1;
	printf("Programa que calcula fatorial\n");
	printf("Insira um número: ");
	scanf ("%d", &n1);

	if (n1<0) printf("Erro! O número n pode ser negativo\n");
	else{
		printf ("%d", n1);
		resultado = fatorial(n1);
		printf("\nO resultado do fatorial vale: %d\n", resultado);
	}
	return (0);
}
