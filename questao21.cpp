#include <stdio.h>
int main(){
	
	int voto, cand1=0, cand2=0, cand3=0, cand4=0, nulo=0, branco=0, total=0;
	float porcNulo=0, porcBranco=0;
	
	printf("1, 2, 3, 4 Votos para os respectivos candidatos\n");
	printf("5 Voto nulo - 6 Voto em branco\n\n");
	while(1){
		printf("Digite seu voto:\n");
		scanf("%d", &voto);
		if(voto == 0){
			break;
		}
	    
		if(voto == 1){
			cand1++;
			 
		}else if(voto == 2){
			cand2++;
			 
		}else if(voto == 3){
			cand3++;
			
		}else if(voto == 4){
			cand4++;
			
		}else if(voto == 5){
			nulo++;
			
		}else if(voto == 6){
			branco++;
			 
		}else{
			printf("Voto invalido\n");
			continue;
		}	
     
	}
	total= cand1+cand2+cand3+cand4+nulo+branco;
	porcNulo =  (nulo/total)*100;
	porcBranco = (branco/total)*100;
	
	printf("O total de votos do candidatos: 1 = %d\n", cand1);
	printf("O total de votos do candidatos: 2 = %d\n", cand2);
	printf("O total de votos do candidatos: 3 = %d\n", cand3);
	printf("O total de votos do candidatos: 4 = %d\n", cand4);
	printf("O total de votos nulos foi:%d\n", nulo);
	printf("O total de votos brancos:%d\n", branco);
	printf("A porcentagem de votos nulos sobre o total de votos e: %.2f\n", porcNulo );
	printf("A porcentagem de votos Brancos sobre o total de votos e: %.2f\n", porcBranco );
	
	return 0;
}
