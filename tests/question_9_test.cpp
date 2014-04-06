/* 
 * File:   question_9_test.cpp
 * Author: liangdeo
 *
 * Created on 24-Mar-2014, 13:52:25
 */

#include <stdlib.h>
#include <iostream>
#include "question_9.h"

/*
 * Simple C++ Test Suite
 */
using namespace question_9;
void testHasPattern(const string& input, const string& pattern, bool golden) {
  bool result = hasPattern(input, pattern);
  if (result != golden) {
    std::cout << "%TEST_FAILED% time=0 testname=testHasPattern (question_9_test) message=\n" << 
        "input: " << input << " pattern: " << pattern << endl <<
        "expect: " << golden << endl <<
        "actual: " << result << std::endl;
  }
}

int main(int argc, char** argv) {
  std::cout << "%SUITE_STARTING% question_9_test" << std::endl;
  std::cout << "%SUITE_STARTED%" << std::endl;

  std::cout << "%TEST_STARTED% testHasPattern (question_9_test)" << std::endl;
  testHasPattern("abcdyzxabc", "xyz", true);
  cout << "---";
  testHasPattern("abcdyzxabc", "oo", false);
  std::cout << "%TEST_FINISHED% time=0 testHasPattern (question_9_test)" << std::endl;

  std::cout << "%SUITE_FINISHED% time=0" << std::endl;

  return (EXIT_SUCCESS);
}

