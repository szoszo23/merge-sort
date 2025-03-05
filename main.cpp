

#include "MergeSort.h"

#include <iostream>
#include <vector>
int main() {
  std::vector<int> array = {2, 1, 5, 6, 3, 4, 10, 7, 9, 8};
  for (const int &i : array) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  MergeSort::sort(array);

  for (const int &i : array) {
    std::cout << i << " ";
  }

  return 0;
}