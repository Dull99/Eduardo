#include <stdio.h>
/*Faça um programa que receba a idade e o peso de quinze pessoas, e que calcule e mostre as médias dos
pesos das pessoas da mesma faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a
30 anos e de 31 anos para cima.*/
int main(){
	int idade,i;
	float peso, med1, med2,med3,med4,soma1, soma2, soma3,soma4,cont1,cont2,cont3,cont4;
	 for(i=1; i<=15;i++){
	 	printf("Digite a idade: \n");
	 	scanf("%d",&idade);
	 	printf("Digite o peso: \n");
	 	scanf("%f",&peso);
	 	if(idade>=1 && idade<=10){
	 		cont1=cont1+1;
	 		soma1 = soma1+peso;
	 		med1= soma1/cont1;
		 }else if(idade>10 && idade<=20){
		 		cont2=cont2+1;
		 	soma2 = soma2+peso;
		 	med2 = soma2 / cont2;
		 }else if(idade>20 && idade<=30){
		 	cont3=cont3+1;
		 	soma3 = soma3+peso;
		 	med3= soma3/cont3;
		 }else if(idade>30){
		 		cont4=cont4+1;
		 	soma4= soma4+peso;
		 	med4= soma4/cont4;
		 }
		 
	 }
	printf("A media dos pesos da pessoas de 1 - 10 anos e: %.2f KG\n", med1);
	printf("A media dos pesos da pessoas de 11 - 20 anos e: %.2f KG\n", med2);
	printf("A media dos pesos da pessoas de 21 - 30 anos e: %.2f KG\n", med3);
	printf("A media dos pesos da pessoas acima de 30 anos e: %.2f KG\n", med4);

	return 0;
}

