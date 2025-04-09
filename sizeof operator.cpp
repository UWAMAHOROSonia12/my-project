#include<stdio.h>
main()
{
	double a;
    printf("Enter your Marks please:\n");
    scanf("%lf",&a);
    if((a>=50)&&(a<=100)){
    	
    	printf("you have passed an Exam\n");
	}
	else{
		printf("Sorry, You have failed\n");		
	}
	return 0;
}
