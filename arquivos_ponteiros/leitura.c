#include <stdio.h>
#include <stdlib.h>

int main(){
        FILE *fp;
        char ch;
        if((fp = fopen ("texto.txt","r")) == NULL) {
                printf("Erro ao criar o arquivo.\n");
                exit(1);
        }
	ch = getc(fp);
        while(ch != '$'){
		putchar(ch);
		ch = getc(fp);
	}
        fclose(fp);
        return 0;
}
  
