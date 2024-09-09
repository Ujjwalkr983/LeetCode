class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int s = nums[0][0], e = nums[0][1];
        for(int i = 1; i<nums.size(); i++){
            if(nums[i][0] <= e && nums[i][0] >= s){
                if(e < nums[i][1]) e = nums[i][1];
            }
            else{
                ans.push_back({s, e});
                s = nums[i][0];
                e = nums[i][1];
            }
        }
        ans.push_back({s, e});

        return ans;
    }
};