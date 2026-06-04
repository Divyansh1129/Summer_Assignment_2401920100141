/*
Problem: Spiral Matrix

Given a matrix, return all its elements in spiral order.

Approach: Use four boundaries (top, bottom, left, right) and traverse the matrix layer by layer in a spiral pattern.

Time Complexity: O(m × n)
Space Complexity: O(1)
*/


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if (n == 0) return {};
        int m = matrix[0].size();
        
        int left = 0, right = m - 1;
        int top = 0, bottom = n - 1;
        vector<int> ans;

        while (top <= bottom && left <= right) {
 
            for (int i = left; i <= right; i++)
                ans.push_back(matrix[top][i]);
            top++;

            for (int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    ans.push_back(matrix[bottom][i]);
                bottom--;
            }

         
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }

        return ans;
    }
};
