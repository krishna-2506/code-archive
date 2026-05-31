/**
 * Problem: Search Insert Position
 * Platform: LeetCode
 * Problem URL: https://leetcode.com/problems/search-insert-position/
 * Difficulty: Easy
 * Language: C++
 * Date: 2026-05-31T06:24:08.131Z
 * Performance:
 * Runtime: 0ms (Beats 100.00%)
 * Memory: 13.74MB (Beats 41.82%)
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size();
        int mid;
        if(target>nums[high-1]){
            return high;
        }
        while(low<=high){
              mid=(low+high)/2;
            if(nums[mid]==target){  
                return mid;
            }
          
            if(target<nums[mid]){     
            high=mid-1;    
            }else{
            low=mid+1;        
            }
          
        }
         return  low;   
    }
};