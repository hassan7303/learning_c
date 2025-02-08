#include <stdio.h>

int main() {
    float num1,num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%f",&num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(operator){
        case '+':
            printf("The sum of the two numbers is: %.2f\n",num1+num2);
            break;
        case '-':
            printf("The difference of the two numbers is: %.2f\n",num1-num2);
            break;
        case '*':
            printf("The product of the two numbers is: %.2f\n",num1*num2);
            break;
        case '/':
            printf("The division of the two numbers is: %.2f\n",num1/num2);
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;  
}
