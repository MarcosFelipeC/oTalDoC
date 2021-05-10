#include <stdio.h>
int main(){
	int numeroAlunos=0, qtdNotas=0;
	printf("Retorne o número de alunos: ");
	scanf("%i", &numeroAlunos);
	printf("\ne a quantidades de notas: ");
	scanf("%i", &qtdNotas);
	float notas[numeroAlunos][qtdNotas], media, mediaTotal=0;
	for (int contLinhas=0; contLinhas<numeroAlunos; contLinhas++){
		media=0;
		for (int contColunas=0; contColunas<qtdNotas; contColunas++){
			printf("\nRetorne a nota %d do aluno %d:",
				contColunas+1, contLinhas+1);
			scanf("%f", &notas[contLinhas][contColunas]);
			media += notas[contLinhas][contColunas]/(float)qtdNotas;
		}
		mediaTotal += media;
		printf("\nA media do aluno %d é %f: ", contLinhas+1, media);
	}
	mediaTotal = mediaTotal/(float)numeroAlunos;
	printf("\nA media total da turma foi de %f: ", mediaTotal); 
	return (0);
}
