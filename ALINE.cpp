#include<stdio.h>
int main(){
	int vivant;
	printf("Wushyiremo\n");
	scanf("%d",&vivant);
	if(vivant>0){
		printf("the entered number is positive\n");
	}
	else if(vivant<0){
		printf("the entered number is negative\n");
	}
	else if(vivant =0){
		printf("the entered number is zero\n");
	}
	else{
		printf("invalid\n");
	}
	return 0;
}
