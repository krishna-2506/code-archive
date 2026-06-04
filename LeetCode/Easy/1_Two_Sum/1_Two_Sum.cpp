/**
 * Problem: Two Sum
 * Platform: LeetCode
 * Problem URL: https://leetcode.com/problems/two-sum/
 * Difficulty: Easy
 * Language: C++
 * Date: 2026-06-04T13:03:30.159Z
 * Performance:
 * Runtime: 43ms (Beats 24.22%)
 * Memory: 14.20MB (Beats 68.79%)
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j}; 
                }
            }
        }
        return {}; 
    }
};