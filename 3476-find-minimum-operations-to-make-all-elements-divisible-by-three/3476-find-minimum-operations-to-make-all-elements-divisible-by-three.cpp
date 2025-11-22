class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        for(int it: nums) if(it%3 != 0) ans++;
        return ans;
    }
};