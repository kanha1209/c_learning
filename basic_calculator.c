#include <stdio.h>

void main() {
    char sign;
    
    printf("Enter sign: ");
    scanf("%c", &sign);
    
    printf("You have entered this sign: %c \n", sign);
    
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    if (sign == '+') {
        printf("You entered a plus sign.\n");
        int answer = num1 + num2;
        printf("Addition of two numbers is %d", answer);
    } else if (sign == '-') {
        printf("You entered a minus sign.\n");
        int answer = num1 - num2;
        printf("Substraction of two numbers is %d", answer);
    } else if (sign == '/') {
        printf("You entered a divide sign.\n");
        int answer = num1 / num2;
        printf("Dividing of two numbers is %d", answer);
    } else if (sign == '*') {
        printf("You entered a multiply sign.\n");
        int answer = num1 * num2;
        printf("Multiplication of two numbers is %d", answer);
    } else {
        printf("Invalid operation.\n");
    }
    
}
