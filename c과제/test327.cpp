#include <stdio.h>

int main(){
		
	int i, j;
	
	printf("���� �Է� : ");
	scanf("%d", &i);
	
	while(i!=0){
		for(j=1; j<=i; j++){
			printf("�ȳ��ϼ���!\n");
		}
		printf("���� �Է� : ");
		scanf("%d", &i);	
	} 
	return 0;
}
