class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        long long cnt = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                cnt++;
            }
            else{
                long long nos = (cnt*(cnt+1))/2;
                ans += nos;
                cnt = 0;
            }
        }
        long long nos = (cnt*(cnt+1))/2;
        ans += nos;
        return ans;
    }
};