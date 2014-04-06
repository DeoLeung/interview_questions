#include "question_1.h"

// Increases the value at a position and move the tens to previous bit if 
// necessary.
void question_1::increase(list<int>::iterator it, int value) {
  *it += value;
  while (*it > 9) {
    // Adds up the previous bit if current one is bigger than 9.
    value = *it / 10;
    *it %= 10;
    // TODO: this may be out of range if not handled by outer method correctly.
    --it;
    *it += value;
  }
}

forward_list<int>* question_1::multiply(
        const forward_list<int> &fl_a, const forward_list<int> &fl_b) {
  if (fl_a.empty() || fl_b.empty()) {
    // Checks that both of the input are not empty.
    return NULL;
  }

  // Uses a doubly linked list to store the multiplied result.
  list<int> result;
  // There may be one extra MSB at the beginning, add it to avoid out of index.
  result.push_back(0);
  auto main_it = result.begin();
  bool first_iteration = true;
  for (auto &b : fl_b) {
    result.push_back(0);
    ++main_it;
    auto current_it = main_it;
    for (auto &a : fl_a) {
      increase(current_it, a * b);
      if (first_iteration) result.push_back(0);
      ++current_it;
    }
    if (first_iteration) {
      first_iteration = false;
      result.pop_back();
    }
  }
  
  // Removes the leading 0s.
  forward_list<int>* return_result = new forward_list<int>;
  auto it = result.begin();
  while (*it == 0 && it != result.end()) ++it;
  if (it == result.end()) {
    // the result is zero.
    return_result->assign(1, 0);
  } else {
    return_result->insert_after(
          return_result->before_begin(), it, result.end());
  }
  return return_result;
}