#include<stdio.h>

int main(){
	int rows=5;
	int i;
	int k;
	int j;
	for(i=1;i<=rows;i++){
		for(j=1;j<=rows-i;j++){
			printf(" ");
		}
		for(k=1;k<=(2*i-1);k++){
			printf("k");
		}
		printf("\n");
	}
	return 0;
}

