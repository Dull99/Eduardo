#include <stdio.h>

/*Fa�a um programa que receba dez n�meros, calcule e mostre a soma dos n�meros pares e a soma dos
n�meros primos.*/
int main(){
	
	int num =0, somaPa=0, somaPr=0, i=1;
	
	while(i<=10){
		printf("Digite o numero: %d\n", i);
		scanf("%d", &num);
		if(num % 2==0){
		somaPa +=num;
	}else{
		somaPr+=num;
	}
		i++;
	}
	printf("A soma dos numeros pares sao: %d\n", somaPa);
	printf("A soma dos numeros imapares sao:%d\n", somaPr);
	
	}
	
	
