#include <iostream>
#include <deque>
#include <vector>
#include <string>

int main()
{

    int count, number, nums;
    std::cin >> count;
    std::string name, locale;
    std::deque<std::string> data;
    std::vector<int> numbers;
    for (int i = 0; i != count; i++)
    {
        std::cin >> name >> locale;
        if (locale == "top")
        {
            data.push_front(name);
        }
        if (locale == "bottom")
        {
            data.push_back(name);
        }
    }

    std::cin >> number;
    for (int i = 0; i != number; i++)
    {
        std::cin >> nums;
        numbers.push_back(nums);
    }

    for (int i = 0; i != number; i++)
    {
        std::cout << data[numbers[i] - 1] << "\n";
    }
    return 0;
}