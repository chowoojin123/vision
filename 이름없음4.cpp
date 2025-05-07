#include <stdio.h>

int main(){
	
	char data[10];
	
	data[0] = 'A';
	data[1] = 'B'; 
	
	printf("%c%c\n", data[0], data[1]);
	
	printf("data[0] 입력 : ");
	
	scanf("%c", &data[0]); 
	
	printf("%c%c\n", data[0], data[1]);
	
	return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
	
	char data[10];
	
	printf("이름 입력 : ");
	
	scanf("%s", data);
	
	printf("당신의 이름은 %s입니다\n\n", data);
	
	//printf("변경하고자 하는 이름 입력 : ");
	
	//scanf("%s", data);
	
	//strcpy(data, "홍길동");
	
	//strcat(data, " 바보");

	int r = strcmp(data, "조우진");
	
	printf("두 문자열을 비교한 결과 : %d\n", r);
	
	int len = strlen(data);
	
	printf("data의 전체 크기 : %d\n", sizeof(data));
	
	printf("당신의 이름은 길이가 %d입니다\n", len); 
	
	printf("당신의 변경된 이름은 %s입니다\n\n", data);
	
	return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
	
	char data[10];
	
	printf("입력 : ");
	
	scanf("%s", data);
