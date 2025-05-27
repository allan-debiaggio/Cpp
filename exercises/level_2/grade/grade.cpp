#include <iostream>
#include <cctype>

void grade(int number);

int main(void)
{
    int number;

    std::cout << "Enter a grade  : ";
    std::cin >> number;

    grade(number);

    return 0;
}

void grade(int number)
{
    if(number == 100)
    {
        std::cout << "Grade A+, PERFECT !!!";
    }
    else if(number < 100 && number > 79)
    {
        std::cout << "Grade A";
    }
    else if(number < 80 && number > 59)
    {
        std::cout << "Grade B";
    }
    else if(number < 60 && number > 39)
    {
        std::cout << "Grade C";
    }
    else if(number < 40 && number > 19)
    {
        std::cout << "Grade D";
    }
    else if(number < 20 && number > 0)
    {
        std::cout << "Grade F";
    }
    else if(number == 0)
    {
        std::cout << "Grade Z, as in ZERO !!! :@";
    }
    else
    {
        std::cout << "You serious ? Not a valid number.";
    }
}