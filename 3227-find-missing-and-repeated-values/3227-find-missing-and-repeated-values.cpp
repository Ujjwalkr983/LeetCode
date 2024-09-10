class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& nums) {
    map<int, int> mp;
    int first = -1, second = -1, n = nums.size(), m = nums[0].size();
    for(int i = 0; i<n; i++) for(int j = 0; j<m; j++) mp[nums[i][j]]++;

    for(int i = 1; i<=n*m; i++){
        if(mp.find(i) == mp.end()) second = i;
        else if(mp[i] == 2) first = i;
        if(second != -1 && first != -1) break;
    }
    return {first, second};
    }
};