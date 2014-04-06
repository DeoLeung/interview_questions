/* 
 * File:   question_6.h
 * Author: liangdeo
 *
 * Created on 20 March 2014, 10:43
 * 
 * Write a function return an integer that satisfies the following conditions: 
1) positive integer 
2) no repeated digits, eg., 123 (valid), 122 (invalid) 
3) incremental digit sequence, eg., 1234 (valid) 1243(invalid) 
4) the returned integer MUST be the smallest one that greater than the input. eg., input=987, return=1234 

function signature could be like this: 
String nextInteger(String input)
 */

#ifndef QUESTION_6_H
#define	QUESTION_6_H

#include <string>

using namespace std;

namespace question_6 {
  string* nextInteger(const string &input);
}

#endif	/* QUESTION_6_H */

