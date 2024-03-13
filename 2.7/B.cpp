#include <string>
#include <vector>

std::string CommonPrefix(const std::vector<std::string> &words)
{
    if (words.empty())
    {
        return "";
    }

    std::string shortest = words[0];
    for (const std::string &word : words)
    {
        if (word.length() < shortest.length())
        {
            shortest = word;
        }
    }

    for (size_t i = 0; i < shortest.length(); ++i)
    {
        char current_char = shortest[i];
        for (const std::string &word : words)
        {
            if (word[i] != current_char)
            {
                return shortest.substr(0, i);
            }
        }
    }

    return shortest;
}