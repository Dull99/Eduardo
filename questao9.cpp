#include <stdio.h>
/*Faca um programa que receba dez idades, pesos e alturas, calcule e mostre:
Å° a media das idades das dez pessoas;
Å° a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro; e
Å° a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de
1,90 m.*/
int main(){
	int i=1, idade, totalP=10,somaIdade=0, somaP90_150=0,somaP10a20_190=0;
	float mediaIdade=0, qtdPsup90_inf150m=0, porcentP10_30M190, peso,altura;
	
	while(i<=10){
		printf("\nDigite os dados: %d\n", i);
		printf("Digite a idade da pessoa\n");
		scanf("%d", &idade);
		printf("Digite o peso da pessoa\n");
		scanf("%f", &peso);
		printf("Digite a altura da pessoa\n");
		scanf("%f", &altura);
		
		somaIdade = somaIdade+idade;
		
		if(peso>90 && altura<150){
			somaP90_150 = somaP90_150+1;
			
		}
		if(idade >=10 && idade<=30 && altura>190){
			somaP10a20_190 = somaP10a20_190+1;
			
		}
		
		i++;
	}
	mediaIdade= somaIdade/totalP;
    porcentP10_30M190= (somaP10a20_190 * 100) / totalP;
	printf("A media das idades: %.2f\n",mediaIdade);
	printf("A quantidade de pessoas com peso superior a 90 e altura inferior a 150 metros e: %d \n", somaP90_150);
	printf("Aporcentagem de pessoascom idade entre 10 e 30 anos e altura superios a 190 e: %.2f\n", porcentP10_30M190);
	
}
