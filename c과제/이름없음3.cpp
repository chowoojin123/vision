#include <stdio.h>

int main(){
	
	int data[]={1,2,3,4,5};
	
	data[0]=7;
	data[2]=9;
	
	for(int i=0; i<5; i++){
		printf("%3d", data[i]);
	}
	
	return 0;
}

#include <stdio.h>

int main() {
	
	int data[9]={0};
	
	int i, j;
	
	scanf("%d", &j);
	
	for(i=0; i<9; i++){
		data[i]=j*(i+1);
	}
	
	for(i=0; i<9; i++){
		printf("%d\n", data[i]);
	}
	
	
	return 0;
}

#include <stdio.h>

int main(){
	
	int data[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	
	int i, j;
	
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("%3d", data[i][j]);
		}
			printf("\n");
	}	

	return 0;
}

for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			data[j][i] = k++;
			printf("%3d", data[i][j]);
		}
			printf("\n");
	}	


#include <stdio.h>

int main(){
	
	int data[3][3]={0};
	
	int i, j, k=1;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			data[j][i] = k++;
		}
	}	

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			data[j][i] = k++;
			printf("%3d", data[i][j]);
		}
			printf("\n");
	}	

	return 0;
}

#include <stdio.h>

int main(){
	
	int data[3][3]={0};
	
	int i, j;
	
	int c, d;
	
	scanf("%d %d", &c, &d);
	
	data[c][d]=1;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%3d", data[i][j]);
		}
		printf("\n");
	}	

	return 0;
}

#include <stdio.h>

int main(){
	
	int data[3][3]={0};
	
	int i, j;
	
	int c, d;
	
	scanf("%d %d", &c, &d);
	
	while(c<3 && d<3){
		data[c][d]=1;
	
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				printf("%3d", data[i][j]);
			}
			printf("\n");
	}	
		scanf("%d %d", &c, &d);
	}
	
	
	return 0;
}

data[c][d]++;


#include <stdio.h>

int main(){
	
	int data[5][5]={0};
	
	int i, j, k=1;
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
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
