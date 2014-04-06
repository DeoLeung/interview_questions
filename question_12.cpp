#include "question_12.h"
#include <set>
#include <utility>

using namespace question_12;

bool findWordFromNode(const vector<vector<char> > &matrix, 
                      const int row, const int column, 
                      set<pair<int, int> > visited, 
                      const string &word, const int char_index) {
  // reach the end of the word(we found it)
  if (char_index == word.size()) return true;
  const char &target = word[char_index];
  // up
  if (row > 0 && matrix[row - 1][column] == target) {
    const pair<int, int> next = make_pair(row - 1, column);
    if (visited.find(next) == visited.end()) {
      visited.insert(next);
      if (findWordFromNode(
          matrix, row - 1, column, visited, word, char_index + 1)) {
        return true;
      }
    }
  }
  // down
  if (row < matrix.size() - 1 && matrix[row + 1][column] == target) {
    const pair<int, int> next = make_pair(row + 1, column);
    if (visited.find(next) == visited.end()) {
      visited.insert(next);
      if (findWordFromNode(
          matrix, row + 1, column, visited, word, char_index + 1)) {
        return true;
      }
    }
  }
  // left
  if (column > 0 && matrix[row][column - 1] == target) {
    const pair<int, int> next = make_pair(row, column - 1);
    if (visited.find(next) == visited.end()) {
      visited.insert(next);
      if (findWordFromNode(
          matrix, row, column - 1, visited, word, char_index + 1)) {
        return true;
      }
    }
  }
  // right
  if (column < matrix[row].size() - 1 && matrix[row][column + 1] == target) {
    const pair<int, int> next = make_pair(row, column + 1);
    if (visited.find(next) == visited.end()) {
      visited.insert(next);
      if (findWordFromNode(
          matrix, row, column + 1, visited, word, char_index + 1)) {
        return true;
      }
    }
  }
  return false;
}

bool question_12::findWordInMatrix(
    const vector<vector<char> >& matrix, const string& word) {
  if (word.empty()) return false;
  for (int r = 0; r < matrix.size(); ++r) {
    for (int c = 0; c < matrix[r].size(); ++c) {
      if (matrix[r][c] == word[0]) {
        set<pair<int, int> > visited;
        visited.insert(make_pair(r, c));
        if (findWordFromNode(matrix, r, c, visited, word, 1)) return true;
      }
    }
  }
  return false;
}
