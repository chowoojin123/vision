#include <stdio.h>

int main(){
	
	int s=0;
	int n=0;
		
	while(1){
		printf("���� �Է� : ");
		scanf("%d", &n);
		
		if(n==0) break;
		
		s = s + n;
	}	
		
	printf("�հ� : %d", s);
	
	return 0;
}
