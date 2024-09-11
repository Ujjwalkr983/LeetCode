class Solution {
public:
    int target, n;
    void fun(int ind, int sum, vector<int>& temp, vector<vector<int>> &ans, vector<int>& nums){
        if(target == sum){ 
            ans.push_back(temp); return;
        }
        if(sum > target || ind >= n) return;
        for(int i = ind; i<nums.size(); i++){
            temp.push_back(nums[i]);
            fun(i, sum + nums[i], temp, ans, nums);
            temp.pop_back();
        }

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int tar) {
        vector<vector<int>> ans;
        vector<int> temp;
        target = tar; n = nums.size();
        fun(0, 0, temp, ans, nums);
        return ans;
    }
};