#include <iostream>

bool prime(int number);

int main(void)
{
    int number;

    std::cout << "Give me an integer number : ";
    std::cin >> number;

    if(prime(number))
    {
        std::cout << "This is a prime number";
    }
    else
    {
        std::cout << "This is a composite number";
    }

    return 0;
}

bool prime(int number)
{
    int count = 0;
    for(int i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            count ++;
        }
    }
    if(count == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}