/* 
 * File:   question_9.h
 * Author: liangdeo
 *
 * Created on 24 March 2014, 13:38
 * 
 * Given two strings a and b, find whether any anagram of string a is a sub-string of string b. For eg: 
if a = xyz and b = afdgzyxksldfm then the program should return true.
 */

#ifndef QUESTION_9_H
#define	QUESTION_9_H

#include <string>
using namespace std;

namespace question_9 {
  bool hasPattern(const string &input, const string &pattern);
}



#endif	/* QUESTION_9_H */

