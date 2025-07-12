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


float eleva(float num, int pot){
	float num2 = 1;
	if(pot == 1)
		return num;
	else if (pot ==0)
		return num2;
	else if (pot > 1){
		for(int i = 0; i < pot; i++){
			num2 = num2 * num;
		}
		return num2;
	}
}


int main(){
	/*float num1;
	printf("Digite um número para calcularmos a raiz quadrada: ");
	scanf("%f", &num1);
	raiz2(num1);
	*/
	float num1;
	int exp;
	printf("Digite um número e o expoente: ");
	scanf("%f %d", &num1, &exp);
	printf("\n%f\n", eleva(num1, exp));
    return 0;
}



