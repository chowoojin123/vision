#include <stdio.h>

int main(){
	
	int data[5][5]={0};
	
	int i, j, k=1;
	
	for(i=0; i<5; i++){
		for(j=0; j<=i; j++){
			data[i][j] = k++;
		}
	}
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%3d", data[i][j]);
		}
		printf("\n");
	}

	
	return 0;
}
