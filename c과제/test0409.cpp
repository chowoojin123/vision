#include <stdio.h>

int main(){
	
	int i;
	
	for(i=1; i<=30; i++){
		if(i%10==3){
			printf("! ");
		}else if(i%10==6){
			printf("! ");
		}else if(i%10==9){
			printf("! ");
		}else if(i/10==3){
			printf("! ");
		}else{
			printf("%d ", i);
		}
	}
	
	return 0;
}
