#include <iostream>

void even_odd(int number);

int main (void)
{
    int number = 0;

    std::cout << "Give me a number : ";
    std::cin >> number;

    even_odd(number);

    return 0;

}

void even_odd(int number)
{
    if(number % 2 == 0)
    {
        std::cout << "This number is even";
    }
    else if(number % 2 > 0)
    {
        std::cout << "This number is odd";
    }
    else
    {
        std::cout << "This is not a good number, try again.";
    }
}