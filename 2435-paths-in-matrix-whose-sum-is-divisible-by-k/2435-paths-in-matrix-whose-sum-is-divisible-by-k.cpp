class Solution {
public:
    int mod = 1e9 + 7;
    int m, n;

    int fun(int i, int j, int sum, vector<vector<int>>& nums, int k,
            vector<vector<vector<int>>>& dp)
    {
        sum = (sum + nums[i][j]) % k;  // include current cell modulo k
        
        if (i == m - 1 && j == n - 1) {
            return sum % k == 0;
        }

        if (dp[i][j][sum] != -1) return dp[i][j][sum];

        long long ways = 0;

        if (i + 1 < m)
            ways += fun(i + 1, j, sum, nums, k, dp);

        if (j + 1 < n)
            ways += fun(i, j + 1, sum, nums, k, dp);

        return dp[i][j][sum] = ways % mod;
    }

    int numberOfPaths(vector<vector<int>>& nums, int k) {
        m = nums.size();
        n = nums[0].size();
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(k, -1)));

        return fun(0, 0, 0, nums, k, dp);
    }
};
