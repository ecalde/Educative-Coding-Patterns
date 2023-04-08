#include <iostream>
#include "1_Sliding_Window/Maximum_Sum_Subarray_Of_Size_K.cpp"
#include "1_Sliding_Window/Smallest_Subarray_With_A_Greater_Sum.cpp"

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
    return 0;
}
