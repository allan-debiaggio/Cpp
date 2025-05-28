#include <iostream>

void table(int number);

int main(void)
{
    int number = 0;

    std::cout << "Give me an integer number : ";
    std::cin >> number;

    table(number);

    return 0;
}

void table(int number)
{
    int result = 0;

    for(int i = 1; i < 11; i ++)
    {
        result = number * i;
        std::cout << number << " * " << i << " = " << result << std::endl;
    }
}