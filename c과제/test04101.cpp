#include <stdio.h>

int main(){
	
	char c;
	
	scanf("%c", &c);
	
	if(c>='a' && c<='z'){
		printf("%c�� �ҹ����Դϴ�.");
	}else if(c>='A' && c<='Z'){
		printf("%c�� �빮���Դϴ�.");	
	}else{
		printf("�߸��Է��߽��ϴ�");
	}
	 
	
	return 0;
}
