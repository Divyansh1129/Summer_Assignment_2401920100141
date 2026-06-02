/*
Problem: Maximum Subarray

Given an integer array, find the contiguous subarray with the largest sum and return that sum.

Approach: Use Kadane's Algorithm to keep track of the current subarray sum and the maximum sum found so far.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = 0;
        int maxi = INT_MIN;

        for(int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
            maxi = max(maxi, (int)sum);

            if(sum < 0) {
                sum = 0;
            }
        }

        return maxi;
    }
};