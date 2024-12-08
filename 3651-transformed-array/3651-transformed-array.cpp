class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i] > 0){
                int ind = (i + nums[i]) % n;
                ans.push_back(nums[ind]);
            }
            else if( nums[i] < 0){
                int ind = abs(nums[i]) % n;
                ind = abs(i -ind +n) % n;
                ans.push_back(nums[ind]);
            }
            else ans.push_back(nums[i]);
        }
        return ans;
    }
};