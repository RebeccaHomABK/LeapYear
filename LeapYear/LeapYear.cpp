#include <iostream>

int main()
{
    //  Gets the year.
    std::cout << "Enter a year: ";
    int year;
    std::cin >> year;

    //  Checks if the year is a leap year.
    if (((year % 400) == 0) 
        || (((year % 4) == 0) && !((year % 100) == 0)))
    {
        std::cout << year << " is a leap year." << std::endl;
    }
    else
    {
        std::cout << year << " is not a leap year." << std::endl;
    }
}