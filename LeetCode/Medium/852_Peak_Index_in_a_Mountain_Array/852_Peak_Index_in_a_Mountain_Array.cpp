/**
 * Problem: Peak Index in a Mountain Array
 * Platform: LeetCode
 * Problem URL: https://leetcode.com/problems/peak-index-in-a-mountain-array/
 * Difficulty: Medium
 * Language: C++
 * Date: 2026-06-06T06:49:05.862Z
 * Performance:
 * Runtime: 0ms (Beats 100.00%)
 * Memory: 63.60MB (Beats 47.92%)
 */

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 1, end = arr.size() - 2, mid;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return mid;
            } else if (arr[mid] > arr[mid - 1]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return mid;
    }
};