class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi = 0;
        for(int i = 0; i<=nums.size()-1; i++){
            if(i > maxi) return false;
            maxi = max(maxi, i+nums[i]);
        }
        return true;
    }
};
// 7979915997