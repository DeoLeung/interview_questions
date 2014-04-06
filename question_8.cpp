#include "question_8.h"

bool question_8::pushFolderName(const string &path, const int start, 
                                const int length, vector<string> &path_buffer) {
  string folder_name = path.substr(start, length);
  if (folder_name == "..") {
    // Pops a folder name from the stack, if stack is empty, return "".
    if (path_buffer.empty()) return false;
    path_buffer.pop_back();
  } else if (folder_name != ".") {
    path_buffer.push_back(folder_name);
  }
  return true;
};
bool question_8::getFolderNames(
    const string &path, vector<string> &path_buffer) {
  int start = 0;
  int end = 0;
  // Loops the input absolute path and push the folder names into stack.
  while (true) {
    end = path.find_first_of('/', end);
    if (end == string::npos) break;
    if (end > start + 1 && 
        !pushFolderName(path, start, end - start, path_buffer)) {
      return false;
    }
    ++end;
    start = end;
  }
  // The last folder name in absolute path may not contain '/'.
  if (path.back() != '/' && 
      !pushFolderName(path, start, end - start, path_buffer)) {
      return false;
  }
  return true;
};

string &question_8::getAbsolutePath(
    const string &absolute, const string &relative) {
  // a stack to store the new absolute path's folder names.
  vector<string> path_buffer;
  // the return absolute path, default to empty.
  string *path = new string();

  if (!getFolderNames(absolute, path_buffer)) return *path;
  if (!getFolderNames(relative, path_buffer)) return *path;

  // Joins the new absolute path.
  for (auto &folder_name : path_buffer) {
    path->append("/");
    path->append(folder_name);
  }
  return *path;
}
