#include <stdio.h>

int main() {
    
    int i=0;
    
    printf("숫자 입력 : ");
    scanf("%d", &i);
    
    switch(i){
    	case 1:
    		printf("자장면");
    		break;
    	case 2:
    		printf("군만두\n탕수육");
    		break;
    	case 3:
    		printf("탕수육");
    		break;
    	case 4:
    		printf("짬뽕");
    		break;	
    	default:
    		printf("그런 음식은 없습니다.");
    		break;	 
	}

    return 0;
}

