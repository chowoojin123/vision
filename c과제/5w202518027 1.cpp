#include <stdio.h>

int main(){
	
	int a=0;
	
	printf("숫자 입력 : ");
	scanf("%d", &a);
	
	switch(a){
		case 0:
			printf("가위");
			break;
		case 1:
			printf("바위");
			break;
		case 2:
			printf("보");
			break;	 
	}
	
	return 0;
}
