class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i = 0; i< nums.size(); i++){
            int n = nums[i], sum = 0;
            while(n != 0){
                sum += (n%10);
                n /= 10;
            }
            nums[i] = sum;
            ans = min(ans, sum);
        }

        return ans;
    }
};