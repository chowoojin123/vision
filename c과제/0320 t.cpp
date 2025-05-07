#include <stdio.h>

int main(){
	
	int i, j, r, n=1;
	
	printf("숫자입력 : ");
	scanf("%d", &r); 

	for(i=1; i<=r; i++){          //행 
		for(j=1; j<=i-1; j++){      //열 
			printf("%d", n++);
		}
		printf("\n");
	}
	
	return 0;
}
