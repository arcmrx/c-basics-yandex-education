#include <algorithm>
#include <iostream>
#include <vector>

struct XYs
{
    int x;
    int y;
};

bool operator<(const XYs &lhs, const XYs &rhs)
{
    return lhs.x * lhs.x + lhs.y * lhs.y < rhs.x * rhs.x + rhs.y * rhs.y;
}

int main()
{
    std::vector<XYs> xys;
    int count, x, y;
    std::cin >> count;
    for (int i = 0; i != count; i++)
    {
        std::cin >> x >> y;
        xys.push_back(XYs{x, y});
    }
    std::sort(xys.begin(), xys.end(), operator<);

    for (const auto &[x, y] : xys)
    {
        std::cout << x << " " << y << "\n";
    }
}