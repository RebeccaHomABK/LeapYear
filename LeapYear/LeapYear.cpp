#include <iostream>

int main()
{
    //  Gets the year.
    std::cout << "Enter a year: ";
    int year;
    std::cin >> year;

    //  Checks if the year is a leap year.
    bool isLeapYear;
    isLeapYear = (year % 4) == 0;
    
    //  Checks if the year is a multiple of 100.
    if (isLeapYear && ((year % 100) == 0))
    {
        isLeapYear = false;
    }
    if (isLeapYear || (year % 400) == 0)
    {
        std::cout << year << " is a leap year." << std::endl;
    }
    else
    {
        std::cout << year << " is not a leap year." << std::endl;
    }
}