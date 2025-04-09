#include <stdio.h>

int main() {
    int marks;
    
    printf("Enter the marks please:\n");
    scanf("%d", &marks);

    if ((marks >= 80) && (marks <= 100)) {
        printf("Grade A\n");
    }
    else if ((marks >= 70) && (marks <= 79)) {
        printf("Grade B\n");
    }
    else if ((marks >= 60) && (marks <= 69)) {
        printf("Grade C\n");
    }
    else if ((marks >= 50) && (marks <= 59)) {
        printf("Grade D\n");
    }
    else if ((marks < 50) && (marks >= 0)) { 
        printf("Grade F\n");
    }
    else {
        printf("Invalid input\n"); 
    }

    return 0;
}

