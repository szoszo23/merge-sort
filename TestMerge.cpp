#include "gtest/gtest.h"
#include "MergeSort.h"  // Adjust path if necessary

TEST(MergeSortTest, SortsCorrectly) {
  std::vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
  MergeSort::sort(arr);
  EXPECT_EQ(arr, (std::vector<int>{3, 9, 10, 27, 38, 43, 82}));
}

TEST(MergeSortTest, HandlesEmptyArray) {
  std::vector<int> arr = {};
  MergeSort::sort(arr);
  EXPECT_TRUE(arr.empty());
}

TEST(MergeSortTest, HandlesSingleElement) {
  std::vector<int> arr = {42};
  MergeSort::sort(arr);
  EXPECT_EQ(arr, (std::vector<int>{42}));
}

TEST(MergeSortTest, HandlesAlreadySorted) {
  std::vector<int> arr = {1, 2, 3, 4, 5};
  MergeSort::sort(arr);
  EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(MergeSortTest, HandlesReverseSorted) {
  std::vector<int> arr = {5, 4, 3, 2, 1};
  MergeSort::sort(arr);
  EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

TEST(MergeSortTest, HandlesDuplicates) {
  std::vector<int> arr = {4, 2, 4, 1, 3, 2};
  MergeSort::sort(arr);
  EXPECT_EQ(arr, (std::vector<int>{1, 2, 2, 3, 4, 4}));
}


