#include <stdio.h>
int main(){

int opcao, meses;
float salario=0;

printf("Menu Opcoes:\n\n");
printf("Opcao 1\n");
printf("Opcao 2\n");
printf("Opcao 3\n");
printf("Opcao 4\n");

while(1){
	printf("Digite a opcao:\n");
	scanf("%d", &opcao);
	if(opcao == 4){
		break;
	}
	printf("Digite o salario:\n");
	scanf("%f", &salario);
	if(opcao == 1){
		if(salario <=210){
			printf("Novo salario = %.2f\n", salario * 0.15 );
		}else if(salario > 210 && salario <=600){
			printf("Novo salario = %.2f\n", salario * 0.10);
		}else if(salario>600){
			printf("Novo salario = %.2f\n", salario * 0.05);
		}
	}
	if(opcao == 2){
		printf(" O valor do salrio mais as ferias= %.2f\n", salario+(salario/3));

	}if(opcao == 3){
		printf("Digite os meses:\n");
		scanf("%d", &meses);
			printf("Valor do 13 = %.2f\n", (salario * meses)/12);
		
	} if(meses > 12){
		printf("Meses invalido\n");
		continue;
	}

}	

return 0;
	
}
