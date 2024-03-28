#include <deque>
#include <iostream>
#include <string>

void TextEditor()
{
    std::deque<int> train;
    std::string comm;
    int numWag;
    size_t k;
    while (std::cin >> comm)
    {
        if (comm == "+left")
        {
            std::cin >> numWag;
            train.push_front(numWag);
        }
        else if (comm == "+right")
        {
            std::cin >> numWag;
            train.push_back(numWag);
        }
        else if (comm == "-left")
        {
            std::cin >> k;
            k = std::min(k, train.size());
            train.erase(train.begin(), train.begin() + k);
        }
        else if (comm == "-right")
        {
            std::cin >> k;
            k = std::min(k, train.size());
            train.erase(train.end() - k, train.end());
        }
    }

    for (const auto &numWag : train)
    {
        std::cout << numWag << " ";
    }
    std::cout << "\n";
}