#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    double start = 1;
    double resault = 0.0;
    for (int i = 1; i <= n; ++i)
    {
        resault += start / i;
        start = -start;
    }
    std::cout << resault;
}