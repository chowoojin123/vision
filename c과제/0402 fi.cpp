#include <stdio.h>

int main(){
	
	int n=0;
	
	printf("월 입력 : ");
	scanf("%d", &n);
	/*
	if(n==0){
		printf("0입니다!");
	}else if(n==1){
		printf("1입니다!");
	}else{
		printf("0또는 1이 아닌 수입니다!");
	}*/

	switch(n){
		case 3:
		case 4:
		case 5:	
			printf("봄입니다");
			break;
		case 6:
		case 7:
		case 8:	
			printf("여름입니다");
			break;
		case 9:
		case 10:
		case 11:	
			printf("가을입니다");
			break;
		case 12:
		case 1:
		case 2:	
			printf("겨울입니다");
			break;
		default:
			printf("잘못 입력");
	} 
	
	return 0;
}
