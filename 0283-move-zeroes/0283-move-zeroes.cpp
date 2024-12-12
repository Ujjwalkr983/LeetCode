class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0, n = nums.size();
        for(int k = 0; k<n; k++){
            if(nums[k] == 0){
                j = k; break;
            }
        }
        i = j;

        while(i<n){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
            i++;
        }
    }
};