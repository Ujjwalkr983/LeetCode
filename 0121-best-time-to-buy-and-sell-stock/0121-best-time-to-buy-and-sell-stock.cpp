class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profit  = INT_MIN, minbuy = INT_MAX;
        int i = 0, j = 0, n = nums.size();
        while(j < n){
            minbuy = min(minbuy, nums[j]);
            profit = max(profit, nums[j] - minbuy);
            j++;
        }
        return profit;

    }
};