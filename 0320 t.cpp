#include <stdio.h>

int main(){
	
	int i, j, r, n=1;
	
	printf("�����Է� : ");
	scanf("%d", &r); 

	for(i=1; i<=r; i++){          //�� 
		for(j=1; j<=i-1; j++){      //�� 
			printf("%d", n++);
		}
		printf("\n");
	}
	
	return 0;
}
