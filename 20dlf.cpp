#include <stdio.h>

int main(){
	
	int i, j, r;
	
	printf("�����Է� : ");
	scanf("%d", &r); 

	for(i=1; i>=5; i++){ //�� 
		for(j=1; j<=5; j++){ //�� 
			printf("%d", r);
		}
		printf("\n");
	}
	
	return 0;
}
