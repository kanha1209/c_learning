#include <stdio.h>

void main() {
    char sign;
    
    printf("Enter sign: ");
    scanf("%s", &sign);
    
    printf("You have entered this sign: %c \n", sign);
    
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    int answer = num1 + num2;
    printf("Addition of two numbers is %d", answer);
}
