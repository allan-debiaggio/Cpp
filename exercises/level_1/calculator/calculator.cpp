#include <iostream>

int main(void)
{
    float num1 = 0;
    float num2 = 0;
    char operation;
    float result = 0;

    std::cout << "Enter the first number : " << std::endl;
    std::cin >> num1;
    std::cout << "Enter the operation type (+, -, *, /) : ";
    std::cin >> operation;
    std::cout << "Enter the second number : " << std::endl;
    std::cin >> num2;

    switch(operation)
    {
        case '+' :
            result = num1 + num2;
            break;
        case '-' :
            result = num1 - num2;
            break;
        case '*' :
            result = num1 * num2;
            break;
        case '/' :
            result = num1 / num2;
            break;
        default :
            std::cout << "This is not an accepted operator. Please try again.";
            break;
    }

    std::cout << "The result of " << num1 << " " << operation << " " << num2 << " is " << result;

    return 0;
}