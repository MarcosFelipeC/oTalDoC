#include <stdio.h>
int main(){
	double fatorialTotal = 1;
	int numerador = 100;
	double resultadoS = 0;
	for (int controle = 0; controle < 100; controle++){
		if (controle==0) fatorialTotal = 1;
		else{
			for (int controle1 = 1; controle1<=controle; controle1++){
                		fatorialTotal *= (double)controle1;
        		}
		}
		resultadoS += ((double)numerador-(double)controle)/((double)fatorialTotal);
		fatorialTotal = 1;
	}
	printf("O resultado de S é %f", resultadoS);
}
