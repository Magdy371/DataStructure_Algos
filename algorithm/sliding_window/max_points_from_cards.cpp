#include <iostream>;
#include <vector>
using namespace std;
int main()
{
    vector<int> cards = {1, 2, 3, 4, 5, 6, 1};
    int k=3;
    int length = cards.size();
            if (length < k) {
                return 0;
            }
            
            int total = 0;
            for (int i = 0; i < length; i++) {
                total += cards[i];
            }
            
            // Edge case: if you pick all cards, the unpicked window size is 0
            int windowSize = length - k;
            if (windowSize == 0) {
                return total;
            }
    
            int windowSum = 0;
            // 1. Sum the first 'windowSize' elements (not 'k')
            for (int i = 0; i < windowSize; i++) {
                windowSum += cards[i];
            }
            
            int best = total - windowSum;
            
            // 2. Slide the window of size 'windowSize' across the rest of the array
            for (int i = windowSize; i < length; i++) {
                windowSum += cards[i] - cards[i - windowSize];
                int pickedUP = total - windowSum;
                if (pickedUP > best) {
                    best = pickedUP;
                }
            }
            
            return best;
}