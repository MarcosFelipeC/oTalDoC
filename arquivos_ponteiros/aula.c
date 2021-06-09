#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[]){
	FILE *fp;
	char ch;
	if (argc != 2){
		printf("Erro no numero de argumentos.\n");
		exit(2);
	}
	if((fp = fopen (argv[1],"w")) == NULL) {
		printf("Erro ao criar arquivo.\n");
		exit(1);
	}
	do{
		ch = getchar();
		putc(ch,fp);
	}
	while(ch != '$');
	fclose(fp);
	return 0;
}
