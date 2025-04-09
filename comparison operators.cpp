#include<stdio.h>
 const float pi=22/7;
 main(){
int a,b,sum,div,sub,mult,mod;
printf("enter first number\n");
scanf("%d",&a);
printf("enter second number\n");
scanf("%d",&b);
sum=a==b;
div=a<=b;
sub=a!=b;
mult=a>=b;
mod=a<b;
printf("the value of addition:%d\n",sum);
printf("the value of division:%d\n",div);
printf("the value of substraction:%d\n",sub);
printf("the value of multiplication:%d\n",mult);
printf("the value of modulas:%d\n",mod);
 	return 0;
 }
