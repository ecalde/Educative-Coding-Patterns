"""
Problem Statement
    Given an array of positive numbers and a positive number ‘k,’
    find the maximum sum of any contiguous subarray of size ‘k’.
Solution
    A basic brute force solution will be to calculate the sum of all ‘k’
    sized subarrays of the given array to find the subarray with the highest sum.
    We can start from every index of the given array and add the next ‘k’ elements
    to find the subarray’s sum.
Time Complexity
    O(N∗K).
"""
def max_sub_array_of_size_k(k, arr):
  max_sum = 0
  window_sum = 0

  for i in range(len(arr) - k + 1):
    window_sum = 0
    for j in range(i, i+k):
      window_sum += arr[j]
    max_sum = max(max_sum, window_sum)
  return max_sum


def main():
  print("Maximum sum of a subarray of size K: " + str(max_sub_array_of_size_k(3, [2, 1, 5, 1, 3, 2])))
  print("Maximum sum of a subarray of size K: " + str(max_sub_array_of_size_k(2, [2, 3, 4, 1, 5])))


main()

"""
A better approach
    If you observe closely, you will realize that to calculate the sum of
    a contiguous subarray, we can utilize the sum of the previous subarray.
    For this, consider each subarray as a Sliding Window of size ‘k.’
    To calculate the sum of the next subarray, we need to slide the window
    ahead by one element. So to slide the window forward and calculate the
    sum of the new position of the sliding window, we need to do two things:
    Subtract the element going out of the sliding window, i.e.,
    subtract the first element of the window.
    Add the new element getting included in the sliding window, i.e.,
    the element coming right after the end of the window.
    This approach will save us from re-calculating the sum of the overlapping
    part of the sliding window. Here is what our algorithm will look like:
Time Complexity
    The time complexity of the above algorithm will be O(N)O(N).
Space Complexity
    The algorithm runs in constant space O(1)O(1).
"""

def max_sub_array_of_size_k(k, arr):
  max_sum , window_sum = 0, 0
  window_start = 0

  for window_end in range(len(arr)):
    window_sum += arr[window_end]  # add the next element
    # slide the window, we don't need to slide if we've not hit the required window size of 'k'
    if window_end >= k-1:
      max_sum = max(max_sum, window_sum)
      window_sum -= arr[window_start]  # subtract the element going out
      window_start += 1  # slide the window ahead
  return max_sum


def main():
  print("Maximum sum of a subarray of size K: " + str(max_sub_array_of_size_k(3, [2, 1, 5, 1, 3, 2])))
  print("Maximum sum of a subarray of size K: " + str(max_sub_array_of_size_k(2, [2, 3, 4, 1, 5])))

main()


