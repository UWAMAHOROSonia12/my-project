#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks\n");
    scanf("%d",&marks);
    switch(marks){
    	case 90:
    		printf("Great\n");
    		break;
    	case 80:
		printf("Pass\n");
		break;
		default:
		printf("No");	
	}
    return 0;
}

