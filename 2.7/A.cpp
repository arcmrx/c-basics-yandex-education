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