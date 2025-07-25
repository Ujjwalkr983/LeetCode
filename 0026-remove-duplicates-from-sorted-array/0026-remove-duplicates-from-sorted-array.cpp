class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 0, n = nums.size();
        while(j<n){
            if(nums[i] == nums[j]){
                j++;
            }
            else if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
                // j++;
            }
        }
        return i+1;
    }
};