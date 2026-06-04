/*
Problem: Reshape the Matrix

Given a matrix and two integers r and c, reshape the matrix into a new matrix with r rows and c columns while preserving the original row-traversal order.

Approach: Map elements from the original matrix to the new matrix using their linear index.

Time Complexity: O(m × n)
Space Complexity: O(r × c)
*/


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();
        if(n*m!=r*c)
        {
            return mat;
        }
        vector<vector<int>> ans(r, vector<int>(c));
        for(int i=0;i<n*m;i++)
        {
            ans[i/c][i%c]=mat[i/m][i%m];
        }
        return ans;
    }
};