#include <stdio.h>
int main (){
	int codigo, tipoInvest;
	float valor, rendimento, totalInvest=0,totalJuros=0;
	
	while(1){
		printf("Digite o codigo do cliente\n");
		scanf("%d", &codigo);
		if(codigo == 0){
			break;
		}
		printf("Digite o tipo de investimento:\n");
		scanf("%d", &tipoInvest);
		printf("Digite o valor\n");
		scanf("%f", &valor);
		
		if(tipoInvest == 1){
			printf("Rendimento mensal = %.2f\n", valor *0.015);
			totalInvest = totalInvest + valor;
			totalJuros = totalJuros + valor *0.015;
		}else if(tipoInvest == 2){
			printf("Rendimento mensal = %.2f\n", valor *0.02);
			totalInvest = totalInvest + valor;
			totalJuros= totalJuros + valor * 0.02;
		}else if(tipoInvest == 3){
			printf("Rendimento mensal = %.2f\n", valor * 0.04);
			totalInvest = totalInvest + valor;
				totalJuros = totalJuros + valor *0.04;
		}
	}
	printf("O total investido = %.2f\n", totalInvest);
	printf("O total de juros = %.2f\n", totalJuros);
}
