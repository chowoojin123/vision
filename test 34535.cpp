#include <stdio.h>

int main(){
	
	int data[5]= {1,2,3,4,5};
	int input;
	
	printf("입력");
	scanf("%d", &input);
	
	for(int i=0; i<5; i++){
		if(input == data[i]){
			printf("유레카!\n");
			printf("데이터 %d는 %d번쨰 저장되어있습니다", input, i+1);
				break;
		}else if(i ==4){
			printf("x");
		
		}
	}
	
	return 0;
}
