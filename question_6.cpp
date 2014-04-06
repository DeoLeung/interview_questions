#include "question_6.h"
#include <vector>

template<typename T>
bool _ge(const T &str_1, const string &str_2) {
  if (str_1.size() > str_2.size()) return true;
  if (str_1.size() < str_2.size()) return false;
  if (str_1.size() == str_2.size()) {
    for (int i = 0; i < str_1.size(); ++i) {
      if (str_1[i] < str_2[i]) return false;
      if (str_1[i] > str_2[i]) return true;
    }
  }
  return true;
}

string* question_6::nextInteger(const string& input_0) {
  // valid input should not greater than 123456788
  if (!_ge(string("123456788"), input_0)) return NULL;
  // plus the input by one
  string input(input_0);
  for (int i = input.size() - 1; i >= 0; --i) {
    if (input[i] == '9') {
      input[i] = '0';
      if (i == 0) {
        input = "1" + input;
      }
    } else {
      input[i] += 1;
      break;
    }
  }
    
  vector<char> buffer;
  // construct a string of the maximum for the same length.
  for (int i = input.size() - 1; i >= 0; --i) {
    buffer.push_back('9' - i);
  }
  // the next greater one needs extra significant bit.
  if (!_ge(buffer, input)) {
    string *next = new string(input.size() + 1, '0');
    for (int i = 0; i <= input.size(); ++i) {
      (*next)[i] += i + 1;
    }
    return next;
  }
  // the next greater one doesn't need extra significant bit.
  char prev = input[0];
  int i = 0;
  for (; i < input.size(); ++i) {
    // choose the bigger one, the previous bit + 1 or the input bit.
    buffer[i] = prev > input[i]? prev: input[i];
    if (!_ge(buffer, input)) {
      // if we found the current number is lower than the input one, increase
      // current bit by 1
      buffer[i] += 1;
      ++i;
      break;
    }
    prev = buffer[i] + 1;
  }
  for (; i < input.size(); ++i) {
    // since previous bit has been increased by 1, the smaller one for the rest
    // bits will just increase 1 each.
    buffer[i] = buffer[i - 1] + 1;
  }
  string *next = new string(buffer.size(), '0');
  for (int i = 0; i < buffer.size(); ++i) (*next)[i] = buffer[i];
  return next;
}
