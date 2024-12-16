class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k > 0){
            int mini = INT_MAX; int ind = -1;
            for(int i = 0; i<nums.size(); i++){
                if(nums[i] < mini){
                    ind = i;
                    mini = nums[i];
                }
            }
            nums[ind] = multiplier*nums[ind];
            k--;
        }
        return nums;
    }
};