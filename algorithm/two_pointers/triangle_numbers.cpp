#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> nums = {11, 4, 9, 6, 15, 18};
    int count = 0;
    //sort vector in ascending order
    sort(nums.begin(), nums.end());
    int right = nums.size()-2;
    int left = 0;
    // i is the largest side's index; it must be at least 2 so two smaller
    // sides (indices 0 and 1) are available to form a triangle.
    for(int i=nums.size()-1; i>=2; i--)
    {
        left = 0;
        right = i-1;
        while(left<right)
        {
            if(nums[left]+nums[right]>nums[i])
            {
                count += right-left;
                right--;
            }
            else
            {
                left++;
            }
        }
    }
    cout << count << endl;
}