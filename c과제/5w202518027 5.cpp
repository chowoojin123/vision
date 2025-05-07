#include <stdio.h>
#include <conio.h>

  	int main() {
    
    int ch;
    
    ch = getch();
    
    switch(ch){
    	case 'a':
    		printf("a를 입력하셨군요\n");
    		break;
    		default:
    		printf("그 외의 문자");
	}
    
    return 0;
}

