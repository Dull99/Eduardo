#include <stdio.h>
/*19. Faca um programa que receba o tipo da acao, ou seja, uma letra a ser comercializada na bolsa de valores,
o preco de compra e o preco de venda de cada acao e que calcule e mostre:
¡ o lucro de cada acao comercializada;
¡ a quantidade de acoes com lucro superior a R$ 1.000,00;
¡ a quantidade de acoes com lucro inferior a R$ 200,00;
¡ o lucro total da empresa.
Finalize com o tipo de acao eFf.*/

int main(){
	
	char acao;
	float precoC=0, precoV=0, lucroTotal, lucroAcao=0;
	int acaoS1000=0, acaoI200=0;
	
	while(1){
		printf("Digite o tipo de acao: \n");
		scanf(" %c", &acao);
		if(acao == 'f'){
			break;
		}
		printf("Digite o valor de compra da acao: \n");
		scanf("%f", &precoC);
		printf("Digite o valor do preco de venda da acao: \n");
		scanf("%f", &precoV);
		lucroAcao = precoV - precoC;
		lucroTotal = lucroTotal + lucroAcao;
		if(lucroAcao > 1000){
			acaoS1000++;
		}else if(lucroAcao < 200){
			acaoI200++;
		}
		
	}
	
	printf("A quantidade de acoes com lucro superior a 1000: %d\n", acaoS1000);
	printf("A quantidade de acoes com lucro inferio a 200: %d\n", acaoI200);
	printf("O lucro total da empresa=%.2f\n", lucroTotal);
	
	
}
