
#include <stdio.h>

int main(){
	
	int i, j, r, n;
	
	printf("행의 수 : ");
	scanf("%d", &r); 

	printf("출력할 숫자  : ");
	scanf("%d", &n); 
	
	for(i=r; i>=1; i--){ //행 
		for(j=1; j<=i; j++){ //열 
			printf("%d", n);
		}
		printf("\n");
	}
	
	return 0;
}
