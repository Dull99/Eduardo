#include <stdio.h>
/*Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. Finalize digitando
idade igual a zero.*/
int main(){
	int idade, cont;
	double quantidade, total=0;
	
	while(cont <1000){
		printf("Digite a idade: \n");
		scanf("%d", &idade);
	if(idade == 0){
		break;
	}	
	quantidade++;
		total = total + idade;
		cont++;
	}
	printf("Media = %.2lf\n", total/quantidade);
	printf("%.2f", quantidade);

	return 0;
}
