class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0, i = 0, n = nums.size(), cnt = 0;

        while(i<n){
            if(nums[i] == 1){
                cnt++;
                maxi = max(maxi, cnt);
            }
            else if(nums[i] == 0){
                cnt = 0;
            }
            i++;
        }
        return maxi;
    }
};