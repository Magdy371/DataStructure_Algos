#include <iostream>
#include "Solution.cpp"
using namespace std;

int main() {
    Solution sol;
    vector<int> arr = {9, 8, 4, 2, 1, 7, 6, 3};
    cout << sol.missingNum(arr) << endl;
    return 0;
}
