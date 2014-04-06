/* 
 * File:   question_8_test.cpp
 * Author: liangdeo
 *
 * Created on 24-Mar-2014, 10:28:19
 */

#include <stdlib.h>
#include <iostream>
#include "question_8.h"

/*
 * Simple C++ Test Suite
 */
using namespace question_8;
void testGetAbsolutePath(
    const string& absolute, const string& relative, const string& golden) {
  string& result = getAbsolutePath(absolute, relative);
  if (result != golden) {
    std::cout << 
        "%TEST_FAILED% time=0 testname=testGetAbsolutePath (question_8_test)" <<
        " message=\n" <<
        "expect: " << golden << endl <<
        "actual: " << result << endl;
  }
}

int main(int argc, char** argv) {
  std::cout << "%SUITE_STARTING% question_8_test" << std::endl;
  std::cout << "%SUITE_STARTED%" << std::endl;

  std::cout << "%TEST_STARTED% testGetAbsolutePath (question_8_test)" << std::endl;
  testGetAbsolutePath("/usr/bin/mail", "../../../etc/xyz/../abc", "/etc/abc");
  testGetAbsolutePath("/usr/bin/mail/", "../../../etc/xyz/../abc", "/etc/abc");
  testGetAbsolutePath("/usr/bin/mail", "../../../etc/xyz/../abc/", "/etc/abc");
  testGetAbsolutePath("/usr/bin/mail//", "../../../etc//xyz/../abc", "/etc/abc");
  testGetAbsolutePath("/usr/bin/mail/", "../../../etc/xyz/../abc/../../../", "");
  testGetAbsolutePath("/usr/bin/mail/", "../../../etc/xyz/../abc/../..", "");
  std::cout << "%TEST_FINISHED% time=0 testGetAbsolutePath (question_8_test)" << std::endl;

  std::cout << "%SUITE_FINISHED% time=0" << std::endl;

  return (EXIT_SUCCESS);
}

