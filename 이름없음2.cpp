
#include <stdio.h>

int main(){
	
	int i, j, r, n;
	
	printf("���� �� : ");
	scanf("%d", &r); 

	printf("����� ����  : ");
	scanf("%d", &n); 
	
	for(i=r; i>=1; i--){ //�� 
		for(j=1; j<=i; j++){ //�� 
			printf("%d", n);
		}
		printf("\n");
	}
	
	return 0;
}
