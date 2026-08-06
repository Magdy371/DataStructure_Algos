#include <iostream>
using namespace std;
bool isPalindromNumber(int n){
    string s = to_string(n);
    int left = 0;
    int right = s.length() - 1;
    while(left < right) {
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool isPalindromNumber2(int num){
    if(num < 0) return false;
    int original = num;
    int reversed = 0;
    while(num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}
int main() {
    int n = 12321;
    cout << isPalindromNumber(n) << endl;
    cout << isPalindromNumber2(n) << endl;
    return 0;
}