#include <stdio.h>
/*Fa�a um programa que receba dez n�meros inteiros e mostre a quantidade de n�meros primos dentre os
n�meros que foram digitados.*/
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
