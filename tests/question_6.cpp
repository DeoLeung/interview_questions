/* 
 * File:   question_6.cpp
 * Author: liangdeo
 *
 * Created on 20-Mar-2014, 11:27:06
 */

#include <stdlib.h>
#include <iostream>
#include "question_6.h"

/*
 * Simple C++ Test Suite
 */
using namespace question_6;

void testNextInteger() {
  const string input = "999";
  string* result = nextInteger(input);
  if (*result != "1234") {
    std::cout << "%TEST_FAILED% time=0 testname=testNextInteger (question_6) message=got " << *result << std::endl;
  }
}

int main(int argc, char** argv) {
  std::cout << "%SUITE_STARTING% question_6" << std::endl;
  std::cout << "%SUITE_STARTED%" << std::endl;

  std::cout << "%TEST_STARTED% testNextInteger (question_6)" << std::endl;
  testNextInteger();
  std::cout << "%TEST_FINISHED% time=0 testNextInteger (question_6)" << std::endl;

  std::cout << "%SUITE_FINISHED% time=0" << std::endl;

  return (EXIT_SUCCESS);
}

