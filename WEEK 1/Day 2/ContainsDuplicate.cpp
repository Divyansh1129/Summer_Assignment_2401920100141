/*
Problem: Contains Duplicate

Given an integer array, determine whether any value appears at least twice. Return true if a duplicate exists; otherwise, return false.

Approach: Use a hash map or hash set to track visited elements and check for duplicates efficiently.

Time Complexity: O(n)
Space Complexity: O(n)
*/


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mpp;

        for (auto it : nums) {
            mpp[it]++;
        }

        for (auto it : mpp) {
            if (it.second > 1) {
                return true;
            }
        }

        return false;
    }
};