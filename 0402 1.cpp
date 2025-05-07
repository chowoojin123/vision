#include <stdio.h>

int main(){
	
	//for, while, do..while
	//1~7까지 출력하라!
	
	//1.for
	int i=0;
	for(i=1; i<8; i++){
		printf("%d\n", i);
	}	
	
	printf("\n");
	//while
	i=1;
	while(i<8){
		printf("%d\n", i);
		i++;
	}	
	
	printf("\n");
	//do..while
	i=1;
	do{
		printf("%d\n", i);
		i++;
	}while(i<8);	
		
	
	return 0;
}
