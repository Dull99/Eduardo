#include <stdio.h>
/*Faca um programa que receba a idade, o peso, a altura, a cor dos olhos (A . azul; P . preto; V . verde; e
C . castanho) e a cor dos cabelos (P . preto; C . castanho; L . louro; e R . ruivo) de seis pessoas, e que
calcule e mostre:
Å° a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
Å° a media das idades das pessoas com altura inferior a 1,50 m;
Å° a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
Å° a quantidade de pessoas ruivas e que nao possuem olhos azuis.*/
int main(){
	int  i=1, idade, qtdPessoas50_60, pessoasSup50_60=0, totalP=6, qtdPruivasOaz=0;
	float peso = 0, altura=0, mIdadePalturaInf150, idadePaltInf150 = 0, porcentPolhosAz, pessoasOlhosAz;
	char corOlhos, corCabelo;

	while(i<=6){
		
		printf("\nDigite os dados da pessoa:%d \n", i++);
	
		printf("Digite a idade:\n");
		scanf("%d", &idade);
		printf("Digite o peso:\n"); 
		scanf("%f", &peso);
		printf("Digite a altura:\n");
		scanf("%f", &altura);
		printf("Escolha a cor dos olhos: A-P-V-C \n");
		scanf(" %c", &corOlhos);
		
		printf("Escolha a cor dos cabelos: P-C-L-R\n");
		scanf(" %c", &corCabelo);
		
		
		if(idade>50 && peso<60){
			pessoasSup50_60++;
		}
		if(altura<150){
			idadePaltInf150++;
			altura += altura;
		}
		if(corOlhos == 'A'){
			pessoasOlhosAz++;
		}
		if(corCabelo == 'R' && corOlhos != 'A'){
			qtdPruivasOaz++;
			i++;
		}
		
	}
	mIdadePalturaInf150= altura/idadePaltInf150;
	porcentPolhosAz= (pessoasOlhosAz * 100) / totalP;
	
	
	printf("A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60kg: %d\n", pessoasSup50_60);
	printf("A media de idade das pessoas com menos de 150 metros: %.2f\n", mIdadePalturaInf150);
	printf("A porcentagem de pessoas com olhos azuis no geral: %.2f\n", porcentPolhosAz);
	printf("A quantidade de pessoas ruivas que nao possuem olhos azuis: %d\n", qtdPruivasOaz);
	
}
