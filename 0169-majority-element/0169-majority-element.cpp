class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = nums[0];
        int cnt = 0, n = nums.size();
        for(int i = 0; i<n; i++){
            if(cnt == 0) ele = nums[i];
            if(nums[i] == ele) cnt++;
            else cnt --;
        }

        cnt = 0;
        for(auto it: nums){
            if(it == ele) cnt++;
        }
        
        if(cnt>nums.size()/2) return ele;
        return -1;
    }
};