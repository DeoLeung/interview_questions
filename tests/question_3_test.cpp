/* 
 * File:   question_3_test.cpp
 * Author: liangdeo
 *
 * Created on 19-Mar-2014, 10:59:15
 */

#include <stdlib.h>
#include <iostream>
#include "question_3.h"

/*
 * Simple C++ Test Suite
 */
using namespace question_3;

void testSortArray() {
  vector<int> input_vec = {0, 1, -1, 0, 1, -1};
  vector<int>* result = sortArray(input_vec);
  int golden[] = {-1, -1, 0, 0, 1, 1};
  for (int i = 0; i < result->size(); ++i) {
    if ((*result)[i] != golden[i]) {
     std::cout 
             << "%TEST_FAILED% time=0 testname=testSortArray (question_3_test) message=index "
             << i 
             << " should be " << golden[i] 
             << " found " << (*result)[i] << std::endl;
    }
  }
}

int main(int argc, char** argv) {
  std::cout << "%SUITE_STARTING% question_3_test" << std::endl;
  std::cout << "%SUITE_STARTED%" << std::endl;

  std::cout << "%TEST_STARTED% testSortArray (question_3_test)" << std::endl;
  testSortArray();
  std::cout << "%TEST_FINISHED% time=0 testSortArray (question_3_test)" << std::endl;

  std::cout << "%SUITE_FINISHED% time=0" << std::endl;

  return (EXIT_SUCCESS);
}

