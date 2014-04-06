#include "question_3.h"
#include <algorithm>

bool isLow(int number) {return number < 0;}
bool isHigh(int number) {return number > 0;}

vector<int>* question_3::sortArray(vector<int>& input_vec) {
  int medium_index = 0;
  int low_index = 0;
  int high_index = input_vec.size() - 1;
  vector<int> *return_vec = new vector<int>(input_vec);
  
  while (low_index <= high_index) {
    if (isHigh((*return_vec)[low_index])) {
      swap((*return_vec)[low_index], (*return_vec)[high_index]);
      --high_index;
    } else if (isLow((*return_vec)[low_index])) {
      swap((*return_vec)[low_index], (*return_vec)[medium_index]);
      ++low_index;
      ++medium_index;
    } else {
      ++low_index;
    }
  }
  
  return return_vec;
}
