#include <stdio.h>
/*Faca um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: preco
final, quantidade de parcelas e valor da parcela. Considere o seguinte:
Å° o preco final para compra a vista tem desconto de 20%;
Å° a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
Å° os percentuais de acrescimo encontram-se na tabela a seguir.*/

int main(){
	int qtdParcela=6;
	float valor=0, precoF=0, valorParcela=0, percentual = 0.03, precoA;
	
		printf(" Digite o valor do carro:\n ");
		scanf("%f", &valor);
		
	
	while(qtdParcela <= 60){
		precoF = (valor * percentual) + valor;
		valorParcela = precoF / qtdParcela;
		printf("(Quantidade Parcelas):%d  (Valor Parcela):%.2f (Preco Final): %.2f\n", qtdParcela, valorParcela, precoF);
	
	qtdParcela = qtdParcela + 6;
	percentual = percentual + 0.03;	
	}
	precoA= valor - (0.20 * valor);
	printf("O preco a vista sera: %.2f", precoA);
	
}

