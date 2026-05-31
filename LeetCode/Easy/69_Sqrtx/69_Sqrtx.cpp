/**
 * Problem: Sqrt(x)
 * Platform: LeetCode
 * Problem URL: https://leetcode.com/problems/sqrtx/
 * Difficulty: Easy
 * Language: C++
 * Date: 2026-05-31T08:13:46.141Z
 * Performance:
 * Runtime: 0ms (Beats 100.00%)
 * Memory: 8.51MB (Beats 49.22%)
 */

class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        int start=0, end=x,mid,ans;
        while(start<=end){
            mid=start+(end-start)/2;
            if(mid==x/mid){
                ans=mid;
                break;
            }


            else if (mid<x/mid){
                ans=mid;
                start=mid+1;

            }
            else {
                end=mid-1;
            }
            


        }
        return ans;
        
    }
};