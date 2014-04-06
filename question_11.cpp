#include "question_11.h"

#include <algorithm>
#include <utility>
#include <iostream>

vector<int>& question_11::calculateSpan(const vector<int>& stock_prices) {
  // result of the span calculation
  vector<int> *span = new vector<int>(stock_prices.size(), -1);
  if (span->size() > 1) {
    // sorted the stock prices, preserving the original index
    vector<pair<int, int> > sorted_prices;
    for (int i = 0; i < stock_prices.size(); ++i) {
      sorted_prices.push_back(make_pair(stock_prices[i], i));
    }
    sort(sorted_prices.begin(), sorted_prices.end());
    
    // whenever we find a value with its index lower than the previous one, we
    // increase the count
    int higher_index_count = 0;
    for (int i = 1; i < sorted_prices.size(); ++i) {
      if (sorted_prices[i].second < sorted_prices[i - 1].second) {
        ++higher_index_count;
      }
      // the span is calcuated by the index minus the higher index count
      const int number_of_span = i - higher_index_count;
      (*span)[sorted_prices[i].second] = number_of_span == 0? -1: number_of_span;
    }
  }
  return *span;
}
