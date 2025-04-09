#include<stdio.h>
int main()
{
	int i,j;
	i=5;
	do{
//		j=1;
		printf("\n");
		do{
			printf("*");
			j++;
		}while(j<=i);
	}while(i>=1);
	return 0;
}
