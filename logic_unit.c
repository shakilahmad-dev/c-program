#include <stdio.h>
int main() {
    int num1, num2, add, subtract, multiply;
    double divide;
    
    printf("enter the just two numbers: ");
    scanf("%d %d", &num1, &num2);

    add = num1 + num2;
    subtract = num1 - num2; 
    multiply = num1 * num2;


    printf("your addition is: %d\n", add);
    printf("your subtraction is: %d\n", subtract);
    printf("your multiplication is: %d\n", multiply);

    if (num2 != 0) {
        divide = (double)num1 / num2;
        printf("your division is: %.5f\n", divide);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}