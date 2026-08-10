#include <iostream>
#include <vector>
#include <string>
using namespace std;


int calculateColumns(int length, int numRows) {
    if (numRows == 1) return length; // special case: straight line

    // Step 1: cycle length
    int cycleLen = 2 * numRows - 2;

    // Step 2: columns per cycle
    int colsPerCycle = numRows - 1;

    // Step 3: full cycles
    int fullCycles = length / cycleLen;

    // Step 4: remainder
    int remainder = length % cycleLen;

    // Step 5: extra columns
    int extraCols = 0;
    if (remainder > 0) {
        if (remainder <= numRows) {
            extraCols = 1; // only downward part
        } else {
            extraCols = 1 + (remainder - numRows); // downward + diagonal part
        }
    }

    // Step 6: total columns
    int totalCols = fullCycles * colsPerCycle + extraCols;
    return totalCols;
}
// string convert(string s, int numRows)
// {
//     int length = s.length();
//     int differ = length - 2;
//     vector<vector<string>> grid(numRows, vector<string>(length));
//     for( int i = 0;i < numRows < i++; )
//     {
//     }
// }

int main()
{
    int result = calculateColumns(14,3);
    cout <<"# Columns: "<<result<<endl;
    return 0;
}