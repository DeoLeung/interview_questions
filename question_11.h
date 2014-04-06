/* 
 * File:   question_11.h
 * Author: Deo Zhanzhao Liang <liangzhanzhao1985@gmail.com>
 *
 * Created on 04 April 2014, 11:05
 * 
 * Given stock price of Amazon for some consecutive days. Need to find the maximum span of each day’s stock price. Span is the amount of days before the given day where the stock price is less than that of given day 

E.g i/p = {2,4,6,9,5,1} 
o/p= { -1,1,2,3,2,-1}
 */

#ifndef QUESTION_11_H
#define	QUESTION_11_H
#include <vector>
using namespace std;
namespace question_11 {
  vector<int>& calculateSpan(const vector<int>& stock_price);
}

#endif	/* QUESTION_11_H */

