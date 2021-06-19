#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	FILE *fp;
	char ch;
	if (argc != 2){
		printf("Numero de argumentos incorretos(Requer arq.txt)\n");
		exit(1);
	}
	if((fp = fopen (argv[1],"r")) == NULL) {
                printf("Erro ao abrir o arquivo.\n");
                exit(1);
        }
	ch = getc(fp);
	while(ch != '$'){
		putchar(ch);
		ch = getc(fp);

	}
	fclose(fp);
	return(0);
}
