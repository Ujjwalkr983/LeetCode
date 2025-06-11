class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        mp[nums[0]] = 0;
        for(int i = 1; i<nums.size(); i++){
            if(mp.find(target - nums[i]) != mp.end()) return {i, mp[target - nums[i]]};
            else mp[nums[i]] = i;
        }
        return {-1, -1};
    }
};