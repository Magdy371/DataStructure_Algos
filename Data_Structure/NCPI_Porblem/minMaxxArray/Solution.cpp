#include <vector>
using namespace std;
class Solution{
    public:
        vector<int> minMax(vector<int> &arr){
            int min = arr[0], max = arr[0];
            int size = arr.size();
            for(int i=1; i<size; i++){
                if(arr[i]<min){
                    min = arr[i];
                }else if (arr[i]>max) {
                    max = arr[i];
                }
            }
            vector<int> result = {min, max};
            return result;
        }
};
