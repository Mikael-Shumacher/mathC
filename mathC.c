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


void baskhara(float a, float b, float c, float *x1, float *x2){
	float delta;
	delta = (b*b)-(4*a*c);
	*x1 = ((-1*b)+(raiz2(delta)))/(2*a);		
	*x2 = ((-1*b)-(raiz2(delta)))/(2*a);	
}

float sen(float rad){
	float seno;
	return seno;
}

void grafico(){
	int i, j;
	for(i=0; i<10; i++ ){
		printf("|");
		printf("-");
		if(i == 9){
			printf("\nO");
			for(j = 0; j<20; j++){
				printf("--");
				printf("|");			
			}
		}
		printf("\n");
	}
}


int main(){
	float x1, x2;
	baskhara(1, 2, -15, &x1, &x2);
	printf("%f \n", x1);
	printf("%f \n", x2);
	return 0;
}



