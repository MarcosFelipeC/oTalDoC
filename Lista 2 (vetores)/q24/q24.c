#include <stdio.h>
int divisivel(int numero1, int numero2){
        if (numero1%numero2 > 0) return 0;
        else return 1;
}

int main(){
        int numero1, numero2;

        printf("\nInsira dois números inteiros: ");
        scanf("%d %d", &numero1, &numero2);
        printf("O número é: %d\n",divisivel(numero1, numero2));

}


