#include <stdio.h>

int main(){
	
	char data[10];
	
	data[0] = 'A';
	data[1] = 'B'; 
	
	printf("%c%c\n", data[0], data[1]);
	
	printf("data[0] �Է� : ");
	
	scanf("%c", &data[0]); 
	
	printf("%c%c\n", data[0], data[1]);
	
	return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
	
	char data[10];
	
	printf("�̸� �Է� : ");
	
	scanf("%s", data);
	
	printf("����� �̸��� %s�Դϴ�\n\n", data);
	
	//printf("�����ϰ��� �ϴ� �̸� �Է� : ");
	
	//scanf("%s", data);
	
	//strcpy(data, "ȫ�浿");
	
	//strcat(data, " �ٺ�");

	int r = strcmp(data, "������");
	
	printf("�� ���ڿ��� ���� ��� : %d\n", r);
	
	int len = strlen(data);
	
	printf("data�� ��ü ũ�� : %d\n", sizeof(data));
	
	printf("����� �̸��� ���̰� %d�Դϴ�\n", len); 
	
	printf("����� ����� �̸��� %s�Դϴ�\n\n", data);
	
	return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
	
	char data[10];
	
	printf("�Է� : ");
	
	scanf("%s", data);
