#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a >= b + c) or (b >= a + c) or (c >= b + a) or a == 0 or b == 0 or c == 0)
    {
        cout << "UNDEFINED" << endl;
        return 0;
    }
    if ((pow(a, 2) == (pow(b, 2) + pow(c, 2))) or (pow(b, 2) == (pow(c, 2) + pow(a, 2))) or (pow(c, 2) == (pow(b, 2) + pow(a, 2))))
    {
        cout << "YES" << endl;
        return 0;
    }
    else
    {
        cout << "NO" << endl;
        return 0;
    }
    return 0;
}