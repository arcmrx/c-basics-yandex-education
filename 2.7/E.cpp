#include <vector>
#include <string>

std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix)
{
    if (matrix.empty())
    {
        return std::vector<std::vector<int>>();
    }

    size_t num_rows = matrix.size();
    size_t num_cols = matrix[0].size();

    std::vector<std::vector<int>> result(num_cols, std::vector<int>(num_rows));

    for (size_t i = 0; i < num_rows; ++i)
    {
        for (size_t j = 0; j < num_cols; ++j)
        {
            result[j][i] = matrix[i][j];
        }
    }
    return result;
}