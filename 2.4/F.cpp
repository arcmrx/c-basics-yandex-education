#include <iostream>
#include <vector>

int main()
{
    int m, n, k, x, y;
    std::cin >> m >> n >> k;
    std::vector<std::vector<char>> matrix(m + 2, std::vector<char>(n + 2, '0')); // m -  количество строк на поле; n - количество столбцов на поле;
    for (int i = 1; i <= k; i++)
    {
        std::cin >> x >> y;
        matrix[x][y] = '*';
    }
    std::vector<std::pair<int, int>> deltas = {{1, 1}, {-1, 1}, {1, -1}, {-1, -1}, {0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (matrix[i][j] == '0')
            {
                int c = 0;
                for (auto p : deltas)
                {
                    c += (matrix[i + p.first][j + p.second] == '*');
                }
                matrix[i][j] = std::to_string(c)[0];
            }
        }
    }
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            std::cout << matrix[i][j];
            std::cout << " ";
        }
        std::cout << "\n";
    }
}