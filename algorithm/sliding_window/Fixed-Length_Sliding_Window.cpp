#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    int n = arr.size();

    if (n < k) {
        cout << "Invalid window size" << endl;
        return 0;
    }

    // 1. Compute sum of the first window of size k
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int best = windowSum;

    // 2. Slide the window from index k to n - 1
    for (int end = k; end < n; end++) {
        windowSum += arr[end] - arr[end - k]; // Add next element, remove leftmost
        best = max(best, windowSum);
    }

    cout << best << endl; 
    return 0;
}
