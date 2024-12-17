class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = INT_MIN; int sell = 0;
        for(int i = prices.size() - 1; i>=0; i--){
            sell = max(prices[i], sell);
            ans = max(ans, sell - prices[i]);
        }
        return ans;
    }
};