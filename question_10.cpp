#include "question_10.h"

#include <iostream>

void question_10::findMinRectangle(const vector<vector<int> > &map) {
  const int num_row = map.size();
  const int num_column = map[0].size();

  int row_min = 0;
  int column_min = 0;
  int row_max = num_row - 1;
  int column_max = num_column - 1;

  // Finds the top.
  bool find_black = false;
  for (; row_min < num_row; ++row_min) {
    for (const auto &c: map[row_min]) {
      if (c == 1) {
        find_black = true;
        break;
      }
    }
    if (find_black) break;
  }
  if (!find_black) {
    // There is no black point in the map.
    cout << "No black in the map." << endl;
    return;
  }
  // Finds the left.
  find_black = false;
  for (; column_min < num_column; ++column_min) {
    for (int r = row_min; r < num_row; ++r) {
      if (map[r][column_min] == 1) {
        find_black = true;
        break;
      }
    }
    if (find_black) break;
  }
  // Finds the bottom.
  find_black = false;
  for (; row_max > row_min; --row_max) {
    for (int c = column_min; c < num_column; ++c) {
      if (map[row_max][c] == 1) {
        find_black = true;
        break;
      }
    }
    if (find_black) break;
  }
  // Finds the right.
  find_black = false;
  for (; column_max > column_min; --column_max) {
    for (int r = row_min; r <= row_max; ++r) {
      if (map[r][column_max] == 1) {
        find_black = true;
        break;
      }
    }
    if (find_black) break;
  }
  cout << 
      "(" << row_min << "," << column_min << ") - (" << 
      row_max << "," << column_max << ")" << endl;
}
