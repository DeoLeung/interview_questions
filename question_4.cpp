#include "question_4.h"

using namespace question_4;

int question_4::findPeak(const vector<int>& vec) {
  // TODO: handle empty input.
  int left = 0;
  int right = vec.size() - 1;
  while (left < right) {
    int middle = (left + right + 1) / 2;
    if (vec[middle - 1] < vec[middle]) {
      // going up.
      left = middle;
    } else {
      // going down.
      right = middle -1;
    }
  }
  return vec[left];
}
