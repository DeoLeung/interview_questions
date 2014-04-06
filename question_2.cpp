#include "question_2.h"
#include <algorithm>

int question_2::quickSort(vector<int> &input_vec, int left_index) {
  int pivot_index = (left_index + input_vec.size()) / 2;
  // Moves pivot value to the end.
  swap(input_vec[pivot_index], input_vec.back());
  int right_index = input_vec.size() - 2;
  const int pivot = input_vec[pivot_index];
  while (left_index < right_index) {
    while (input_vec[left_index] < pivot) {
      ++left_index;
    }
    while (input_vec[right_index] >= pivot) {
      --right_index;
    }
    if (left_index < right_index) {
      swap(input_vec[left_index], input_vec[right_index]);
      ++left_index;
      --right_index;
    }
  }
  pivot_index = right_index > left_index? right_index: left_index;
  swap(input_vec[pivot_index], input_vec.back());
  return pivot_index;
}

int question_2::findLargestNumberInArray(vector<int> &input_vec) {
  // This assumes the elements in the vector is non-negative, we can add other
  // error handling if the input is empty.
  if (input_vec.empty()) return -1;
  int start_index = 0;
  do {
    start_index = quickSort(input_vec, start_index);
  } while (start_index < input_vec.size() - 2);
  return input_vec.back();
}

/*
int question_2::findLargestNumberInArray(vector<int> &input_vec) {
  // This assumes the elements in the vector is non-negative, we can add other
  // error handling if the input is empty.
  if (input_vec.empty()) return -1;
  int start_index = 0;
  do {
    start_index = quickSort(input_vec, start_index);
  } while (start_index < input_vec.size() - 2);
  return input_vec.back();
}
*/
