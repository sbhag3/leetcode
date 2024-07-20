class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n = rowSum.size();
        int m = colSum.size();

        vector<vector<int>> ans(n, vector<int>(m, 0));
        int currRow = 0, currCol = 0;
        while (currRow < n && currCol < m) {
            ans[currRow][currCol] = min(rowSum[currRow], colSum[currCol]);
            rowSum[currRow] -= ans[currRow][currCol];
            colSum[currCol] -= ans[currRow][currCol];

            if (rowSum[currRow] == 0) {
                currRow++;
            } else currCol++;
        }
        return ans;
    }
};
