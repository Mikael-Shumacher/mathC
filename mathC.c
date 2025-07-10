//
// Created by shumacher on 7/9/25.
//
#include <stdio.h>
#include "mathC.h"


void raiz2 (float num){
	float result = 0;
	int cont = 1;
	while((result*result) != num){
		if((result * result) > num){
			result = 0;
			cont = cont/10; 
		}
		if(num < 0){
			printf("Não existe raiz quadrada de número negativo, no conjunto dos Reais");
			break;
		}
		result += cont;
		printf("%f\n", result);
	}
	printf("\n%f\n", result);
}



int main(){
	float num1;
	printf("Digite um número para calcularmos a raiz quadrada: ");
	scanf("%f", &num1);
	raiz2(num1);
    return 0;
}



