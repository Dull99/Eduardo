#include <stdio.h>
/*Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida. Em seguida,
organize-os em ordem crescente e decrescente.*/
int main(){
	float controle = 0;
	float n1, n2, n3, n4;
	float nMaior, nMedio1, nMedio2, nMenor;
	
	printf("\nBem vindo:) \n\n");
	
	while(controle>5){
		
	printf("Insira 4 numeros diversos:");
	scanf("% %f %f %f", &n1, &n2, &n3, &n4);
	printf("\n\n Os numeros digitados fora: %.2f,%.2f,%.2f,%.2f", n1,n2,n3,n4);
	
	if(n1>n2 && n1>3 &&n1>n4){
		nMaior = n1;
	if(n2>n3 && n3>n4){
		nMedio1 = n2;
		nMedio2= n3;
		nMenor= n4;
	}else if(n2>n4 && n4>n3){
		nMedio1 = n2;
		nMedio2 = n4;
		nMenor= n3;
	}else if(n3>n2 && n2>n4){
		nMedio1= n3;
		nMedio2= n2;
		nMenor=n4;
	}else if(n3>n4 && n4>n2){
		nMedio1 = n3;
		nMedio2= n4;
		nMenor= n2;
	}else if(n4>n2 && n2>n3){
		nMedio1=n4;
		nMedio2=n2;
		nMenor=n3;
	}else if(n4>n3 && n3>n2){
		nMedio1=n4;
		nMedio2=n3;
		nMenor=n2;
	}
	
	}
	if(n2>n1 && n2>n3 && n2>n4){
		nMaior=n2;
		if(n1>n3 && n3>n4){
			nMedio1=n1;
			nMedio2=n3;
			nMenor=n4;
		}else if(n1>n4 && n4>n3){
			nMedio1=n1;
			nMedio2=n4;
			nMenor=n3;
		}else if(n3>n1 && n1>n4){
			nMedio1=n3;
			nMedio2=n1;
			nMenor=n4;
		}else if(n3>n4 && n4>n1){
			nMedio1=n3;
			nMedio2=n4;
			nMenor=n1;
		}else if(n4>n1 && n1>n3){
			nMedio1=n4;
			nMedio2=n1;
			nMenor=n3;
		}else if(n4>n3 && n3>n1){
			nMedio1=n4;
			nMedio2=n3;
			nMenor=n1;
		}
		if(n3>n1 && n3>n2 && n3>n4){
			nMaior=n3;
		}else if(n1>n2 && n2>n4){
			nMedio1=n1;
			nMedio2=n2;
			nMenor=n4;
		}else if(n1>n4 && n4>n2){
			nMedio1=n1;
			nMedio2=n4;
			nMenor=n2;
		}else if(n2>n1 && n1>n4){
			nMedio1=n2;
			nMedio2=n1;
			nMenor=n4;
		}else if(n2>n4 && n4>n1){
			nMedio1=n2;
			nMedio2=n4;
			nMenor=n1;
		}
		if(n4>n1 && n4>n2 && n4>n3){
			nMaior=n4;
		}else if(n1>n2 && n2>n3){
			nMedio1=n1;
			nMedio2=n2;
			nMenor=n3;
		}else if(n1<n3 && n3>n2){
			nMedio1=n1;
			nMedio2=n3;
			nMenor=n2;
		}else if(n2>n1 && n1>n3){
			nMedio1=n2;
			nMedio2=n1;
			nMenor=n3;
		}else if(n2>n3 && n3>n1){
			nMedio1=n2;
			nMedio2=n3;
			nMenor=1;
		}else if(n3>n1 && n1>n2){
			nMedio1=n3;
			nMedio2=n1;
			nMenor=n2;
		}else if(n3>n2 && n2>n1){
			nMedio1=n3;
			nMedio2=n2;
			nMenor=n1;
		}
	}
	printf("\nNumeros em ordem crescente: %.2f, %.2f, &.2f, %.2f.", nMenor, nMedio1, nMedio2, nMaior);
	printf("\nNumeros em ordem descrescente: %.2f, %.2f, %.2f, %.2f.", nMaior, nMedio2, nMedio1, nMenor);
	controle++;
	}
	printf("\n\nFim do prograa.\n\n\n");
return 0;	
}
