#include <stdio.h>
/*Uma companhia de teatro deseja montar uma série de espetáculos. A direção calcula que, a
R$ 5,00 o ingresso, serão vendidos 120 ingressos, e que as despesas serão de R$ 200,00. Diminuindo-se em
R$ 0,50 o preço dos ingressos, espera-se que as vendas aumentem em 26 ingressos. Faça um programa que
escreva uma tabela de valores de lucros esperados em função do preço do ingresso, fazendo-se variar esse preço
de R$ 5,00 a R$ 1,00, de R$ 0,50 em R$ 0,50. Escreva, ainda, para cada novo preço de ingresso, o lucro
máximo esperado, o preço do ingresso e a quantidade de ingressos vendidos para a obtenção desse lucro.*/
int main(){
double valorIngre = 5.0, lucroMax, maiorLucro;
int qtdIngresso = 120;


for(int i =1; i<=10; i++){
	lucroMax = (valorIngre * qtdIngresso);
	
	if (lucroMax > lucroMax){
		maiorLucro=lucroMax;
	}
	printf("Valor do ingresso: %.2lf\n", valorIngre);
	printf("Quantidade de ingresso: %d\n", qtdIngresso);
	printf("Lucro Maximo : %.2lf\n", lucroMax);
	
	valorIngre= valorIngre - 0.5;
	qtdIngresso= qtdIngresso+26;
}
printf("O maior Lucro: %.2lf\n", maiorLucro);








}
