class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
    vector<int> ans;
    int maxi = -1;
    for(int i = nums.size() -1; i>=0; i--){
        ans.push_back(maxi);
        maxi = max(nums[i], maxi);
    }
    reverse(ans.begin(), ans.end());
    return ans;
    }
};