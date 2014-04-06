/* 
 * File:   question_4_test.cpp
 * Author: liangdeo
 *
 * Created on 19-Mar-2014, 12:27:30
 */

#include <stdlib.h>
#include <iostream>
#include "question_4.h"

/*
 * Simple C++ Test Suite
 */
using namespace question_4;
void testFindPeak(const vector<int> &vec, const int golden) {
  int result = findPeak(vec);
  if (result != golden) {
    std::cout << "%TEST_FAILED% time=0 testname=testFindPeak (question_4_test) message=error message sample" << std::endl;
  }
}

int main(int argc, char** argv) {
  std::cout << "%SUITE_STARTING% question_4_test" << std::endl;
  std::cout << "%SUITE_STARTED%" << std::endl;

  std::cout << "%TEST_STARTED% testFindPeak (question_4_test)" << std::endl;
  vector<int> input;
  input = {1, 2, 3, 4, 3, 2, 1};
  testFindPeak(input, 4);
  input = {1};
  testFindPeak(input, 1);
  input = {1, 2};
  testFindPeak(input, 2);
  input = {2, 1};
  testFindPeak(input, 2);
  std::cout << "%TEST_FINISHED% time=0 testFindPeak (question_4_test)" << std::endl;

  std::cout << "%SUITE_FINISHED% time=0" << std::endl;

  return (EXIT_SUCCESS);
}

