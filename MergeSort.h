﻿#ifndef MERGESORT_H
#define MERGESORT_H
#include <vector>

class MergeSort {
private:
  static void mergeSort(std::vector<int> &arr, int left, int right);
  static void merge(std::vector<int> &arr, int left, int mid, int right);

public:
  static void sort(std::vector<int> &arr);
};

#endif // MERGESORT_H
