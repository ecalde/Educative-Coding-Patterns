/*
Problem Statement
    Given an array of positive integers and a number ‘S,’ find the length of
    the smallest contiguous subarray whose sum is greater than or equal to ‘S’.
    Return 0 if no such subarray exists.

Solution
    This problem follows the Sliding Window pattern, and we can use a similar strategy as
    discussed in Maximum Sum Subarray of Size K. There is one difference though: in this problem,
    the sliding window size is not fixed. Here is how we will solve this problem:

      1 First, we will add-up elements from the beginning of the array until their sum becomes greater than or equal to ‘S.’

      2 These elements will constitute our sliding window. We are asked to find the smallest such
        window having a sum greater than or equal to ‘S.’ We will remember the length of this
        window as the smallest window so far.

      3 After this, we will keep adding one element in the sliding window (i.e., slide the window ahead) in a stepwise fashion.

      4 In each step, we will also try to shrink the window from the beginning. We will shrink the window until the window’s
        sum is smaller than ‘S’ again. This is needed as we intend to find the smallest window. This shrinking will also happen
        in multiple steps; in each step, we will do two things:
            - Check if the current window length is the smallest so far, and if so, remember its length.
            - Subtract the first element of the window from the running sum to shrink the sliding window.

    Here is the visual representation of this algorithm for the Example-1:
 */

class MinSizeSubArraySum {
    private static int findMinSubArray(int S, int[] a) {
        int n = a.length;

        int lengthOfSmallestSubarray = Integer.MAX_VALUE;
        int windowSum = 0;

        int windowStart = 0;
        for(int windowEnd = 0; windowEnd < n; windowEnd++) {
            windowSum += a[windowEnd]; // Add the next element to the window

            while(windowSum >= S) { // Shrink the window as small as possible until the 'windowSum' is smaller than 'K'
                lengthOfSmallestSubarray = Math.min(lengthOfSmallestSubarray, windowEnd-windowStart+1);
                windowSum -= a[windowStart]; // Discard the element at 'windowStart' since it is going out of the window
                windowStart++; // Shrink the window
            }
        }

        return lengthOfSmallestSubarray == Integer.MAX_VALUE ? 0 : lengthOfSmallestSubarray;
    }

    public static void main(String[] args) {
        int result = MinSizeSubArraySum.findMinSubArray(7, new int[] { 2, 1, 5, 2, 3, 2 });
        System.out.println("Smallest subarray length: " + result);
        result = MinSizeSubArraySum.findMinSubArray(8, new int[] { 3, 4, 1, 1, 6 });
        System.out.println("Smallest subarray length: " + result);
        result = MinSizeSubArraySum.findMinSubArray(8, new int[] { 2, 1, 5, 2, 3, 2});
        System.out.println("Smallest subarray length: " + result);
    }
}
/*
Time Complexity
    The time complexity of the above algorithm will be O(N)O(N). The outer for loop runs for all elements, and the
    inner while loop processes each element only once; therefore, the time complexity of the algorithm will be
    O(N+N)O(N+N), which is asymptotically equivalent to O(N)O(N).

Space Complexity
    The algorithm runs in constant space O(1)O(1).
 */