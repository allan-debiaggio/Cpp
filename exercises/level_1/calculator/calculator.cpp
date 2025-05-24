#include <iostream>

float calculator(float num1, char operation, float num2);

int main(void)
{
    float num1 = 0;
    float num2 = 0;
    char operation;
    float result = 0;

    std::cout << "Enter the first number : ";
    std::cin >> num1;
    std::cout << "Enter the operation type (+, -, *, /) : ";
    std::cin >> operation;
    std::cout << "Enter the second number : ";
    std::cin >> num2;

    result = calculator(num1, operation, num2);

    std::cout << "The result of " << num1 << " " << operation << " " << num2 << " is " << result;

    return 0;
}

float calculator(float num1, char operation, float num2)
{
    switch(operation)
    {
        case '+' :
            return num1 + num2;
            break;
        case '-' :
            return num1 - num2;
            break;
        case '*' :
            return num1 * num2;
            break;
        case '/' :
            return num1 / num2;
            break;
        default :
            std::cout << "This is not an accepted operator. Please try again.";
            break;
    }
    return 0;
}