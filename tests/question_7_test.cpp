/* 
 * File:   question_7_test.cpp
 * Author: liangdeo
 *
 * Created on 21-Mar-2014, 10:32:09
 */

#include <stdlib.h>
#include <iostream>
#include "question_7.h"

/*
 * Simple C++ Test Suite
 */
using namespace question_7;

void testMarkDistance() {
  vector<vector<int> > map = {{0, 0, 0}, {-2, -1, -1}, {-2, 0, 0}};
  markDistance(map);
  for (auto &i : map) {
    for (auto &y : i) cout << y;
    cout << endl;
  }
}

int main(int argc, char** argv) {
  std::cout << "%SUITE_STARTING% question_7_test" << std::endl;
  std::cout << "%SUITE_STARTED%" << std::endl;

  std::cout << "%TEST_STARTED% testMarkDistance (question_7_test)" << std::endl;
  testMarkDistance();
  std::cout << "%TEST_FINISHED% time=0 testMarkDistance (question_7_test)" << std::endl;

  std::cout << "%SUITE_FINISHED% time=0" << std::endl;

  return (EXIT_SUCCESS);
}

