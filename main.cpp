#include <iostream>
#include "1_Sliding_Window/Maximum_Sum_Subarray_Of_Size_K.cpp"

int main(int argc, char* argv[]) {

    cout << "Maximum sum of a subarray of size K: "
         << MaxSumSubArrayOfSizeK::findMaxSumSubArray(3, vector<int>{2, 1, 5, 1, 3, 2}) << endl;
    cout << "Maximum sum of a subarray of size K: "
         << MaxSumSubArrayOfSizeK::findMaxSumSubArray(2, vector<int>{2, 3, 4, 1, 5}) << endl;
    return 0;
}
