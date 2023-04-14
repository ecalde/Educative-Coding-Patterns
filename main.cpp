#include <iostream>
#include "1_Sliding_Window/Maximum_Sum_Subarray_Of_Size_K.cpp"
#include "1_Sliding_Window/Smallest_Subarray_With_A_Greater_Sum.cpp"
#include "1_Sliding_Window/Longest_Substring_With_Maximum_K_Distinct_Characters.cpp"
#include "1_Sliding_Window/Fruits_Into_Baskets.cpp"
#include "1_Sliding_Window/Longest_Substring_With_Distinct_Characters.cpp"

int main(int argc, char* argv[]) {

    // Maximum Sum Subarray Of Size K
    cout << "Maximum sum of a subarray of size K: "
         << MaxSumSubArrayOfSizeK::findMaxSumSubArray(3, vector<int>{2, 1, 5, 1, 3, 2}) << endl;
    cout << "Maximum sum of a subarray of size K: "
         << MaxSumSubArrayOfSizeK::findMaxSumSubArray(2, vector<int>{2, 3, 4, 1, 5}) << endl;

    // Smallest Subarray With A Greater Sum
    int result = MinSizeSubArraySum::findMinSubArray(7, vector<int>{2, 1, 5, 2, 3, 2});
    cout << "Smallest subarray length: " << result << endl;
    result = MinSizeSubArraySum::findMinSubArray(8, vector<int>{3, 4, 1, 1, 6});
    cout << "Smallest subarray length: " << result << endl;
    result = MinSizeSubArraySum::findMinSubArray(7, vector<int>{2, 1, 5, 2, 3, 2});
    cout << "Smallest subarray length: " << result << endl;

    // Longest Substring With Maximum K Distinct Characters
    cout << "Length of the longest substring: " << LongestSubstringKDistinct::findLength("araaci", 2)
         << endl;
    cout << "Length of the longest substring: " << LongestSubstringKDistinct::findLength("araaci", 1)
         << endl;
    cout << "Length of the longest substring: " << LongestSubstringKDistinct::findLength("cbbebi", 3)
         << endl;

    // Fruits Into Baskets
    cout << "Maximum number of fruits: "
         << MaxFruitCountOf2Types::findLength(vector<char>{'A', 'B', 'C', 'A', 'C'}) << endl;
    cout << "Maximum number of fruits: "
         << MaxFruitCountOf2Types::findLength(vector<char>{'A', 'B', 'C', 'B', 'B', 'C'}) << endl;

    // Longest Substring With Distinct Characters
    cout << "Length of the longest substring: " << NoRepeatSubstring::findLength("aabccbb") << endl;
    cout << "Length of the longest substring: " << NoRepeatSubstring::findLength("abbbb") << endl;
    cout << "Length of the longest substring: " << NoRepeatSubstring::findLength("abccde") << endl;
    return 0;
}
