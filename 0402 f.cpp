#include <stdio.h>

int main(){
	
	int s=0;
	int n=0;
		
	while(1){
		printf("숫자 입력 : ");
		scanf("%d", &n);
		
		if(n==0) break;
		
		s = s + n;
	}	
		
	printf("합계 : %d", s);
	
	return 0;
}
