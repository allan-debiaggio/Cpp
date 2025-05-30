#include <iostream>

int reverse(int number);

int main(void)
{
    int number = 0;

    do
    {
    std::cout << "Enter a number beyond 10 : ";
    std::cin >> number;
    }
    while(number < 10);
    
    std::cout << reverse(number);


    return 0;
}

int reverse(int number)
{
    int reversed = 0;
    
    while(number > 0)
    {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    return reversed;
}