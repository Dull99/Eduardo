#include <stdio.h>
/*Faça um programa que receba a idade e a altura de várias pessoas, calcule e mostre a média das alturas
daquelas com mais de 50 anos. Para encerrar a entrada de dados, digite idade menor ou igual a zero.*/
int main(){
	int idade,contAlt=0;
	float altura, mediaAlt50=0;
	
	while(1){
		printf("Digite a idade:\n");
		scanf("%d", &idade);
		printf("Digite a altura:\n");
		scanf("%f", &altura);
		if(idade<=0){
				break;
		}
		if(idade > 50){
			mediaAlt50+=altura;
			contAlt++;
			}
			
	}
	printf("A media das alturas das pessoas com mais de 50 anos: %.2f\n", mediaAlt50/contAlt);
	
	return 0;
}

