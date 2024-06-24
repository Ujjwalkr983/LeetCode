class Solution {
public:
    int countCompleteDayPairs(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if((nums[i] + nums[j]) % 24 == 0) ans++;
            }
        }
        return ans;
    }
};