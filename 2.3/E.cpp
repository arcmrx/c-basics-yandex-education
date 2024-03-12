#include <iostream>

int main()
{
    int n, k;
    std::cin >> n >> k;

    int dayOfWeek = n;

    for (int i = 1; i < n; ++i)
    {
        std::cout << "   ";
    }

    for (int day = 1; day <= k; ++day)
    {
        if (day < 10)
        {
            std::cout << " ";
        }

        std::cout << day;

        if (dayOfWeek == 7)
        {
            std::cout << "\n";
            dayOfWeek = 1;
        }
        else
        {
            std::cout << " ";
            dayOfWeek += 1;
        }
    }

    if (dayOfWeek != 1)
    {
        std::cout << "\n";
    }
}