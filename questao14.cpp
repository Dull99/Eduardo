#include <stdio.h>
int main(){
	int idade, i=0, opiniao, otimo=0, regular=0, bom=0;
	int mediaP3=0;
	
	while(i<15){
		printf("Digite a idade:\n");
		scanf("%d", &idade);
		printf("Digite a opiniao: 3 Otimo - 2 Bom - 1 Regular\n");
		scanf("%d", &opiniao);
		
		if(opiniao == 3){
			otimo++;
			mediaP3 = mediaP3 + idade;
		}else if(opiniao == 1){
			regular++;
		}else if(opiniao == 2){
			bom++;
		}
		i++;
	}
	
	printf("A media de idade das pessoas que responderam otimo foi: %d\n", mediaP3/otimo);
	printf("A quantidade de pessoas que responderam regular foi: %d\n", regular);
	printf("A porcentagem de pessoas que responderam bom foi: %d\n", (bom/i)*100);
	
	return 0;
}
