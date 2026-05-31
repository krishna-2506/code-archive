/**
 * Problem: Find First and Last Position of Element in Sorted Array
 * Platform: LeetCode
 * Problem URL: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
 * Difficulty: Medium
 * Language: C++
 * Date: 2026-05-31T06:15:45.807Z
 * Performance:
 * Runtime: 1ms (Beats 2.52%)
 * Memory: 17.53MB (Beats 53.28%)
 */

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1,last=-1,mid;
        int start=0,end=nums.size()-1 ;
        while(start<=end){
        

            mid=start+(end-start)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            }
            else if (nums[mid]<target){
                start=mid+1;}
            else{

                end=mid-1;}
            }

    
        
    
        start=0,end=nums.size()-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                last=mid;
                start=mid+1;
            }
            else if (nums[mid]<target){
                start=mid+1;}
            else{
                end=mid-1;}
            }


        
        vector<int>a(2);
        a[0]=first;
        a[1]=last;
        return a;
    }
};