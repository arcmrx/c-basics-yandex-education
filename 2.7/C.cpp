#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> Split(const std::string &str, char delimiter)
{
    std::vector<std::string> done;
    int pos = 0;
    for (size_t i = 0; i != str.size(); ++i)
    {
        if (str[i]  == delimiter)
        {
            done.push_back(str.substr(pos, i - pos));
            pos = i + 1;
        }
    }
    done.push_back(str.substr(pos));
    return done;
}