#include <vector>
#include <string>

std::string Join(const std::vector<std::string> &tokens, char delimiter)
{
    std::string result = "";
    for (size_t i = 0; i != tokens.size(); ++i)
    {
        result += tokens[i] + delimiter;
    }
    return result.substr(0, result.length() - 1);
}
