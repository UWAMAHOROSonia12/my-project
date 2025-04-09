#include<stdio.h>
main(){
	int a=5,b=6;
	int c;
	int d;
	int e,f;
	c=a&b;//4
	d=a|b;//7
	e=a^b;//3
	f=~a;//-6
	printf("value of c:%d\n",c);
	printf("value of d:%d\n",d);
	printf("value of e:%d\n",e);
	printf("value of f:%d\n",f);
	return 0;
}
