class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxi =INT_MIN;
        int i= 0, j = 0, n = nums.size();
        while(j<n){
            sum += nums[j];
            maxi = max(sum, maxi);
            if(sum < 0){
                sum = 0;
            }
            j++;
        }
        return maxi;
    }
};