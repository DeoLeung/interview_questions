/* 
 * File:   question_5.h
 * Author: liangdeo
 *
 * Created on 19 March 2014, 14:43
 * 
 * Insert an element in a sorted circular linked list.
 */

#ifndef QUESTION_5_H
#define	QUESTION_5_H

using namespace std;

namespace question_5 {
  struct Node {
    int value;
    Node* next;
    
    Node(const int val=0) {value = val;};
  };
  void insertNode(Node* &head, Node *node);
}

#endif	/* QUESTION_5_H */

