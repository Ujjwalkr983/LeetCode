class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el = nums[0], cnt = 1, n = nums.size();

        for(int i = 1; i<n; i++){
            if(cnt == 0){
                el = nums[i];
            }
            if(el == nums[i]) cnt++;
            if(el != nums[i]) cnt--;
        }

        int cnt1 = 0;
        for(int i = 0; i<n; i++){
            if(el == nums[i]){
                cnt1++;
            }
        }
        if(cnt1 >n/2 ) return el;

        return 0;
    }
};