#include <iostream>

float simple_interest(float principal, float rate, float time);

int main(void)
{
    float principal = 0;
    float rate = 0;
    float time = 0;

    std::cout << "Welcome to the Simple Interest Calculator" << std::endl;
    std::cout << "Give a principal (Amount of money that you will borrow to the bank) : ";
    std::cin >> principal;
    std::cout << "Give a rate of interest for the bank : ";
    std::cin >> rate;
    std::cout << "Give the time(years) in which the principal is given : ";
    std::cin >> time;

    std::cout << simple_interest(principal, rate, time); 

    return 0;
}

float simple_interest(float principal, float rate, float time)
{
    return (principal * rate * time) / 100;
} 