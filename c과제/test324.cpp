#include <stdio.h>

int main(){
    int data[5][5];
    int k = 1;

    for(int i = 0; i < 5; i++){
        if(i % 2 == 0){
            for (int j = 0; j < 5; j++){
                data[i][j] = k++;
            }
        }else{
            for(int j = 4; j >= 0; j--){
                data[i][j] = k++;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%3d", data[i][j]);
        }
        printf("\n");
    }

    return 0;
}

