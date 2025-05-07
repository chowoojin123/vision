#include <stdio.h>

int main(){
	
	int i, j, r;
	
	printf("숫자입력 : ");
	scanf("%d", &r); 

	for(i=1; i>=5; i++){ //행 
		for(j=1; j<=5; j++){ //열 
			printf("%d", r);
		}
		printf("\n");
	}
	
	return 0;
}
