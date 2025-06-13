class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = nums[0];
        int cnt = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == ele) cnt++;
            else cnt--;
            if(cnt == 0 && i<nums.size()-1){
                ele = nums[i+1];
            }
        }
        cnt = 0;
        for(auto it:nums){
            if(it == ele) cnt++;
        }

        if(cnt>nums.size()/2) return ele;
        return -1;
    }
};