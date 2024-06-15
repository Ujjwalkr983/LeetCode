class Solution {
public:
    int n;
    long long int solve(int i, vector<int>& nums, vector<int>& dp){
        if(i >= n-1) return 0;
        if(dp[i] != -1) return dp[i];
        long long int mini = INT_MAX;

        for(int ind = 1; ind<=nums[i]; ind++){
            mini = min(mini, 1 + solve(i+ind, nums, dp));
        }

        return dp[i] = mini;
    }
    int jump(vector<int>& nums) {
        n = nums.size();
        vector<int>dp(n, -1);
        return solve(0, nums, dp);
    }
};