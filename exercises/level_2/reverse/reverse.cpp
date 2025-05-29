#include <iostream>

int main(void)
{
    int number = 0;

    do
    {
    std::cout << "Enter a number between 10 and 99 : ";
    std::cin >> number;
    }
    while(number < 10 || number > 99);
    


    return 0;
}