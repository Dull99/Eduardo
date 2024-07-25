#include <stdio.h>
/*Faca um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
Å° a quantidade de pessoas com idade superior a 50 anos;
Å° a media das alturas das pessoas com idade entre 10 e 20 anos;
Å° a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.*/
int main(){
	int idade, i=1, contIdadeSup50 = 0, contadorIdade10a20 = 0, contadorPesoM40 = 0;
	float altura, peso, somaAlt10a20=0, mediaAlt10a20, porcentagemPesoInf40;
	while(i<5){
		printf("\nDigite os dados:%d\n", i);
		printf("Digite a idade:\n");
		scanf("%d", &idade);
		printf("Digite o peso:\n");
		scanf("%d", &peso);
		printf("Digite a altura:\n");
		scanf("%d", &altura);
		
		if(idade>50){
			contIdadeSup50++;
		}
		if(idade>=10 && idade<=20){
			somaAlt10a20 += altura;
			contadorIdade10a20++;
		}
		if(peso<40){
			contadorPesoM40++;
		}
		i++;
		
	}
	mediaAlt10a20 = somaAlt10a20 / contadorIdade10a20;
	porcentagemPesoInf40 = (contadorPesoM40 / 5)*100);
	
	printf("A quantidade de pessoas acima de 50 anos: %d\n", contIdadeSup50);
	printf("A media de altura das pessoas entre 10 e 20 anos: %.2f\n", mediaAlt10a20);
	printf("A porcentagem de pessoas com peso inferior a 40kg: %.2f\n", porcentagemPesoInf40);
}
