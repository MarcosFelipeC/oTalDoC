#include <stdio.h>
int main(){
	int numeroAlunos=0, qtdNotas=0;
	printf("\nRetorne o número de alunos: ");
	scanf("%i", &numeroAlunos);
	printf("\ne a quantidades de notas: ");
	scanf("%i", &qtdNotas);
	float notas[numeroAlunos][qtdNotas+1], media;
	for (int contLinhas=0; contLinhas<numeroAlunos; contLinhas++){
		media=0;
		for (int contColunas=0; contColunas<qtdNotas; contColunas++){
			printf("\nRetorne a nota %d do aluno %d:",
				contColunas+1, contLinhas+1);
			scanf("%f", &notas[contLinhas][contColunas]);
			media += notas[contLinhas][contColunas]/(float)qtdNotas;
		}
		notas[contLinhas][qtdNotas] = media;
		printf("\nA media do aluno %d é %f: ", contLinhas+1, notas[contLinhas][qtdNotas]);
	}
	return (0);
}
