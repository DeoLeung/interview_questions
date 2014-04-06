#include "question_12.h"
#include <set>
#include <utility>

using namespace question_12;

bool findWordFromNode(const vector<vector<char> > &matrix, 
                      const int row, const int column, 
                      set<pair<int, int> > visited, 
                      const string &word, const int next_char) {
  // reach the end of the word(we found it)
  if (next_char == word.size()) return true;
  // check if we have visited this node before.
  const pair<int, int> next = make_pair(row, column);
  if (visited.find(next) != visited.end()) return false;

  visited.insert(next);
  const char &target = word[next_char];

  // up
  if (row > 0 && matrix[row - 1][column] == target &&
      findWordFromNode(
          matrix, row - 1, column, visited, word, next_char + 1)) {
        return true;
  }
  // down
  if (row < matrix.size() - 1 && matrix[row + 1][column] == target &&
      findWordFromNode(
          matrix, row + 1, column, visited, word, next_char + 1)) {
        return true;
  }
  // left
  if (column > 0 && matrix[row][column - 1] == target &&
      findWordFromNode(
          matrix, row, column - 1, visited, word, next_char + 1)) {
        return true;
  }
  // right
  if (column < matrix[row].size() - 1 && matrix[row][column + 1] == target &&
      findWordFromNode(
          matrix, row, column + 1, visited, word, next_char + 1)) {
        return true;
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
        if (findWordFromNode(matrix, r, c, visited, word, 1)) return true;
      }
    }
  }
  return false;
}
