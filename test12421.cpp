#include <stdio.h>

int main(){
    int data[5][5] = {0}; 
    int k = 1;

    for(int i=0; i<5; i++){
        int start, end;
        if(i <= 2){
            start = 2 - i;
            end = 2 + i;
        }else{
            start = i - 2;
            end = 6 - i;
        }

        for(int j=start; j<=end; j++){
            data[i][j] = k++;
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(data[i][j] != 0)
                printf("%3d", data[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }

    return 0;
}

