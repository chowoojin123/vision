#include <stdio.h>
#include <string.h>

int main(){
	
	char name[10]; 
	int i;
	
	scanf("%s", name);
	
	printf("����� �̸��� %s�Դϴ�.\n", name);

	for(i=strlen(name)-1; i>=0; i--){
		printf("%c\n",name[i]);
	}
	
	return 0;
}
