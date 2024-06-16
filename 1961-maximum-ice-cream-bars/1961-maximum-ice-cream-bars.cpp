class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int n = costs.size();
        int i = 0, ans = 0;
        while(i<n){
            if(coins >= costs[i]){
                coins -= costs[i];
                ans++;
            }
            i++;
        }
        return ans;
    }
};