#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
  int missingNum(vector<int> &arr) {
    int n = arr.size() + 1;

    // Use long long for the sum to prevent overflow with large n
    long long expectedSum = (long long)n * (n + 1) / 2;
    long long actualSum = 0;

    for (int num : arr) {
      actualSum += num;
    }

    return (int)(expectedSum - actualSum);
  }
};
