#include <stdio.h>

int main(){
    int data[4][7] = {0}; 
    int k = 1;

    for(int i=0; i<5; i++){
        int start, end;
        if(i <= 3){
            start = 3 - i;  
            end = 3;
        }else{
            start = 5 - i ;	
            end =  3;
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

