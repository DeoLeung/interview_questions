#include "question_7.h"
#include <queue>

struct Node {
  int x;
  int y;
  int distance;
  
  Node(int x_i, int y_i, int distance_i) {
    x = x_i;
    y = y_i;
    distance = distance_i;
  }
  
  bool operator>(const Node &node) const {
    return distance > node.distance;
  }
};

void question_7::markDistance(vector<vector<int> >& map) {
  priority_queue<Node, vector<Node>, greater<Node> > min_heap;
  const int x_max = map.size() - 1;
  const int y_max = map[0].size() - 1;
  // get the guard nodes.
  for (int x = 0; x < map.size(); ++x) {
    for (int y = 0; y < map[x].size(); ++y) {
      if (map[x][y] == -1) {
        min_heap.emplace(x, y, 0);
      }
    }
  }
  while (!min_heap.empty()) {
    auto node = min_heap.top();
    min_heap.pop();
    for (int x = -1; x <= 1; ++x) {
      for (int y = -1; y <= 1; ++y) {
        // only visit the up/down/left/right node.
        if ((x == 0 && y == 0) || (x != 0 && y != 0)) continue;
        // get real (x, y) on the map
        int x_map = node.x + x;
        int y_map = node.y + y;
        // skip the node out of boundary or it's obstacle and guard
        if (x_map < 0 || y_map < 0 || x_map > x_max || y_map > y_max || 
            map[x_map][y_map] < 0) continue;
        // update the node if we have a shorter path to it or it's not visited.
        if (map[x_map][y_map] == 0 || node.distance + 1 < map[x_map][y_map]) {
          map[x_map][y_map] = node.distance + 1;
          min_heap.emplace(x_map, y_map, map[x_map][y_map]);
        }
      }
    }
  }
}