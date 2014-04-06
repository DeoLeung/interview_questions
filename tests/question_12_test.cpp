/* 
 * File:   question_12_test.cpp
 * Author: Deo Zhanzhao Liang <liangzhanzhao1985@gmail.com>
 *
 * Created on 06-Apr-2014, 11:04:31
 */

#include <stdlib.h>
#include <iostream>
#include "question_12.h"

/*
 * Simple C++ Test Suite
 */
using namespace question_12;

void testFindWordInMatrix(
    const vector<vector<char> >& matrix,
    const string& word,
    const bool golden) {
  if (findWordInMatrix(matrix, word) != golden) {
    std::cout << "%TEST_FAILED% time=0 testname=testFindWordInMatrix (question_12_test) message=error message sample" << std::endl;
  }
}

int main(int argc, char** argv) {
  std::cout << "%SUITE_STARTING% question_12_test" << std::endl;
  std::cout << "%SUITE_STARTED%" << std::endl;

  std::cout << "%TEST_STARTED% testFindWordInMatrix (question_12_test)" << std::endl;
  const vector<vector<char> >& matrix = {
      {'o', 'f', 'a', 's'},
      {'l', 'l', 'q', 'w'},
      {'z', 'o', 'w', 'k'}};
  testFindWordInMatrix(matrix, "follow", true);
  testFindWordInMatrix(matrix, "follo", true);
  testFindWordInMatrix(matrix, "follower", false);
  std::cout << "%TEST_FINISHED% time=0 testFindWordInMatrix (question_12_test)" << std::endl;

  std::cout << "%SUITE_FINISHED% time=0" << std::endl;

  return (EXIT_SUCCESS);
}

