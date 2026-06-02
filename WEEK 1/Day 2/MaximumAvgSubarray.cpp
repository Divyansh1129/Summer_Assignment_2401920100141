/*
Problem: Maximum Average Subarray I

Given an integer array and an integer k, find the contiguous subarray of length k that has the maximum average value.

Approach: Use the Sliding Window technique to maintain the sum of a subarray of size k and update the maximum sum efficiently.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum=sum+nums[i];
        }
        int maxi=sum;
        for(int i=k;i<nums.size();i++)
        {
            sum=sum-nums[i-k]+nums[i];
            maxi=max(sum,maxi);
        }
        return (double)maxi/k;
    }
};

