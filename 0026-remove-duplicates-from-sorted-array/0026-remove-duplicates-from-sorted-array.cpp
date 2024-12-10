class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 0, k = 0, n = nums.size();

        while(i<n && j<n){
            if(nums[i] == nums[j]){
                j++;
            }
            else if(nums[i] != nums[j]){
                k++; i++;
                nums[i] = nums[j];
            }
        }
        return k+1;
    }
};