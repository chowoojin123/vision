#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
	
	int p = 1;
	int i = 1;
	int j = 1;
	int c;
	
	for(;;){
		for(i=1; i<=5; i++){
			for(j=1; j<=5; j++)
			if(i==p)
			printf("*");
		else
			printf("0\n");
		}	
		c = getch();
		if(c=='a') p--;
		else if(c=='d') p++;
		
		system("cls");
	}
	
	return 0;
}
