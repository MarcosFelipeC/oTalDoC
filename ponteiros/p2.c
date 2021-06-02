#include <stdio.h>

int fatorial (int n){
	if (n == 0) return 1;
	else return (n*fatorial(n-1));
}
void troca(int *a, int *b){ //declara variaveis do tipo ponteiro
	int aux; //escopo da função
	aux = *a;// aux é o valor apontado pela posição de memória apontada pela variável ponteiro
	*a = *b;
	*b = aux;
}

void main(){
	//escopo da função
	int a, b;
	printf("a e b: ");
	scanf ("%d %d", &a, &b); //o & é para pegar uma outra região fora do escopo da função
	troca(&a,&b); //manda a posição de memória
	printf("a e b: %d %d\n", a,b);
}
