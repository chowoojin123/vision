#include <stdio.h>

  	int main() {
    
    char i;
    
    printf("���� �Է� : ");
    scanf("%c", &i);
	
	switch(i){
		case 'a':
			printf("a�� �Է��ϼ̱���");
			break; 
		case 'b':
			printf("b�� �Է��ϼ̱���");
			break;
		case 'c':
			printf("c�� �Է��ϼ̱���");
			break;
		default:
			printf("�� �̿��� ����");		
	}

    return 0;
}

