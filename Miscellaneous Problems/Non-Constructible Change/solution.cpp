#include <vector>
using namespace std;

// Accepts a vector of type int as input and returns the non-constructible change.
int nonConstructibleChange(vector<int> coins) {
  int change = 0;
  sort(coins.begin(), coins.end());
  for (auto &coin: coins) {
    if (coin > change + 1)
      return change + 1;
    else change += coin;
  }
  return change + 1;
}