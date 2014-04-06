/* 
 * File:   question_1.h
 * Author: liangdeo
 *
 * Created on 17 March 2014, 16:20
 * 
 * Given two extremely large numbers - each number is stored in a Singly Linked 
 * list, with the MSB at the head. You are not allowed to reverse the Linked 
 * lists. Write a program to multiply them in optimum space and time.
 */

#ifndef QUESTION_1_H
#define	QUESTION_1_H

#include <list>
#include <forward_list>

using namespace std;

namespace question_1 {
  
void increase(list<int>::iterator it, int value);
forward_list<int>* multiply(
        const forward_list<int> &fl_a, const forward_list<int> &fl_b);

} // namespace question_1

#endif	/* QUESTION_1_H */

