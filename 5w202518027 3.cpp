#include <stdio.h>

int main() {
    
    int i=0;
    
    printf("���� �Է� : ");
    scanf("%d", &i);
    
    switch(i){
    	case 1:
    		printf("�����");
    		break;
    	case 2:
    		printf("������\n������");
    		break;
    	case 3:
    		printf("������");
    		break;
    	case 4:
    		printf("«��");
    		break;	
    	default:
    		printf("�׷� ������ �����ϴ�.");
    		break;	 
	}

    return 0;
}

