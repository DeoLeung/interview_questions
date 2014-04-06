#include "question_12.h"
#include <set>
#include <utility>

using namespace question_12;

bool findWordFromNode(const vector<vector<char> > &matrix, const string &word, int row, int column) {
  set<pair<int, int> > visited;
  visited.insert(make_pair(row, column));
  for (int c = 1; c < word.size(); ++c) {
    // up
    if (row > 0 && matrix[row - 1][column] == word[c] && visited.find(make_pair(row - 1, column)) == visited.end()) {
      visited.insert(make_pair(row - 1, column));
      row -= 1;
      continue;
    }
    // down
    if (row > 0 && matrix[row - 1][column] == word[c] && visited.find(make_pair(row - 1, column)) == visited.end()) {
      visited.insert(make_pair(row - 1, column));
      row -= 1;
      continue;
    }
    // up
    if (row > 0 && matrix[row - 1][column] == word[c] && visited.find(make_pair(row - 1, column)) == visited.end()) {
      visited.insert(make_pair(row - 1, column));
      row -= 1;
      continue;
    }
    // up
    if (row > 0 && matrix[row - 1][column] == word[c] && visited.find(make_pair(row - 1, column)) == visited.end()) {
      visited.insert(make_pair(row - 1, column));
      row -= 1;
      continue;
    }
  }
}
bool question_12::findWordInMatrix(
    const vector<vector<char> >& matrix, const string& word) {
  if (word.empty()) return false;
  for (int r = 0; r < matrix.size(); ++r) {
    for (int c = 0; c < matrix[r].size(); ++c) {
      if (matrix[r][c] == word[0] && findWordInMatrix(matrix, word, r, c)) {
        return true;
      }
    }
  }
  return false;
}
