class Solution {
public:
    void fun(int ind, int target, vector<int> &temp, vector<vector<int>>& ans, vector<int>& nums){
        if(target == 0) {ans.push_back(temp); return;}
        for(int i = ind; i < nums.size(); i++){
            if(i > ind && nums[i] == nums[i-1]) continue;
            if(nums[i] > target) break;
            temp.push_back(nums[i]);
            fun(i + 1, target - nums[i], temp, ans, nums);
            temp.pop_back();
        }
    } 
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        fun(0, target, temp, ans, candidates);
        return ans;
    }
};