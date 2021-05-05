#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,delta;
	float x1,x2;
	printf("Digite o valor de a,b,c:\n");
	scanf("%f,%f,%f",&a,&b,&c);
	if (a==0){
		printf("\nO coeficinete angular deve ser diferente de zero!\n");
		return(99);
	}
	delta = (b*b - 4*(a*c));
	float raiz_delta;
	if (delta >= 0){
		raiz_delta = sqrt(delta);
		x1 = (-b+raiz_delta)/(2*a);
		x2 = (-b-raiz_delta)/(2*a);
		if (x1!=x2)printf("\nx1 = %f, x2 = %f\n",x1,x2);
		else printf("\nx1=x2=%f\n", x1);
	}
	else printf("\nO número não possui raizes reais\n");
	return(0);
}
