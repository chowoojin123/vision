#include <stdio.h>

int main(){
	
	//1부터 내가 입력한 숫자까지 합산해!
	//누적 알고리즘
	
	int i;
	int a=0;
	int input;
	
	printf("숫자 입력 : ");
	
	scanf("%d", &input);
	
	for(i=1; i<=input; i++){
		a = a + i;
		printf("i=%d, a=%d\n", i, a);
	}
	
	printf("1부터 %d까지의 합계 : %d", input, a);	
	
	return 0;
}
