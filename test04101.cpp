#include <stdio.h>

int main(){
	
	char c;
	
	scanf("%c", &c);
	
	if(c>='a' && c<='z'){
		printf("%c는 소문자입니다.");
	}else if(c>='A' && c<='Z'){
		printf("%c는 대문자입니다.");	
	}else{
		printf("잘못입력했습니다");
	}
	 
	
	return 0;
}
