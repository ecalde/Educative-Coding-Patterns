using namespace std;

#include <iostream>
#include <limits>
#include <vector>

class MinSizeSubArraySum {
public:
    static int findMinSubArray(int S, const vector<int>& arr) {
        int minLength = numeric_limits<int>::max();
        int windowSum = 0;
        int windowStart = 0;
        for (int windowEnd = 0; windowEnd < arr.size(); windowEnd++) {
            windowSum += arr[windowEnd];
            // shrink the window as small as possible until the 'windowSum' is smaller than 'S'
            while (windowSum >= S) {
                minLength = min(minLength, windowEnd - windowStart + 1);
                windowSum -= arr[windowStart];
                windowStart++;
            }
        }
        return minLength == numeric_limits<int>::max() ? 0 : minLength;
    }
};