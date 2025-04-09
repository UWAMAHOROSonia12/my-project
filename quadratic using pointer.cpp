#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,x1,x2,d;
	float *pt1,*pt2,*pt3;
	printf("enter the value of a");
	scanf("%f",&a);
	printf("enter the value of b");
	scanf("%f",&b);
	printf("enter the value of c");
	scanf("%f",&c);
	pt1=&a;
	pt2=&b;
	pt3=&c;
	d=(*pt2)*(*pt2)-4*(*pt1)*(*pt3);
	if(d>0){
	x1=(-(*pt1)+sqrt(d))/2;
	x2=(-(*pt2)-sqrt(d))/2;
		printf("the value of x is %f\n",x1);
		printf("the value of x is %f\n",x2);
	}else if(d==0){
		
		x1=-b/2*a;
		printf("the value of x is %f\n",x1);
		
	}else{
		x1=-(*pt2)+sqrt(d)/(2*(*pt1));
		x2=-(*pt2)-sqrt(d)/(2*(*pt1));
		printf("the value of x is %f\n",x1);
		printf("the value of x is %f\n",x2);
		
		
	}
	
	return 0;
}
