#include <stdio.h>

int main() {
    int a = 0;

    printf("���� �Է� : ");
    scanf("%d", &a);

    switch (a / 2) {
        case 0:  
            printf("¦��");
            break;
        case 1:  
            printf("Ȧ��");
            break;
    }

    return 0;
}

