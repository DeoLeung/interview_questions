/* 
 * File:   main.cpp
 * Author: liangdeo
 *
 * Created on 17 March 2014, 13:32
 */

#include <cstdlib>
#include <iostream>
#include <forward_list>

#include "question_1.h"

using namespace std;

int main(int argc, char** argv) {
    forward_list<int> a, b;
    a.assign(3, 1);
    b.assign(3, 1);
    cout << "showing result:\n";
    forward_list<int> *c = question_1::multiply(a, b);
    for (auto &i : *c) {
        cout << i;
    }
    cout << endl;
    cout << "end of result.";
    return 0;
}

