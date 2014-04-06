/* 
 * File:   question_11_test.cpp
 * Author: Deo Zhanzhao Liang <liangzhanzhao1985@gmail.com>
 *
 * Created on 04-Apr-2014, 11:42:00
 */

#include <stdlib.h>
#include <iostream>
#include "question_11.h"

/*
 * Simple C++ Test Suite
 */
using namespace question_11;
void testCalculateSpan(const vector<int> &input, const vector<int> &golden) {
  vector<int> &result = calculateSpan(input);
  for (int i = 0; i < result.size(); ++i) {
    if (result[i] != golden[i]) {
      std::cout << "%TEST_FAILED% time=0 testname=testCalculateSpan (question_11_test) message=" << result[i] << golden[i] << i << std::endl;
    }
  }
}

int main(int argc, char** argv) {
  std::cout << "%SUITE_STARTING% question_11_test" << std::endl;
  std::cout << "%SUITE_STARTED%" << std::endl;

  std::cout << "%TEST_STARTED% testCalculateSpan (question_11_test)" << std::endl;
  vector<int> input = {2,4,6,9,5,7,1};
  vector<int> golden = {-1,1,2,3,2,3,-1};
  std::cout << "%TEST_STARTED% testCalculateSpan (question_11_test1)" << std::endl;
  testCalculateSpan(input, golden);
  std::cout << "%TEST_FINISHED% time=0 testCalculateSpan (question_11_test)" << std::endl;

  std::cout << "%SUITE_FINISHED% time=0" << std::endl;

  return (EXIT_SUCCESS);
}

