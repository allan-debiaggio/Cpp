#include <iostream>

float converter(char unit, float temp);

int main(void)
{
    char unit;
    float temp = 0;

    std::cout << "Enter unit for input temperature (C or F) : ";
    std::cin >> unit;
    std::cout << "Enter the temperature you want to convert : ";
    std::cin >> temp;

    std::cout << converter(unit, temp);

    return 0;
}

float converter(char unit, float temp)
{
    float result = 0;

    switch(unit)
    {
        case 'F':
            result = (temp - 32) * 5 / 9;
            break;
        case 'C':
            result = (temp * 9 / 5) + 32;
            break;
        default :
            std::cout << "This is not a valid unit";
            break;
    }

    return result;
}