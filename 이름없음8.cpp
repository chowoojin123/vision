#include <stdio.h>

int main(){
	
	//1���� ���� �Է��� ���ڱ��� �ջ���!
	//���� �˰���
	
	int i;
	int a=0;
	int input;
	
	printf("���� �Է� : ");
	
	scanf("%d", &input);
	
	for(i=1; i<=input; i++){
		a = a + i;
		printf("i=%d, a=%d\n", i, a);
	}
	
	printf("1���� %d������ �հ� : %d", input, a);	
	
	return 0;
}
