#include <stdio.h>
int main(){
	int idade;
	int i=1;
	int faixa1 = 0;
	int faixa2 = 0;
	int faixa3 = 0;
	int faixa4 = 0;
	int faixa5 = 0;
	int totalP = 8;
	float porcentF1, porcentF5;
	
	while(i<=8){
	printf("Digite a idade:\n");
	scanf("%d", &idade);
	if(idade <=15){
		faixa1 = faixa1+1;
	}else if(idade >15 && idade <=30){
		faixa2= faixa2+1;
	}else if(idade >31 && idade <=45){
		faixa3= faixa3+1;
	}else if(idade >46 && idade <=60){
		faixa4= faixa4+1;
	}else if(idade >60){
		faixa5 = faixa5+1;
	
	}
	i++;
	porcentF1 = (faixa1 / totalP )*100;
}

 printf("A primeira faixa 1: %d \n", faixa1);
 printf("A segunda faixa 2: %d \n ", faixa2);
 printf("A terceira faixa 3: %d \n", faixa3);
 printf("A quarta faixa 4: %d \n", faixa4);
 printf("A quinta faixa 5: %d \n", faixa5);
 

 printf("A porcentagem da faixa etaria 1 e: %.2f", porcentF1);

return 0;
}
