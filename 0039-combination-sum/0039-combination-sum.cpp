class Solution {
public:

    void fun(int i, int sum, vector<int>& ds, vector<vector<int>>& ans, vector<int>& nums, int target){

        if(sum>target || i>=nums.size()) return;
        if(sum == target){
            ans.push_back(ds);
            return;
        }
        for(int ind = i; ind<nums.size(); ind++){
            ds.push_back(nums[ind]);
            fun(ind, sum+nums[ind], ds, ans, nums, target);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        fun(0, 0, ds, ans, nums, target);
        return ans;
    }
};