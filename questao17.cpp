#include <stdio.h>
/*Foi feita uma pesquisa sobre a audiencia de canal de TV em varias casas de uma cidade, em determinado
dia. Para cada casa consultada foi fornecido o numero do canal (4, 5, 7, 12) e o numero de pessoas que
estavam assistindo aquele canal. Se a televisao estivesse desligada, nada era anotado, ou seja, essa casa
nao entrava na pesquisa. Faca um programa que:
Å° leia um numero indeterminado de dados (numero do canal e numero de pessoas que estavam assistindo);
e
Å° calcule e mostre a porcentagem de audiencia de cada canal.
Para encerrar a entrada de dados, digite o numero do canal ZERO.*/

int main(){
	
	int canal, numPessoas=0, cont=0;
	float canal4=0, canal5=0, canal7=0, canal12=0;
	
	while(1){
		printf("Digite o numero do canal: 4-5-7-12\n ");
		scanf("%d", &canal);
		printf("Insira o numero de pessoas assitindo\n");
		scanf("%d", &numPessoas);
		
		if(canal == 4){
			canal4 = canal4 + numPessoas;
		}else if(canal == 5){
			canal5 = canal5 + numPessoas;
		}else if(canal == 7){
			canal7 = canal7 + numPessoas;
		}else if(canal == 12){
			canal12 = canal12 + numPessoas;
		}else if(canal == 0){
			break;
			
		}
		
	}
	
	printf("A porcentagem de audienciado canal 4: %.2f%%\n", (canal4/numPessoas)*100);
	printf("A porcentagem de audienciado canal 5: %.2f%%\n", (canal5/cont)*100);
	printf("A porcentagem de audienciado canal 7: %.2f%%\n", (canal7/numPessoas)*100);
	printf("A porcentagem de audienciado canal 12: %.2f%%\n", (canal12/cont)*100);
	
	return 0;
}
