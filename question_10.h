/* 
 * File:   question_10.h
 * Author: liangdeo
 *
 * Created on 24 March 2014, 15:53
 * 
 * given a board with black (1) and white (0), black are all connected. find the min rectangle that contains all black. 

example: 
0 0 0 0 0 
0 1 1 1 0 
0 1 1 0 0 
0 1 0 0 0 
0 0 0 0 0 

the min rectangle contains all black (1) is the rectangle from (1,1) - (3, 3)
 */

#ifndef QUESTION_10_H
#define	QUESTION_10_H

#include <vector>
using namespace std;

namespace question_10 {
  void findMinRectangle(const vector<vector<int> > &map);
}

#endif	/* QUESTION_10_H */

