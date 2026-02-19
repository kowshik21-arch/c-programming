#include <stdio.h>
float add(float a, float b) {
    return a + b;
}
float subtract(float a, float b) {
    return a - b;
}
float multiply(float a, float b) {
    return a * b;
}
float divide(float a, float b) {
    if (b == 0) {
        printf("Division by zero not allowed\n");
        return 0;
    }
    return a / b;
}
int main() {
    float num1, num2, result;
    char choice;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &choice);
    switch (choice) {
        case '+':
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;

        case '-':
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;

        case '*':
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case '/':
            result = divide(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid operation\n");
    }
    return 0;
}