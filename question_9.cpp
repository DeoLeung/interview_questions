#include "question_9.h"

bool question_9::hasPattern(const string &input, const string &pattern) {
  if (input.empty() || pattern.empty() || pattern.size() > input.size()) {
    // error cases
    return false;
  }
  // Uses counting on the alphabet to track anagram.
  char pattern_count[26] = {0};
  for (auto &c : pattern) {
    ++pattern_count[c - 'a'];
  }
  
  // Uses slide window of pattern size to compare whether it could be an anagram
  char input_count[26] = {0};
  // When extra_count equals to zero after initialization, it means it's an
  // anagram.
  int extra_count = 0;
  for (int i = 0; i < pattern.size(); ++i) {
    int index = input[i] - 'a';
    ++input_count[index];
    if (input_count[index] > pattern_count[index]) {
      ++extra_count;
    }
  }
  int i = 0;
  // Moves the slide window.
  while (extra_count > 0 && i < input.size() - pattern.size()) {
    int index = input[i] - 'a';
    if (input_count[index] > pattern_count[index]) {
      --extra_count;
    }
    --input_count[index];
    index = input[i + pattern.size()] - 'a';
    ++input_count[index];
    if (input_count[index] > pattern_count[index]) {
      ++extra_count;
    }
    ++i;
  }
  return extra_count == 0;
}
