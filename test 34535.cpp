#include <stdio.h>

int main(){
	
	int data[5]= {1,2,3,4,5};
	int input;
	
	printf("�Է�");
	scanf("%d", &input);
	
	for(int i=0; i<5; i++){
		if(input == data[i]){
			printf("����ī!\n");
			printf("������ %d�� %d���� ����Ǿ��ֽ��ϴ�", input, i+1);
				break;
		}else if(i ==4){
			printf("x");
		
		}
	}
	
	return 0;
}
