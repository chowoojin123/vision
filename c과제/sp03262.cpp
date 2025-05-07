#include <stdio.h>

int main(){
	
	int i, n;
	
	printf("숫자 입력 : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		if(n%i==0){
			printf("%d ", i);
		}
	}
	
		
	return 0;
}
