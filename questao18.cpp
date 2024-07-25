#include <stdio.h>
/*Foi feita uma pesquisa entre os habitantes de uma regiao. Foram coletados os dados de idade, sexo (M/F)
e salario. Faca um programa que calcule e mostre:
Å° a media dos salarios do grupo;
Å° a maior e a menor idade do grupo;
Å° a quantidade de mulheres com salario ate R$ 200,00;
Å° a idade e o sexo da pessoa que possui o menor salario.
Finalize a entrada de dados ao ser digitada uma idade negativa.*/

int main(){
	 int  idade, maiorIdade=0, menorIdade=500, mulher=0, menorSalidade, menorSalsexo=0, qtdPessoas=0;
     char sexo;
     float salario =0,totalSalario, menorSalario=50000;
     
     while(1){
     	printf("Digite a idade:\n");
     	scanf("%d", &idade);
     	if(idade<0){
     		break;
		 }
     	printf("Digite o sexo: m-f \n");
     	scanf(" %c", &sexo);
     	printf("Digite o salario:\n");
     	scanf("%f", &salario);
     	totalSalario += salario;
     	qtdPessoas++;
     	
     	if(idade > maiorIdade){
     		maiorIdade = idade;
		 }else if(idade < menorIdade){
		 	menorIdade = idade;
		 } else if( salario < 200 && sexo == 'f'){
		 	mulher++;
		 } else if(menorSalario > salario){
		 	menorSalario = salario;
		 	menorSalidade = idade;
		 	menorSalsexo = sexo;
		 }
		 
		 
	 }
	 
	 printf("Media de salarios = %.2f\n", totalSalario/qtdPessoas);
	 printf("Maior idade = %d\n Menor idade = %d\n", maiorIdade, menorIdade);
	 printf("A quantidade de mulheres que recebem menos de 200 = %d\n", mulher);
	 printf("Idade e sexo da pessoa com menor salario = %d. %c", menorSalidade, menorSalsexo);
    return 0; 	
}
