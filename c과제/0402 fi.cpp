#include <stdio.h>

int main(){
	
	int n=0;
	
	printf("�� �Է� : ");
	scanf("%d", &n);
	/*
	if(n==0){
		printf("0�Դϴ�!");
	}else if(n==1){
		printf("1�Դϴ�!");
	}else{
		printf("0�Ǵ� 1�� �ƴ� ���Դϴ�!");
	}*/

	switch(n){
		case 3:
		case 4:
		case 5:	
			printf("���Դϴ�");
			break;
		case 6:
		case 7:
		case 8:	
			printf("�����Դϴ�");
			break;
		case 9:
		case 10:
		case 11:	
			printf("�����Դϴ�");
			break;
		case 12:
		case 1:
		case 2:	
			printf("�ܿ��Դϴ�");
			break;
		default:
			printf("�߸� �Է�");
	} 
	
	return 0;
}
