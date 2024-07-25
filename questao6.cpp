#include <stdio.h>
/*Uma loja utiliza o codigo V para transacao a vista e P para transacao a prazo. Faca um programa que receba
o codigo e o valor de quinze transacoes, calcule e mostre:
Å° o valor total das compras a vista;
Å° o valor total das compras a prazo;
Å° o valor total das compras efetuadas; e
Å° o valor da primeira prestacao das compras a prazo juntas, sabendo-se que serao pagas em tres vezes.*/
int main(){
	int i=1;
	float valor = 0, totalAvista= 0, totalAprazo = 0, totalGeral=0, primeiraP;
	char codigo;
	
	while(i<=15){
		printf("Digite o codigo da transacao (V) para a vista, (P) para a prazo\n");
		scanf(" %c", &codigo);
		printf("Digite o valor da transacao\n");
		scanf("%f", &valor);
		
		if(codigo == 'V'){
	totalAvista += valor;
	}else{
		totalAprazo += valor;
		totalGeral = totalAvista + totalAprazo;
		primeiraP += valor/3;
		
		i++;
	}
	}
		printf("O valor das compras a vista e %.2f\n", totalAvista);
		printf("O valor a prazo das compras sera: %.2f\n",totalAprazo);
		printf("O valor total das compras e:%.2f\n", totalGeral);
		printf("O valor da primeira prestacao e: %.2f\n",primeiraP);

	return 0;
}

