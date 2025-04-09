#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,x1,x2,d;
	float *pt1,*pt2,*pt3;
		printf("enter the value of a");
	scanf("%d",&a);
		printf("enter the value of b");
	scanf("%d",&b);
		printf("enter the value of c");
	scanf("%d",&c);
	pt1=&a;
	pt2=&b;
	pt3=&c;
	d=b*b-4*a*c;
	if(d>0){
		x1=-b+sqrt(d)/2;
		x2=-b-sqrt(d)/2;
		printf("the value of x is %f\n",x1);
		printf("the value of x is %f\n",x2);
	}else if(d=0){
		
		x1=-b/2*a;
		printf("the value of x is %f\n",x1);
		
	}else{
		x1=-b+sqrt(d)/2*a;
		x2=-b-sqrt(d)/2*a;
		printf("the value of x is %f\n",x1);
		printf("the value of x is %f\n",x2);
		
		
	}
	
	return 0;
}
