#include <stdio.h>
/*Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os
números que foram digitados.*/
int main(){
	int numero, contador=1, i=1, verificador=0,contePrimo=0;
	while(contador<=10){
		printf("Digite um numero:\n");
		scanf("%d", &numero);
		while(i <=numero){
			if(numero%i == 0){
			verificador++;
			}
		i++;
		}
		
		if(verificador == 2 || numero ==1){
			printf("%d - Numero e primo\n", numero);
			contePrimo++;
		}else{
			printf("%d - nao primo \n", numero);
		}
		i=1;
		verificador=0;
	}
}
