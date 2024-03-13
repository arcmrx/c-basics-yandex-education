#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::getline(std::cin, s);

    int i = 0;
    int j = static_cast<int>(s.size()) - 1;
    bool isPalindrome = true;

    while (i < j)
    {
        if (s[i] == ' ')
        {
            ++i;
        }
        else if (s[j] == ' ')
        {
            --j;
        }
        else if (s[i] != s[j])
        {
            isPalindrome = false;
            break;
        }
        else
        {
            ++i;
            --j;
        }
    }

    if (isPalindrome)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
    }
}