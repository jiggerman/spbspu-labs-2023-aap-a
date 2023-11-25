#include "searchMax.hpp"

int novokhatskiy::searchMax(int matrix[], size_t rows, size_t cols)
{
  int max = 0;
  size_t size = std::min(rows,cols);
  for (int i = 0; i < size - 1; i++)
  {
    int sum = 0;
    for (int j = 0; j <= i * cols; j += cols -1)
    {
      sum += matrix[j];
    }
    if (sum > max)
    {
      max = sum;
    }
  }
  for (int i = size - 1 + cols; i < rows * cols; i += cols)
  {
    int sum = 0;
    for (int j = i; j < rows * cols; j += cols - 1)
    {
      sum += matrix[j];
    }
    if (sum > max)
    {
      max = sum;
    }
  }
  return max;
}


