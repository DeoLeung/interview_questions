/* 
 * File:   question_7.h
 * Author: liangdeo
 *
 * Created on 21 March 2014, 09:49
 * 
 * Given a 2-D matrix represents the room, obstacle and guard like the following (0 is room, B->obstacle, G-> Guard): 
0 0 0 
B G G 
B 0 0 

calculate the steps from a room to nearest Guard and set the matrix, like this 
2 1 1 
B G G 
B 1 1 
Write the algorithm, with optimal solution.
 */

#ifndef QUESTION_7_H
#define	QUESTION_7_H

#include <vector>
using namespace std;

namespace question_7 {
  void markDistance(vector<vector<int>> &map);
}
#endif	/* QUESTION_7_H */

