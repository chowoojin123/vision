#include <stdio.h>

int main() {
    int a = 0;

    printf("¼ıÀÚ ÀÔ·Â : ");
    scanf("%d", &a);

    switch (a / 2) {
        case 0:  
            printf("Â¦¼ö");
            break;
        case 1:  
            printf("È¦¼ö");
            break;
    }

    return 0;
}

