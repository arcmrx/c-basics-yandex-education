#include <iostream>
#include <vector>
#include <utility>

std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>> &matrix)
{
    size_t maxR = 0;
    size_t maxC = 0;
    int maxVal = matrix[0][0];

    for (size_t i = 0; i != matrix.size(); ++i)
    {
        for (size_t j = 0; j != matrix[i].size(); ++j)
        {
            if (maxVal < matrix[i][j])
            {
                maxVal = matrix[i][j];
                maxR = i;
                maxC = j;
            }
        }
    }
    return std::make_pair(maxR, maxC);
}

// int main()
// {
//     int countR, countC;
//     std::cin >> countR >> countC;
//     std::vector<std::vector<int>> matrix(countR, std::vector<int>(countC));
//     for (int i = 0; i != countR; ++i)
//     {
//         for (int j = 0; j != countC; ++j)
//         {
//             std::cin >> matrix[i][j];
//         }
//     }

//     std::cout << MatrixArgMax(matrix).first << " " << MatrixArgMax(matrix).second;

//     return 0;
// }