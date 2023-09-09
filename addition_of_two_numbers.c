#include <stdio.h>

void main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    int answer = num1 + num2;
    printf("Addition of two numbers is %d", answer);
}
