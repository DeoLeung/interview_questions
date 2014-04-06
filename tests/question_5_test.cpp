/* 
 * File:   question_5_test.cpp
 * Author: liangdeo
 *
 * Created on 20-Mar-2014, 08:38:41
 */

#include <stdlib.h>
#include <iostream>
#include "question_5.h"

/*
 * Simple C++ Test Suite
 */

using namespace question_5;

void testInsertNode() {
  Node* head = NULL;
  Node* node = new Node(1);
  insertNode(head, node);
  node = new Node(-1);
  insertNode(head, node);
  node = new Node(0);
  insertNode(head, node);
  node = new Node(2);
  insertNode(head, node);
  Node* it = head;
  do {
    std::cout << it->value << ", ";
    it = it->next;
  } while(it != head);
  std::cout << "end" << endl;
}

int main(int argc, char** argv) {
  std::cout << "%SUITE_STARTING% question_5_test" << std::endl;
  std::cout << "%SUITE_STARTED%" << std::endl;

  std::cout << "%TEST_STARTED% testInsertNode (question_5_test)" << std::endl;
  testInsertNode();
  std::cout << "%TEST_FINISHED% time=0 testInsertNode (question_5_test)" << std::endl;

  std::cout << "%SUITE_FINISHED% time=0" << std::endl;

  return (EXIT_SUCCESS);
}

