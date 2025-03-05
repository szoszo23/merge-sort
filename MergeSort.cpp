#include "MergeSort.h"

void MergeSort::mergeSort(std::vector<int> &arr, int left, int right) {
  if (left < right) {
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
  }
}

void MergeSort::merge(std::vector<int> &arr, int left, int mid, int right) {
  std::vector<int> leftPart(arr.begin() + left, arr.begin() + mid + 1);
  std::vector<int> rightPart(arr.begin() + mid + 1, arr.begin() + right + 1);

  int i = 0, j = 0, k = left;
  while (i < leftPart.size() && j < rightPart.size()) {
    if (leftPart[i] <= rightPart[j]) {
      arr[k++] = leftPart[i++];
    } else {
      arr[k++] = rightPart[j++];
    }
  }

  while (i < leftPart.size()) {
    arr[k++] = leftPart[i++];
  }

  while (j < rightPart.size()) {
    arr[k++] = rightPart[j++];
  }
}

void MergeSort::sort(std::vector<int> &arr) {
  if (arr.size() > 1) {
    mergeSort(arr, 0, arr.size() - 1);
  }
}
