class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=-1;
        for(int i=0;i<nums.size();i++)
        if(nums[i]==0)
        {
            c=i;
        break;
         }
         if (c!=-1){
        for(int j=c+1;j<nums.size();j++){
            if(nums[j]!=0){
            swap(nums[c],nums[j]);
            c++;}
        }
         }
    }
};