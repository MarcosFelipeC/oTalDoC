#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	FILE *fp;
	float A,B,C,x1,x2,x,inc,Delta,R1,R2;
	char ch;
	int i;

	if(argc != 8){
		printf("Falha dos argumentos.\n");
		printf("Os argumentos são: Programa, nomeArqu, A, B, C, X1, X2, INC\n");
		exit(1);
	}

	if((fp = fopen (argv[1],"w"))==NULL){
		printf("Erro ao abrir arquivo.");
		exit(2);
	}
	A = atof(argv[2]);
	B = atof(argv[3]);
	C = atof(argv[4]);
	x1 = atof(argv[5]);
	x2 = atof(argv[6]);
	inc = atof(argv[7]);

	Delta = sqrt(B*B - 4*A*C);
	R1 = (-B+sqrt(Delta))/(2*A);
	R2 = (-B-sqrt(Delta))/(2*A);

	fprintf(fp,"Simulação de Eq. 2o Grau\n");
	fprintf(fp,"A\tB\tC\tX1\tX2\tINC\n");
	fprintf(fp,"%f\t%f\t%f\t%f\t%f\t%f\n",A,B,C,x1,x2,inc);
	fprintf(fp,"Raiz 1\tRaiz 2\n");
	fprintf(fp,"%f\t%f\t\n\n",R1,R2);

	for(i = 1;;i++){
		x = x1 + i*inc;
		fprintf(fp,"%f\t%f\t\n",x,(A*x*x+B*x+C));
		if(x>=x2) break;
	}

	fclose(fp);


}
