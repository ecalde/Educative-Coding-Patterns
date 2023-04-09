using namespace std;

#include <iostream>
#include <string>
#include <unordered_map>

class LongestSubstringKDistinct {
public:
    static int findLength(const string &str, int k) {
        int windowStart = 0, maxLength = 0;
        unordered_map<char, int> charFrequencyMap;
        // in the following loop we'll try to extend the range [windowStart, windowEnd]
        for (int windowEnd = 0; windowEnd < str.length(); windowEnd++) {
            char rightChar = str[windowEnd];
            charFrequencyMap[rightChar]++;
            // shrink the sliding window, until we are left with 'k' distinct characters in the frequency
            // map
            while ((int)charFrequencyMap.size() > k) {
                char leftChar = str[windowStart];
                charFrequencyMap[leftChar]--;
                if (charFrequencyMap[leftChar] == 0) {
                    charFrequencyMap.erase(leftChar);
                }
                windowStart++; // shrink the window
            }
            maxLength = max(maxLength, windowEnd - windowStart + 1); // remember the maximum length so far
        }

        return maxLength;
    }
};
