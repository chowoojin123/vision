#include <stdio.h>

  	int main() {
    
    char i;
    
    printf("문자 입력 : ");
    scanf("%c", &i);
	
	switch(i){
		case 'a':
			printf("a를 입력하셨군요");
			break; 
		case 'b':
			printf("b를 입력하셨군요");
			break;
		case 'c':
			printf("c를 입력하셨군요");
			break;
		default:
			printf("그 이외의 문자");		
	}

    return 0;
}

