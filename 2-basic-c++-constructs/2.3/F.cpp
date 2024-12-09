#include <iostream>

int main()
{
    int number, ss = 0;
    std::cin >> number;
    while (number > 0)
    {
        ss += number % 10;
        number /= 10;
    }
    std::cout << ss;
    return 0;
}