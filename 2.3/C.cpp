#include <iostream>

int main()
{
    int year;
    std::cin >> year;
    if (year % 400 == 0)
    {
        std::cout << "YES";
        return 0;
    }
    else if (year % 100 == 0)
    {
        std::cout << "NO";
        return 0;
    }
    else if (year % 4 == 0)
    {
        std::cout << "YES";
        return 0;
    }
    else
    {
        std::cout << "NO";
        return 0;
    }
    return 0;
}