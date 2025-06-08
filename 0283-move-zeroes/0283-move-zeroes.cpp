class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0, n = nums.size();
        for(i = 0; i<n; i++){
            if(nums[i] == 0) break;
        }
        j = i+1;
        while(j < n){
            if(nums[j] != 0){
                swap(nums[i], nums[j]);
                i++; j++;
            }
            else j++;
        }
    }
};