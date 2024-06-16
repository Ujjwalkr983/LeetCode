class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long next_req=1,sum=0,count=0,i=0;
        while(next_req<=n){
            if(i<nums.size() && next_req>=(long long)nums[i]){
                sum+=(long long)nums[i];
                i++;
            }
            else{
                count++;
                sum+=next_req;
            }
            next_req=sum+1;
        }
        return count;      
    }
};