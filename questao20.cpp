#include <stdio.h>
/*Fa�a um programa que apresente o menu de op��es a seguir:
Menu de op��es:
1. M�dia aritm�tica
2. M�dia ponderada
3. Sair
Digite a op��o desejada.
Na op��o 1: receber duas notas, calcular e mostrar a m�dia aritm�tica.
Na op��o 2: receber tr�s notas e seus respectivos pesos, calcular e mostrar a m�dia ponderada.
Na op��o 3: sair do programa.
Verifique a possibilidade de op��o inv�lida. Nesse caso, o programa dever� mostrar uma mensagem.*/

int main(){
	
	int menu;
	float n1, n2, n3, p1, p2, p3;
	
	
	
	while(1){
	printf("1-Media Aritimetica\n");
	printf("2-Media Ponderada\n");
	printf("3-Sair\n\n");
	
		printf("Digite a opcao desejada:\n");
		scanf("%d", &menu);
		if(menu == 3){
			break;
		}
		if(menu == 1){
			printf("Digite a nota 1:\n");
			scanf("%f", &n1);
			printf("Digite a nota 2:\n");
			scanf("%f", &n2);
			printf("Media = %.2f\n", (n1+n2)/2);
		
		}else if(menu == 2){
			printf("Digite nota 1:\n");
			scanf("%f", &n1);
			printf("Digite o peso 1:\n");
			scanf("%f", &p1);
			printf("Digite nota 2:\n");
			scanf("%f", &n2);
			printf("Digite o peso 2:\n");
			scanf("%f", &p2);
			printf("Digite nota 3:\n");
			scanf("%f", &n3);
			printf("Digite o peso 3:\n");
			scanf("%f", &p3);
			printf("A media ponderada = %.2f\n", (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3));
		}
	}
}
