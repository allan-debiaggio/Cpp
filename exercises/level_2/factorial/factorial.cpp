#include <iostream>

int factorial(int number);

int main(void)
{
    int number = 0;

    std::cout << "Enter a number, please : ";
    std::cin >> number;
    std::cout << factorial(number);

    return 0;
}

int factorial(int number)
{
    int result = number;
    for(int i = number - 1; i > 0; i--)
    {
        result *= i;
    }
    return result;
}
