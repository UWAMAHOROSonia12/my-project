#include<stdio.h>
int addition(int num1, int num2,int num3){
	int sum;
	sum=num1+num2+num3;
	printf("the additon of inputs values is=%d",sum);
	return sum;
}
int main(){
	int a,b,c;
	printf("Enter frist number\n");
	scanf("%d",&a);
		printf("Enter second number\n");
	scanf("%d",&b);
		printf("Enter third number\n");
	scanf("%d",&c);
	addition(a,b,c);
	return 0;
}
