class Solution {
public:
    void fun(int ind, vector<int>& temp, vector<int>& nums, vector<vector<int>>& ans, vector<int>& mark){
        
        if(temp.size() == nums.size()) {ans.push_back(temp); return;}
        for(int i = 0; i<nums.size(); i++){
            if(!mark[i]){
                temp.push_back(nums[i]);
                mark[i] = 1;
                fun(i+1, temp, nums, ans, mark);
                temp.pop_back();
                mark[i] = 0;
            }
            else continue;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> mark (nums.size(), 0);
        fun(0, temp, nums, ans, mark);
        return ans;
    }
};