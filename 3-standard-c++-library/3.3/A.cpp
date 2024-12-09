#include <vector>

template <typename T>
void Duplicate(std::vector<T> &v)
{
    for (size_t n = v.size(), i = 0; i < n; ++i)
    {
        v.push_back(v[i]);
    }
}