#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> lines;
    std::string line;
    while (std::getline(std::cin, line))
    {
        lines.push_back(line);
    }
    std::sort(lines.rbegin(), lines.rend());

    for (const auto &l : lines)
    {
        std::cout << l << "\n";
    }
}