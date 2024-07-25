#include <stdio.h>
/*Faca um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o
menor valor do conjunto. Considere que:
Å° para encerrar a entrada de dados, deve ser digitado o valor zero;
Å° para valores negativos, deve ser enviada uma mensagem;
Å° os valores negativos ou iguais a zero nao entrarao nos calculos*/
int main(){
	
	float valor, valorMa=0, valorMe=1000;
	
	while(1){
		
		printf("Digite o valor:\n");
		scanf("%f", &valor);
		
		if(valor==0){
			break;
		}
		if(valor<0){
			printf("valor invalido\n");
			continue;
		}
		if(valor>valorMa){
			valorMa=valor;
		}else if(valor<valorMe){
			valorMe=valor;
		}
		
	}
	
	printf("O maior valor = %.2f\n", valorMa);
	printf("O menor valor = %.2f", valorMe);
}
