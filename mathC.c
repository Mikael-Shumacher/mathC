//
// Created by shumacher on 7/9/25.
//
#include <stdio.h>
#include "mathC.h"

void lerint(char string[255], int variavel){
	printf(string);
	scanf("%d", &variavel);
	printf("\n");
}


void lerfloat(char string[255], float variavel){
	printf(string);
	scanf("%f", &variavel);
	printf("\n");
}


void lerchar(char string[255], char variavel){
	printf(string);
	scanf("%c", &variavel);
	printf("\n");
}



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

float raiz2 (float num){
	if(num < 0){
		printf("Não existe raiz quadrada de número negativo, no conjunto dos Reais");
		return num;
	}
	float result = 0;
	float cont = 1;
	float precisao = 0.0001;
	while((eleva(result, 2)) != num){
		if((eleva(result, 2)) > num){
			if(cont >= precisao)
				cont /= 10;
			result -= cont;
		}
		else if((eleva(result, 2)) < num){
			result += cont;
		}
		if((eleva(result, 2) - num) > 0 && (eleva(result, 2) - num) < 0.01){
			break;
		}
	}
	return result;
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


float baskhara(float a, float b, float c){
	float delta,x1,x2;
	delta = (b*b)+(4*a*c);
	x1 = ((-1*b)+(raiz2(delta)))/(2*a);		
	x2 = ((-1*b)-(raiz2(delta)))/(2*a);	
	return x1, x2;
}


int main(){
	float num1;
	printf("Digite um número para calcularmos a raiz quadrada: ");
	scanf("%f", &num1);
	printf("Resultado: %f\t Quadrado:%f ", raiz2(num1), eleva(raiz2(num1), 2));
	/*float num1;
	printf("Digite um número: ");
	scanf("%f", &num1);
	printf("O valor aproximado de [%f] é igual a %d\n", num1,aproxima(num1))*/;
	return 0;
}



