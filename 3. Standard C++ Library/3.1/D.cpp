#include <iostream>
#include <list>
#include <string>
#include <utility>

int main()
{
    std::list<std::string> file;

    while (true)
    {
        std::string line;
        std::getline(std::cin, line);

        if (line.empty())
        {
            break;
        }

        file.push_back(line);
    }

    auto cursor = file.begin();
    std::string buffer;

    std::string command;
    while (std::cin >> command)
    {
        if (command == "Up")
        {
            if (cursor == file.begin())
            {
                continue;
            }
            --cursor;
        }
        else if (command == "Down")
        {
            if (cursor == file.end())
            {
                continue;
            }
            ++cursor;
        }
        else if (command == "Ctrl+X")
        {
            if (cursor == file.end())
            {
                continue;
            }
            buffer = std::move(*cursor);
            cursor = file.erase(cursor);
        }
        else if (command == "Ctrl+V")
        {
            if (buffer.empty())
            {
                continue;
            }
            file.insert(cursor, buffer);
        }
    }

    for (const auto &x : file)
    {
        std::cout << x << "\n";
    }
}
