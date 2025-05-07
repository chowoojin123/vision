#include <stdio.h>

int main(){
		
	int i, j;
	
	printf("숫자 입력 : ");
	scanf("%d", &i);
	
	while(i!=0){
		for(j=1; j<=i; j++){
			printf("안녕하세요!\n");
		}
		printf("숫자 입력 : ");
		scanf("%d", &i);	
	} 
	return 0;
}
