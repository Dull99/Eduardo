#include <stdio.h>
int main(){
	int i = 1;
	int j = 0;
	
	while(i<=10){
		while(j<=10){
	
	printf("5 x %d = %d\n", i, j, 5 * j);
	j = j+1;		
	}
	i = i+1;
	j = 0;
	printf("\n");
	}
	return 0;
}
