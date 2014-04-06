/* 
 * File:   question_2.h
 * Author: liangdeo
 *
 * Created on 18 March 2014, 11:02
 * 
 * Find the largest number in an array.
 */

#ifndef QUESTION_2_H
#define	QUESTION_2_H

#include <vector>

using namespace std;

namespace question_2 {
  
  int quickSort(vector<int> &input_vec, int start_index);
  int findLargestNumberInArray(vector<int> &input_vec);
}


#endif	/* QUESTION_2_H */

