class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mp;
        int sum = 0, ans = 0;
        mp[0] = 1;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            int rem = sum - k;
            if(mp.find(rem) != mp.end()) ans+=mp[rem];
            mp[sum]++;
        }
        return ans;
    }
};