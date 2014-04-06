/* 
 * File:   question_2_test.cpp
 * Author: liangdeo
 *
 * Created on 18-Mar-2014, 11:45:26
 */

#include <stdlib.h>
#include <iostream>
#include "question_2.h"

using namespace question_2;
/*
 * Simple C++ Test Suite
 */

void testFindLargestNumberInArray(vector<int> &input_vec, int golden) {
  int result = findLargestNumberInArray(input_vec);
  if (result != golden) {
    std::cout 
            << "%TEST_FAILED% time=0 testname=testFindLargestNumberInArray "
            "(question_2_test) message=largest " 
            << result << " should be " << golden
            << std::endl;
  }
}

int main(int argc, char** argv) {
  std::cout << "%SUITE_STARTING% question_2_test" << std::endl;
  std::cout << "%SUITE_STARTED%" << std::endl;

  std::cout << "%TEST_STARTED% testFindLargestNumberInArray (question_2_test)" << std::endl;
  vector<int> input;
  input = {5, 2, 3, 1};
  testFindLargestNumberInArray(input, 5);
  input = {3, 5, 3, 1};
  testFindLargestNumberInArray(input, 5);
  input = {1};
  testFindLargestNumberInArray(input, 1);
  input.clear();
  testFindLargestNumberInArray(input, -1);
  std::cout << "%TEST_FINISHED% time=0 testFindLargestNumberInArray (question_2_test)" << std::endl;

  std::cout << "%SUITE_FINISHED% time=0" << std::endl;

  return (EXIT_SUCCESS);
}

