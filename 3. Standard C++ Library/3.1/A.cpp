#include <iostream>
#include <vector>
#include <string>

template <typename T>

void Print(const T &data, const std::string &str)
{
    bool first = true;

    for (const auto &elem : data)
    {
        if (!first)
        {
            std::cout << delimiter;
        }
        else
        {
            first = false;
        }

        std::cout << elem;
    }

    std::cout << "\n";
}