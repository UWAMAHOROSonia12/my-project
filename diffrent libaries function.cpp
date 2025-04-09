#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if (isalpha(ch)) {
        printf("'%c' is a letter.\n", ch);
    } else if (isdigit(ch)) {
        printf("'%c' is a digit.\n", ch);
    } else {
        printf("'%c' is a special character.\n", ch);
    }
    
    printf("Uppercase: %c\n", toupper(ch));
    
    srand(time(NULL));
    int randomNumber = rand() % 100; 
    printf("Random Number: %d\n", randomNumber);
    
    char str[] = "Library Functions";
    printf("Length of string: %lu\n", strlen(str));
    
    double num = 25.0;
    printf("Square root of %.2f: %.2f\n", num, sqrt(num));
    
    time_t t;
    time(&t);
    printf("Current time: %s", ctime(&t));
    
    printf("Max int value: %d\n", INT_MAX);
    printf("Max float value: %e\n", FLT_MAX);
    
    bool flag = true;
    printf("Boolean flag: %d\n", flag);
    
    return 0;
}

