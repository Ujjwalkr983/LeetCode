class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, n = nums.size();
        for(i = 0; i<nums.size(); i++) if(nums[i] == 0) break;
        int j = i+1;
        while(j < n){
            if(nums[j] != 0){
                swap(nums[j], nums[i]);
                while(i < n){
                    if(nums[i] == 0) break;
                    i++;
                }
            }
            j++;
        }
    }
};