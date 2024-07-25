#include <stdio.h>
/*Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou nao de um novo produto
lancado. Para isso, forneceu o sexo do entrevistado e sua resposta (S . sim; ou N . nao). Sabe-se
que foram entrevistadas dez pessoas. Faca um programa que calcule e mostre:
Å° o numero de pessoas que responderam sim;
Å° o numero de pessoas que responderam nao;
Å° o numero de mulheres que responderam sim; e
Å° a percentagem de homens que responderam nao, entre todos os homens analisados.*/
int main(){
	int  cont=0, sim=0, nao=0, mulherSim;
	char resposta, sexo;
	float homeNao; 
	
	while (cont<10){
		printf("Digite (h) Homen - (m) Mulher\n");
		scanf(" %c", &sexo);
		printf("Digite (S)sim - (N) nao\n");
		scanf(" %c", &resposta);
		
		if(resposta == 's'){
			sim++;
		}else if(resposta == 'n'){
			nao++;
		}
		if(sexo == 'm' && resposta == 's'){
			mulherSim++;
		}if(sexo == 'h' && resposta == 'n'){
			homeNao++;
		
		}
		cont++;
	}
	printf("O numero de pessoas que respondera sim: %d \n", sim);
	printf("O numero de pessoas que responderam nao: %d\n", nao);
	printf("O numero de mulheres que responderam sim: %d\n", mulherSim);
	printf("A porcentagem de homens que responderam nao: %.2f%\n", homeNao * 100);
	
	return 0;
}
