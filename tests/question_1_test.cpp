/* 
 * File:   question_1_test.cpp
 * Author: liangdeo
 *
 * Created on 18-Mar-2014, 10:13:34
 */

#include <stdlib.h>
#include <iostream>
#include "question_1.h"

using namespace question_1;
/*
 * Simple C++ Test Suite
 */
/*
void testIncrease() {
  list<int>::iterator it;
  int value;
  increase(it, value);
  if (true) {
    std::cout << "%TEST_FAILED% time=0 testname=testIncrease (question_1_test) message=error message sample" << std::endl;
  }
}
*/
void testMultiply() {
  const forward_list<int> fl_a;
  const forward_list<int> fl_b;
  forward_list<int>* result = multiply(fl_a, fl_b);
  if (result) {
    std::cout << 
            "%TEST_FAILED% time=0 testname=testMultiply (question_1_test) "
            "message=empty input should have nullptr as result" << 
            std::endl;
  }
}
void printForwardList(const forward_list<int> &input) {
  for (auto &i : input) std::cout << i << ',';
  std::cout << endl;
}
void testMultiply1() {
  const forward_list<int> fl_a(1, 0);
  const forward_list<int> fl_b(1, 0);
  forward_list<int>* result = multiply(fl_a, fl_b);
  printForwardList(*result);
}
void testMultiply2() {
  const forward_list<int> fl_a(3, 9);
  const forward_list<int> fl_b(3, 9);
  forward_list<int>* result = multiply(fl_a, fl_b);
  printForwardList(*result);
}

int main(int argc, char** argv) {
  std::cout << "%SUITE_STARTING% question_1_test" << std::endl;
  std::cout << "%SUITE_STARTED%" << std::endl;

  //std::cout << "%TEST_STARTED% testIncrease (question_1_test)" << std::endl;
  //testIncrease();
  //std::cout << "%TEST_FINISHED% time=0 testIncrease (question_1_test)" << std::endl;

  std::cout << "%TEST_STARTED% testMultiply (question_1_test)" << std::endl;
  testMultiply();
  testMultiply1();
  testMultiply2();
  std::cout << "%TEST_FINISHED% time=0 testMultiply (question_1_test)" << std::endl;

  std::cout << "%SUITE_FINISHED% time=0" << std::endl;

  return (EXIT_SUCCESS);
}
