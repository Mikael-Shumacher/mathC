//
// Created by shumacher on 7/9/25.
//
#include <stdio.h>
#include "mathC.h"




float absolut(float num){
	if(num >= 0)
		return num;
	else
		return num*(-1);
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

void raiz2 (float num){
	float result = 0;
	int cont = 1;
	while(eleva(result, 2) != num){
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

int aproxima(float num){
	int num2 = absolut(num);
	float resultado = absolut(num) - num2;
	if(num >= 0){
		if(resultado >= 0.5)
			return num2+1;
		else
			return num2;	
	}else{
		if(resultado >= 0.5)
			return (num2+1)*(-1);
		else
			return (num2)*(-1);
	}
	
}



int main(){
	/*float num1;
	printf("Digite um número para calcularmos a raiz quadrada: ");
	scanf("%f", &num1);
	raiz2(num1);
	*/
	float num1;
	printf("Digite um número: ");
	scanf("%f", &num1);
	printf("O valor aproximado de [%f] é igual a %d\n", num1,aproxima(num1));
    return 0;
}



