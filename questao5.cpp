#include <stdio.h>
/*Faça um programa que mostre as tabuadas dos números de 1 a 10.*/
int main(){
	int numero = 1;
	int multiplicador =1;
	while(numero <=10){
		printf("\nA Tabuada do %d:\n", numero);
	while(multiplicador <=10){
		printf("%d x %d = %d\n", numero, multiplicador, numero * multiplicador);
		multiplicador++;
	}
		multiplicador = 1;
	numero++;
	}
	return 0;
}
