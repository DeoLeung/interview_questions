#include "question_5.h"

void question_5::insertNode(Node* &head, Node *node) {
  // empty list
  if (!head) {
    head = node;
    node->next = node;
    return;
  }
  
  // insert before head
  if (node->value <= head->value) {
    Node *tail = head;
    while (tail->next != head) tail = tail->next;
    tail->next = node;
    node->next = head;
    head = node;
  } else {
    Node* it = head;
    while (it->next != head) {
      if (node->value > it->next->value) {
        it = it->next;
        continue;
      }
      // insert in the middle.
      node->next = it->next;
      it->next = node;
      return;
    }
    // insert tail.
    node->next = head;
    it->next = node;
  }
}
