#include <stdio.h>
#include <math.h>
int verificaDelta(float a, float b, float c){
	float delta = (b*b - 4*(a*c));
	if (delta > 0) return (1);
	else if (delta == 0) return (0);
	else return (-1);
}

int main(){
	float a,b,c;
	float x1,x2;
	printf("Digite o valor de a,b,c:\n");
	scanf("%f,%f,%f",&a,&b,&c);
	if (a==0){
		printf("\nO coeficinete angular deve ser diferente de zero!\n");
		return(99);
	}
	printf("Valor: %d\n", verificaDelta(a,b,c));
	return(0);
}
