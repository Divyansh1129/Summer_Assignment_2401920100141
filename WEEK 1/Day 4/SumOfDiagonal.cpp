/*
Problem: Matrix Diagonal Sum

Given a square matrix, find the sum of its primary and secondary diagonal elements. If an element belongs to both diagonals, count it only once.

Approach: Traverse the matrix once and add elements from both diagonals, subtracting the middle element if it is counted twice.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();

        for (int i = 0; i < n; i++) {
            sum = sum + mat[i][i];
            sum = sum + mat[i][n - i - 1];
        }

        if (n % 2 == 1) {
            sum = sum - mat[n / 2][n / 2];
        }
        return sum;
    }
};