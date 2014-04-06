/* 
 * File:   question_8.h
 * Author: liangdeo
 *
 * Created on 24 March 2014, 09:40
 * 
 * Given a current absolute path, e.g., "/usr/bin/mail", and a relative one, e.g, "../../../etc/xyz/../abc" return the absolute path created from the combination of the first two paths. In the example strings, the answer should be "/etc/abc".
 */

#ifndef QUESTION_8_H
#define	QUESTION_8_H

#include <string>
#include <vector>

using namespace std;

namespace question_8 {
  bool pushFolderName(const string &path, const int start, 
                      const int length, vector<string> &path_buffer);
  bool getFolderNames(const string &path, vector<string> &path_buffer);
  string &getAbsolutePath(const string &absolute, const string &relative);
}

#endif	/* QUESTION_8_H */

