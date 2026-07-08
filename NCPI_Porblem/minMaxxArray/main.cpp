#include <iostream>
#include <vector>
#include "Solution.cpp"
using namespace std;
int main() {
    Solution sol;
    vector<int> arr = {10, 2, 3, 2, 0, -1};
    vector<int> result = sol.minMax(arr);
    cout << "Min: " << result[0] << ", Max: " << result[1] << endl;
    return 0;
}
