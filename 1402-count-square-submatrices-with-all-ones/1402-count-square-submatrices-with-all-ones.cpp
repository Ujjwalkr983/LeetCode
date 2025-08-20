class Solution {
public:
    int helper(int m, int n, vector<vector<int>>& matrix) {
        int count = 0;

        // DP matrix to store size of largest square ending at (i,j)
        vector<vector<int>> dp(m, vector<int>(n, 0));

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 1) {
                    if(i == 0 || j == 0) {
                        dp[i][j] = 1; // First row or column
                    } else {
                        dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
                    }
                    count += dp[i][j];
                }
            }
        }

        return count;
    }

    int countSquares(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int count = helper(m, n, matrix);
        return count;
    }
};




//REcussion method and easy to understand
class solution {
public:
    int helper(int m, int n, vector<vector<int>>& matrix) {
        int count = 0;

        // Start from bottom-right and build up square sizes
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 1 && i > 0 && j > 0) {
                    matrix[i][j] = min({matrix[i-1][j], matrix[i][j-1], matrix[i-1][j-1]}) + 1;
                }
                count += matrix[i][j];
            }
        }

        return count;
    }

    int countSquares(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int count = helper(m, n, matrix);
        return count;
    }
};