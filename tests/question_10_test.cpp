/* 
 * File:   question_10_test.cpp
 * Author: liangdeo
 *
 * Created on 24-Mar-2014, 16:07:40
 */

#include <stdlib.h>
#include <iostream>
#include "question_10.h"

/*
 * Simple C++ Test Suite
 */
using namespace question_10;

void testFindMinRectangle() {
  const vector<vector<int> > map = {
    {0, 0, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 1, 1, 0, 0},
    {0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0}};
  findMinRectangle(map);
  const vector<vector<int> > map2 = {
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}};
  findMinRectangle(map2);
}

int main(int argc, char** argv) {
  std::cout << "%SUITE_STARTING% question_10_test" << std::endl;
  std::cout << "%SUITE_STARTED%" << std::endl;

  std::cout << "%TEST_STARTED% testFindMinRectangle (question_10_test)" << std::endl;
  testFindMinRectangle();
  std::cout << "%TEST_FINISHED% time=0 testFindMinRectangle (question_10_test)" << std::endl;

  std::cout << "%SUITE_FINISHED% time=0" << std::endl;

  return (EXIT_SUCCESS);
}

