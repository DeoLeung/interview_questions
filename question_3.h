/* 
 * File:   question_3.h
 * Author: liangdeo
 *
 * Created on 19 March 2014, 10:31
 * Given an input integer array, write a function that returns an array such that all the low numbers in the input array are sorted before all the medium numbers in the input array, which come before all the high numbers in the array. 

You can assume that someone has written functions for you like: 

public boolean isLow(int input); 
public boolean isMedium(int input); 
public boolean isHigh(int input); 

You can also assume that every int will fall into one (and only one) of these categories. 

For example: 
if < 0 is low, > 100 high, 0-100 medium 
input: [3, -1, 105, 108] 
valid outputs: [-1, 3, 105, 108] or [-1, 3, 108, 105] 

I was able to solve this in linear time and linear space. How can it be done in linear time with constant space??
*/

#ifndef QUESTION_3_H
#define	QUESTION_3_H

#include <vector>

using namespace std;

namespace question_3 {
  
  vector<int>* sortArray(vector<int> &input_vec);
  
}


#endif	/* QUESTION_3_H */

