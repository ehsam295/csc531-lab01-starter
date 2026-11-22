#include "lab01.hpp"

bool insertAt(int a[], int& size, int cap, int pos, int x)
{
    if (pos < 0 || pos > size || size >= cap)
    {
        return false;
    }

    for (int i = size; i > pos; --i)
    {
        a[i] = a[i - 1];
    }

    a[pos] = x;
    ++size;
    return true;
}

bool deleteAt(int a[], int& size, int pos)
{
    if (pos < 0 || pos >= size)
    {
        return false;
    }

    // Shift following active elements one position to the left
    for (int i = pos; i < size - 1; ++i)
    {
        a[i] = a[i + 1];
    }

    --size;
    return true;
}
