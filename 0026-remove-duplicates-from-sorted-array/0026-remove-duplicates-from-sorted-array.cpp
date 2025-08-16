class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 1, n = nums.size();
        int temp = nums[0];
        while(j<n){
            if(nums[j] == temp){
                j++;
            }
            else{
                i++;
                temp = nums[j];
                swap(nums[i], nums[j]);
                j++;
            }
        }
        return i+1;
    }
};